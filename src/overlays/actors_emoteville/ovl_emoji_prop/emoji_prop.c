#include "emoji_prop.h"

#include "actor.h"
#include "gfx.h"
#include "object.h"
#include "play_state.h"
#include "printf.h"
#include "segmented_address.h"
#include "z_lib.h"

#include "assets/objects/emoteville/object_emoji_furniture/object_emoji_furniture.h"
#include "assets/objects/gameplay_keep/emoteville/square_textured_64x64.h"

#define FLAGS 0

void ActorEmojiProp_Init(Actor* thisx, PlayState* play);
void ActorEmojiProp_Destroy(Actor* thisx, PlayState* play);
void ActorEmojiProp_Update(Actor* thisx, PlayState* play);
void ActorEmojiProp_Draw(Actor* thisx, PlayState* play);

void ActorEmojiProp_WaitForObject(ActorEmojiProp* this, PlayState* play);
void ActorEmojiProp_UpdateImpl(ActorEmojiProp* this, PlayState* play);

ActorProfile ActorEmojiProp_Profile = {
    /**/ ACTOR_EMOJI_PROP,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ActorEmojiProp),
    /**/ ActorEmojiProp_Init,
    /**/ ActorEmojiProp_Destroy,
    /**/ ActorEmojiProp_Update,
    /**/ NULL,
};

#define PROP_FLAG_BILLBOARD_Y (1 << 0)
#define PROP_FLAG_SLIGHT_BILLBOARD_TINY (1 << 1)

static struct {
    s16 object;
    u16 propFlags;
    void* tlut;
    void* tex;
    float scale;
} prop_info[EMOJI_PROP_MAX] = {
    [EMOJI_PROP_BED] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY, emoji_bed_64x64_TLUT, emoji_bed_64x64,
                         0.11f },
    [EMOJI_PROP_CHAIR] = { OBJECT_EMOJI_FURNITURE, 0, emoji_chair_64x64_TLUT, emoji_chair_64x64, 0.05f },
    [EMOJI_PROP_FILE_CABINET_SMALL] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY,
                                        emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.05f },
    [EMOJI_PROP_FILE_CABINET_MEDIUM] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY,
                                         emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.06f },
    [EMOJI_PROP_FILE_CABINET_BIG] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY,
                                      emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.07f },
    [EMOJI_PROP_LIGHTBULB] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_BILLBOARD_Y, emoji_lightbulb_64x64_TLUT,
                               emoji_lightbulb_64x64, 0.02f },
    [EMOJI_PROP_SOFA] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY, emoji_sofa_64x64_TLUT,
                          emoji_sofa_64x64, 0.11f },
};

void ActorEmojiProp_Init(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    this->requiredObjectSlot = Object_GetSlot(&play->objectCtx, prop_info[this->actor.params].object);
    if (this->requiredObjectSlot == -1) {
        PRINTF("ActorEmojiProp %d missing object\n", this->actor.params);
        Actor_Kill(&this->actor);
        return;
    }
    this->actionFunc = ActorEmojiProp_WaitForObject;
}

void ActorEmojiProp_WaitForObject(ActorEmojiProp* this, PlayState* play) {
    if (Object_IsLoaded(&play->objectCtx, this->requiredObjectSlot)) {
        this->actor.objectSlot = this->requiredObjectSlot;
        Actor_SetObjectDependency(play, &this->actor);
        this->tlut = SEGMENTED_TO_VIRTUAL(prop_info[this->actor.params].tlut);
        this->tex = SEGMENTED_TO_VIRTUAL(prop_info[this->actor.params].tex);
        this->propFlags = prop_info[this->actor.params].propFlags;
        Actor_SetScale(&this->actor, prop_info[this->actor.params].scale);
        this->actor.draw = ActorEmojiProp_Draw;
        this->actionFunc = ActorEmojiProp_UpdateImpl;
    }
}

