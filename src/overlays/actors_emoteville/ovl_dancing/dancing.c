#include "dancing.h"

#include "actor.h"
#include "animation.h"
#include "collision_check.h"
#include "play_state.h"
#include "sys_matrix.h"
#include "z_lib.h"

#include <stddef.h>

#include "assets/objects/emoteville/object_dancing/object_dancing.h"

#define FLAGS ACTOR_FLAG_UPDATE_CULLING_DISABLED

void ActorDancing_Init(Actor* thisx, PlayState* play);
void ActorDancing_Destroy(Actor* thisx, PlayState* play);
void ActorDancing_Update(Actor* thisx, PlayState* play);
void ActorDancing_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorDancing_Profile = {
    /**/ ACTOR_DANCING,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_DANCING,
    /**/ sizeof(ActorDancing),
    /**/ ActorDancing_Init,
    /**/ ActorDancing_Destroy,
    /**/ ActorDancing_Update,
    /**/ ActorDancing_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { DMG_DEFAULT, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 20, 100, 0, { 0, 0, 0 } },
};

static ColliderCylinderInit sFootCylinderInit = {
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
        { 0xFFCFFFFF, HIT_SPECIAL_EFFECT_KNOCKBACK, 0x00 },
        { 0x00000000, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_ON | ATELEM_SFX_NONE,
        ACELEM_NONE,
        OCELEM_NONE,
    },
    { 10, 60, -30, { 0, 0, 0 } },
};

void ActorDancing_Init(Actor* thisx, PlayState* play) {
    ActorDancing* this = (ActorDancing*)thisx;

    Collider_InitCylinder(play, &this->body_collider);
    Collider_SetCylinder(play, &this->body_collider, &this->actor, &sCylinderInit);

    Collider_InitCylinder(play, &this->foot_collider);
    Collider_SetCylinder(play, &this->foot_collider, &this->actor, &sFootCylinderInit);

    Actor_SetScale(&this->actor, 0.04f);
    SkelAnime_InitFlex(play, &this->skelAnime, &she_dancer_skel, &she_dancer_idle_anim, NULL, NULL, 0);
}

void ActorDancing_Destroy(Actor* thisx, PlayState* play) {
    ActorDancing* this = (ActorDancing*)thisx;

    SkelAnime_Free(&this->skelAnime, play);
}

void ActorDancing_Update(Actor* thisx, PlayState* play) {
    ActorDancing* this = (ActorDancing*)thisx;
    s16 yaw_towards_eye = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);

    if (this->faint_timer != 0) {
        Math_StepToS(&this->actor.shape.rot.x, -0x4000, 0x800);
        this->actor.shape.yOffset = 5.0f / this->actor.scale.y;
        this->faint_timer--;
        return;
    }
    Math_StepToS(&this->actor.shape.rot.x, 0, 0x500);
    this->actor.shape.yOffset = 0.0f;

    if (this->rest_timer != 0) {
        this->rest_timer--;
    }

    if (this->actor.xzDistToPlayer > 30.0f && this->actor.xzDistToPlayer < 300.0f) {
        if (this->spin_speed < 0.5f) {
            Math_StepToAngleS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0x200);
        } else {
            this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        }
        if (this->rest_timer == 0) {
            float f = 1.0f - (float)ABS((s16)(this->actor.world.rot.y - this->actor.yawTowardsPlayer)) / 0x8000;
            this->actor.speed = CLAMP_MIN(f - 0.7f, 0.0f) / 0.3f * 5.0f;
            Actor_MoveXZGravity(&this->actor);
        }
    }

    Collider_SetCylinderPosition(&this->body_collider, &(Vec3s){ XYZ(&this->actor.world.pos) });
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->body_collider.base);
    if (this->spin_speed < 0.2f) {
        if (this->body_collider.base.acFlags & AC_HIT) {
            this->body_collider.base.acFlags &= ~AC_HIT;
            this->faint_timer = 100;
        }
        this->body_collider.base.acFlags &= ~AC_HARD;
    } else {
        this->body_collider.base.acFlags |= AC_HARD;
    }
    CollisionCheck_SetAC(play, &play->colChkCtx, &this->body_collider.base);
    if (this->foot_collider.base.atFlags & AT_HIT) {
        this->foot_collider.base.atFlags &= ~AT_HIT;
        this->rest_timer = 60;
    }
    if (this->spin_speed > 0.7f) {
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->foot_collider.base);
    }

    if (this->actor.xzDistToPlayer < 200.0f && this->rest_timer == 0) {
        Math_StepToF(&this->spin_speed, 1, 0.1f);
        this->spin_timer++;
    } else {
        Math_StepToF(&this->spin_speed, 0, 0.04f);
        if (this->spin_timer != 0) {
            this->spin_timer--;
        }
    }
    this->spin_angle += this->spin_speed * 0x10000 / 20 * 3;

    if (this->spin_timer >= 100) {
        this->rest_timer = 80;
        this->spin_timer = 0;
    }

    this->actor.shape.rot.y = Math_SlightBillboardY(this->actor.world.rot.y + this->spin_speed * this->spin_angle,
                                                    yaw_towards_eye, 0xC00, 0x100, 0x800);

    SkelAnime_Update(&this->skelAnime);
}

void ActorDancing_Draw(Actor* thisx, PlayState* play) {
    ActorDancing* this = (ActorDancing*)thisx;

    Vec3f left_foot_world_pos;
    Matrix_MultVec3f(&(Vec3f){ 900, 930, 0 }, &left_foot_world_pos);
    Collider_SetCylinderPosition(&this->foot_collider, &(Vec3s){ XYZ(&left_foot_world_pos) });

    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL,
                          NULL, this);
}
