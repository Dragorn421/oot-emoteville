#include "dragon.h"

#include "actor.h"
#include "actor_profile.h"
#include "animation.h"
#include "assets/objects/emoteville/object_dragon/dragon_skel.h"
#include "overlays/actors_emoteville/ovl_dragon_fire/dragon_fire.h"
#include "play_state.h"
#include "rand.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "z_math.h"

#include <stddef.h>

#include "assets/objects/emoteville/object_dragon/object_dragon.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_ATTENTION_ENABLED | ACTOR_FLAG_HOSTILE)

void ActorDragon_Init(Actor* thisx, PlayState* play);
void ActorDragon_Destroy(Actor* thisx, PlayState* play);
void ActorDragon_Update(Actor* thisx, PlayState* play);
void ActorDragon_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorDragon_Profile = {
    /**/ ACTOR_DRAGON,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_DRAGON,
    /**/ sizeof(ActorDragon),
    /**/ ActorDragon_Init,
    /**/ ActorDragon_Destroy,
    /**/ ActorDragon_Update,
    /**/ ActorDragon_Draw,
};

void ActorDragon_Init(Actor* thisx, PlayState* play) {
    ActorDragon* this = (ActorDragon*)thisx;

    Actor_SetScale(&this->actor, 0.05f);

    SkelAnime_InitFlex(play, &this->skelAnime, &dragon_skel, NULL, NULL, NULL, 0);
    Animation_PlayOnce(&this->skelAnime, &dragon_straighten_anim);
}

void ActorDragon_Destroy(Actor* thisx, PlayState* play) {
    ActorDragon* this = (ActorDragon*)thisx;

    SkelAnime_Free(&this->skelAnime, play);
}

void ActorDragon_Update(Actor* thisx, PlayState* play) {
    ActorDragon* this = (ActorDragon*)thisx;

    s16 lastFrame = Animation_GetLastFrame(&dragon_straighten_anim);
    if (SkelAnime_Update(&this->skelAnime)) {
        float playSpeed, startFrame, endFrame;
        if (this->skelAnime.curFrame == 0.0f) {
            playSpeed = 1.0f;
            startFrame = 0.0f;
            endFrame = lastFrame;
        } else {
            playSpeed = -1.0f;
            startFrame = lastFrame;
            endFrame = 0.0f;
        }
        Animation_Change(&this->skelAnime, &dragon_straighten_anim, playSpeed, startFrame, endFrame, ANIMMODE_ONCE,
                         0.0f);
    }

    float f = 1.0f / 4;
    this->mouth_open_fac = CLAMP_MIN(this->skelAnime.curFrame - (1 - f) * lastFrame, 0) / (f * lastFrame);
    if (this->mouth_open_fac > 0.3f) {
        s16 rand_pitch = Rand_CenteredFloat(0x600 * 2);
        s16 rand_yaw = Rand_CenteredFloat(0x600 * 2);

        ActorDragonFire* fire =
            (ActorDragonFire*)Actor_Spawn(&play->actorCtx, play, ACTOR_DRAGON_FIRE, XYZ(&this->mouth_pos), rand_pitch,
                                          this->actor.world.rot.y + rand_yaw, 0, 0);
        if (fire != NULL) {
            fire->life = 100;
            fire->actor.speed = this->actor.speed * (3.0f + Rand_ZeroFloat(1.0f));
        }
    }

    this->actor.world.rot.y += 0x100;
    this->actor.speed = 3.0f;
    Actor_MoveXZGravity(&this->actor);

    s16 yaw_towards_eye = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);
    this->actor.shape.rot.y =
        Math_SlightBillboardY(this->actor.world.rot.y + 0x4000, yaw_towards_eye, 0xC00, 0x100, 0x400) - 0x4000;
}

s32 ActorDragon_OverrideLimbDraw(struct PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                 void* thisx) {
    ActorDragon* this = thisx;

    if (limbIndex == DRAGON_SKEL_JAW) {
        Matrix_MultVec3f(&gZeroVec, &this->actor.focus.pos);
    }
    if (limbIndex == DRAGON_SKEL_JAWUPPER) {
        rot->x = DEG_TO_BINANG(-30 * this->mouth_open_fac);
        Matrix_MultVec3f(&gZeroVec, &this->mouth_pos);
    }
    if (limbIndex == DRAGON_SKEL_JAWLOWER) {
        rot->x = DEG_TO_BINANG(30 * this->mouth_open_fac);
    }

    return false;
}

void ActorDragon_Draw(Actor* thisx, PlayState* play) {
    ActorDragon* this = (ActorDragon*)thisx;

    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          ActorDragon_OverrideLimbDraw, NULL, this);
}