void ActorEmojiProp_Destroy(Actor* thisx, PlayState* play) {
}

void ActorEmojiProp_UpdateImpl(ActorEmojiProp* this, PlayState* play) {
    s16 yaw_towards_eye = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);

    if (this->propFlags & PROP_FLAG_BILLBOARD_Y) {
        this->actor.shape.rot.y = this->actor.home.rot.y + yaw_towards_eye;
    } else {
        const s16 slight_bb_activate_angle = 0xC00;
        const s16 slight_bb_activate_full_angle = 0x100;
        const s16 slight_bb_min_rel_angle = this->propFlags & PROP_FLAG_SLIGHT_BILLBOARD_TINY ? 0x200 : 0x800;
        s16 rel_yaw_towards_eye = yaw_towards_eye - this->actor.home.rot.y;
        float f = -1;
        s16 targetYaw = this->actor.home.rot.y;
        if (ABS(rel_yaw_towards_eye) < 0x4000) {
            if (rel_yaw_towards_eye < 0) {
                if (rel_yaw_towards_eye < -0x4000 + slight_bb_activate_full_angle) {
                    targetYaw = this->actor.home.rot.y - slight_bb_min_rel_angle;
                } else if (rel_yaw_towards_eye < -0x4000 + slight_bb_activate_angle) {
                    f = 1 - (float)((rel_yaw_towards_eye + 0x4000) - slight_bb_activate_full_angle) /
                                (slight_bb_activate_angle - slight_bb_activate_full_angle);
                    targetYaw = this->actor.home.rot.y - slight_bb_min_rel_angle * f;
                }
            } else {
                if (rel_yaw_towards_eye > 0x4000 - slight_bb_activate_full_angle) {
                    targetYaw = this->actor.home.rot.y + slight_bb_min_rel_angle;
                } else if (rel_yaw_towards_eye > 0x4000 - slight_bb_activate_angle) {
                    f = 1 - (float)(-(rel_yaw_towards_eye - 0x4000) - slight_bb_activate_full_angle) /
                                (slight_bb_activate_angle - slight_bb_activate_full_angle);
                    targetYaw = this->actor.home.rot.y + slight_bb_min_rel_angle * f;
                }
            }
        } else {
            if (rel_yaw_towards_eye < 0) {
                if (rel_yaw_towards_eye > -0x4000 - slight_bb_activate_full_angle) {
                    targetYaw = this->actor.home.rot.y + slight_bb_min_rel_angle;
                } else if (rel_yaw_towards_eye > -0x4000 - slight_bb_activate_angle) {
                    f = 1 - (float)(-(rel_yaw_towards_eye + 0x4000) - slight_bb_activate_full_angle) /
                                (slight_bb_activate_angle - slight_bb_activate_full_angle);
                    targetYaw = this->actor.home.rot.y + slight_bb_min_rel_angle * f;
                }
            } else {
                if (rel_yaw_towards_eye < 0x4000 + slight_bb_activate_full_angle) {
                    targetYaw = this->actor.home.rot.y - slight_bb_min_rel_angle;
                } else if (rel_yaw_towards_eye < 0x4000 + slight_bb_activate_angle) {
                    f = 1 - (float)((rel_yaw_towards_eye - 0x4000) - slight_bb_activate_full_angle) /
                                (slight_bb_activate_angle - slight_bb_activate_full_angle);
                    targetYaw = this->actor.home.rot.y - slight_bb_min_rel_angle * f;
                }
            }
        }
        Math_SmoothStepToS(&this->actor.shape.rot.y, targetYaw, 2, 0x400, 0x80);
    }
}

void ActorEmojiProp_Update(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    this->actionFunc(this, play);
}

void ActorEmojiProp_Draw(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    OPEN_DISPS_(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 8, this->tlut);
    gSPSegment(POLY_OPA_DISP++, 9, this->tex);
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);
    CLOSE_DISPS_(play->state.gfxCtx);
}
