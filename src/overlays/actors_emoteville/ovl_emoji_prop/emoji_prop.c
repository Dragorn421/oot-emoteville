#include "emoji_prop.h"

#include "actor.h"
#include "collision_check.h"
#include "gfx.h"
#include "object.h"
#include "play_state.h"
#include "player.h"
#include "printf.h"
#include "segmented_address.h"
#include "sys_math3d.h"
#include "sys_matrix.h"
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

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0x00000000, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_NONE,
        OCELEM_ON,
    },
    { 20, 100, 0, { 0, 0, 0 } },
};

#define PROP_FLAG_BILLBOARD_Y (1 << 0)
#define PROP_FLAG_SLIGHT_BILLBOARD_TINY (1 << 1)
#define PROP_FLAG_NO_COLLIDER (1 << 2)
#define PROP_FLAG_COLLIDER_NARROW (1 << 3)

static struct {
    s16 object;
    u16 propFlags;
    void* tlut;
    void* tex;
    float scale;
} prop_info[EMOJI_PROP_MAX] = {
    [EMOJI_PROP_ABACUS] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_COLLIDER_NARROW, emoji_abacus_64x64_TLUT,
                            emoji_abacus_64x64, 0.03f },
    [EMOJI_PROP_BED] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY, emoji_bed_64x64_TLUT, emoji_bed_64x64,
                         0.11f },
    [EMOJI_PROP_BOOKS_PILE] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_COLLIDER_NARROW, emoji_books_pile_64x64_TLUT,
                                emoji_books_pile_64x64, 0.03f },
    [EMOJI_PROP_CALENDAR] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY | PROP_FLAG_COLLIDER_NARROW,
                              emoji_calendar_64x64_TLUT, emoji_calendar_64x64, 0.03f },
    [EMOJI_PROP_CHAIR] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_COLLIDER_NARROW, emoji_chair_64x64_TLUT, emoji_chair_64x64,
                           0.05f },
    [EMOJI_PROP_FILE_CABINET_SMALL] = { OBJECT_EMOJI_FURNITURE,
                                        PROP_FLAG_SLIGHT_BILLBOARD_TINY | PROP_FLAG_COLLIDER_NARROW,
                                        emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.05f },
    [EMOJI_PROP_FILE_CABINET_MEDIUM] = { OBJECT_EMOJI_FURNITURE,
                                         PROP_FLAG_SLIGHT_BILLBOARD_TINY | PROP_FLAG_COLLIDER_NARROW,
                                         emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.06f },
    [EMOJI_PROP_FILE_CABINET_BIG] = { OBJECT_EMOJI_FURNITURE,
                                      PROP_FLAG_SLIGHT_BILLBOARD_TINY | PROP_FLAG_COLLIDER_NARROW,
                                      emoji_file_cabinet_64x64_TLUT, emoji_file_cabinet_64x64, 0.07f },
    [EMOJI_PROP_LIGHTBULB] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_BILLBOARD_Y | PROP_FLAG_NO_COLLIDER,
                               emoji_lightbulb_64x64_TLUT, emoji_lightbulb_64x64, 0.02f },
    [EMOJI_PROP_PAINTING] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY | PROP_FLAG_COLLIDER_NARROW,
                              emoji_painting_64x64_TLUT, emoji_painting_64x64, 0.05f },
    [EMOJI_PROP_SOFA] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_SLIGHT_BILLBOARD_TINY, emoji_sofa_64x64_TLUT,
                          emoji_sofa_64x64, 0.11f },
    [EMOJI_PROP_TEDDY_BEAR] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_COLLIDER_NARROW, emoji_teddy_bear_64x64_TLUT,
                                emoji_teddy_bear_64x64, 0.03f },
    [EMOJI_PROP_TOOLBOX] = { OBJECT_EMOJI_FURNITURE, PROP_FLAG_COLLIDER_NARROW, emoji_toolbox_64x64_TLUT,
                             emoji_toolbox_64x64, 0.03f },
};

void ActorEmojiProp_Init(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    this->propFlags = prop_info[this->actor.params].propFlags;

    if (!(this->propFlags & PROP_FLAG_NO_COLLIDER)) {
        Collider_InitCylinder(play, &this->collider);
        Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    }

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
        Actor_SetScale(&this->actor, prop_info[this->actor.params].scale);
        this->actor.draw = ActorEmojiProp_Draw;
        this->actionFunc = ActorEmojiProp_UpdateImpl;
    }
}

void ActorEmojiProp_Destroy(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    if (!(this->propFlags & PROP_FLAG_NO_COLLIDER)) {
        Collider_DestroyCylinder(play, &this->collider);
    }
}

void ActorEmojiProp_UpdateImpl(ActorEmojiProp* this, PlayState* play) {
    s16 yaw_towards_eye = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);

    if (this->propFlags & PROP_FLAG_BILLBOARD_Y) {
        this->actor.shape.rot.y = this->actor.home.rot.y + yaw_towards_eye;
        this->actor.world.rot.y = this->actor.shape.rot.y;
    } else {
        const s16 slight_bb_activate_angle = 0xC00;
        const s16 slight_bb_activate_full_angle = 0x100;
        const s16 slight_bb_min_rel_angle = this->propFlags & PROP_FLAG_SLIGHT_BILLBOARD_TINY ? 0x200 : 0x800;
        s16 targetYaw = Math_SlightBillboardY(this->actor.home.rot.y, yaw_towards_eye, slight_bb_activate_angle,
                                              slight_bb_activate_full_angle, slight_bb_min_rel_angle);
        Math_SmoothStepToS(&this->actor.shape.rot.y, targetYaw, 2, 0x400, 0x80);
    }
}

void ActorEmojiProp_Update(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;
    Player* player = GET_PLAYER(play);

    this->actionFunc(this, play);

    if (!(this->propFlags & PROP_FLAG_NO_COLLIDER)) {
        Vec3f left = { this->propFlags & PROP_FLAG_COLLIDER_NARROW ? -150 : -420, 0, 0 };
        Vec3f right = { this->propFlags & PROP_FLAG_COLLIDER_NARROW ? 150 : 420, 0, 0 };
        Linef line;
        Matrix_SetTranslateRotateYXZ(XYZ(&this->actor.world.pos), &this->actor.world.rot);
        Matrix_Scale(XYZ(&this->actor.scale), MTXMODE_APPLY);
        Matrix_MultVec3f(&left, &line.a);
        Matrix_MultVec3f(&right, &line.b);

        Vec3f collider_pos;
        Math3D_LineSegClosestToPoint(&line, &player->actor.world.pos, &collider_pos);
        Vec3s collider_pos_vec3s = { XYZ(&collider_pos) };
        Collider_SetCylinderPosition(&this->collider, &collider_pos_vec3s);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
}

void ActorEmojiProp_Draw(Actor* thisx, PlayState* play) {
    ActorEmojiProp* this = (ActorEmojiProp*)thisx;

    OPEN_DISPS_(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 8, this->tlut);
    gSPSegment(POLY_OPA_DISP++, 9, this->tex);
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);
    CLOSE_DISPS_(play->state.gfxCtx);
}
