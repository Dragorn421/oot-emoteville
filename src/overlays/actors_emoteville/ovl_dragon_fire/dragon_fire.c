#include "dragon_fire.h"

#include "actor.h"
#include "collision_check.h"
#include "gfx.h"
#include "play_state.h"
#include "segmented_address.h"
#include "z_lib.h"

#include "assets/objects/gameplay_keep/emoteville/square_textured_64x64.h"
#include "assets/objects/gameplay_keep/emoteville/tex_bomb.h"

#define FLAGS ACTOR_FLAG_UPDATE_CULLING_DISABLED

void ActorDragonFire_Init(Actor* thisx, PlayState* play);
void ActorDragonFire_Destroy(Actor* thisx, PlayState* play);
void ActorDragonFire_Update(Actor* thisx, PlayState* play);
void ActorDragonFire_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorDragonFire_Profile = {
    /**/ ACTOR_DRAGON_FIRE,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ActorDragonFire),
    /**/ ActorDragonFire_Init,
    /**/ ActorDragonFire_Destroy,
    /**/ ActorDragonFire_Update,
    /**/ ActorDragonFire_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { DMG_MAGIC_FIRE, HIT_SPECIAL_EFFECT_FIRE, 0x08 },
        { 0x00000000, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_ON | ATELEM_SFX_NONE,
        ACELEM_NONE,
        OCELEM_NONE,
    },
    { 20, 30, 0, { 0, 0, 0 } },
};

void ActorDragonFire_Init(Actor* thisx, PlayState* play) {
    ActorDragonFire* this = (ActorDragonFire*)thisx;

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);

    Actor_SetScale(&this->actor, 0.001f);
    this->life = 40;
    this->actor.shape.rot.x = 0;
}

void ActorDragonFire_Destroy(Actor* thisx, PlayState* play) {
}

void ActorDragonFire_Update(Actor* thisx, PlayState* play) {
    ActorDragonFire* this = (ActorDragonFire*)thisx;

    Actor_MoveXYZ(&this->actor);

    Actor_UpdateBgCheckInfo(play, &this->actor, 10.0f, 10.0f, 30.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2);

    Collider_SetCylinderPosition(&this->collider, &(Vec3s){ XYZ(&this->actor.world.pos) });
    CollisionCheck_SetAT(play, &play->colChkCtx, &this->collider.base);

    Math_StepToF(&this->actor.scale.x, 0.03f, 0.001f);
    Actor_SetScale(&this->actor, this->actor.scale.x);

    this->life--;
    if (this->life == 0) {
        Actor_Kill(&this->actor);
    }

    this->actor.shape.rot.y = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);
}

void ActorDragonFire_Draw(Actor* thisx, PlayState* play) {
    OPEN_DISPS_(play->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_fire_64x64_TLUT));
    gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_fire_64x64));
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);

    CLOSE_DISPS_(play->state.gfxCtx);
}
