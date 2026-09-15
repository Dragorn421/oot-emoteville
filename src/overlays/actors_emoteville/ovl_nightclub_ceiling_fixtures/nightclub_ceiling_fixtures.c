#include "nightclub_ceiling_fixtures.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "play_state.h"
#include "segmented_address.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "z_math.h"

#include "assets/objects/emoteville/object_nightclub/object_nightclub.h"
#include "assets/objects/gameplay_keep/emoteville/environment.h"
#include "assets/objects/gameplay_keep/emoteville/square_textured_64x64.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void ActorNightclubCF_Init(Actor* thisx, PlayState* play);
void ActorNightclubCF_Destroy(Actor* thisx, PlayState* play);
void ActorNightclubCF_Update(Actor* thisx, PlayState* play);
void ActorNightclubCF_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorNightclubCF_Profile = {
    /**/ ACTOR_NIGHTCLUB_CEILING_FIXTURES,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_NIGHTCLUB,
    /**/ sizeof(ActorNightclubCF),
    /**/ ActorNightclubCF_Init,
    /**/ ActorNightclubCF_Destroy,
    /**/ ActorNightclubCF_Update,
    /**/ ActorNightclubCF_Draw,
};

void ActorNightclubCF_Init(Actor* thisx, PlayState* play) {
    ActorNightclubCF* this = (ActorNightclubCF*)thisx;

    Actor_SetScale(&this->actor, 0.1f);
}

void ActorNightclubCF_Destroy(Actor* thisx, PlayState* play) {
}

static struct {
    float radius;
    int n_elems;
    s16 spin_speed;
    float ybob_omega;
} rings[N_RINGS] = {
    { 100, 3, 0x10000 / 20 / 7, 2 },
    { 300, 5, -0x10000 / 20 / 15, 5 },
};

void ActorNightclubCF_Update(Actor* thisx, PlayState* play) {
    ActorNightclubCF* this = (ActorNightclubCF*)thisx;

    for (int i_ring = 0; i_ring < ARRAY_COUNT(rings); i_ring++) {
        this->ring_yaw[i_ring] += rings[i_ring].spin_speed;
    }
}

void ActorNightclubCF_Draw(Actor* thisx, PlayState* play) {
    ActorNightclubCF* this = (ActorNightclubCF*)thisx;

    OPEN_DISPS_(play->state.gfxCtx);

    {
        Matrix_Translate(XYZ(&this->actor.world.pos), MTXMODE_NEW);
        s16 disco_ball_yaw = Actor_WorldYawTowardPoint(&this->actor, &play->view.eye);
        Matrix_RotateY(BINANG_TO_RAD(disco_ball_yaw), MTXMODE_APPLY);
        float s = 0.07f;
        Matrix_Scale(s, s, s, MTXMODE_APPLY);
        Matrix_Translate(0, -1000, 0, MTXMODE_APPLY);

        gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_disco_ball_64x64_TLUT));
        gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_disco_ball_64x64));
        Gfx_DrawDListOpa(play, square_textured_64x64_dl);
    }

    gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_cloud_64x64_TLUT));
    gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_cloud_64x64));
    for (int i_ring = 0; i_ring < ARRAY_COUNT(rings); i_ring++) {
        for (int i = 0; i < rings[i_ring].n_elems; i++) {
            Matrix_Translate(XYZ(&this->actor.world.pos), MTXMODE_NEW);
            float spin_yaw = 2 * M_PI / rings[i_ring].n_elems * i + BINANG_TO_RAD(this->ring_yaw[i_ring]);
            Matrix_RotateY(spin_yaw, MTXMODE_APPLY);
            Matrix_Translate(rings[i_ring].radius, cosf(spin_yaw * rings[i_ring].ybob_omega) * 30, 0, MTXMODE_APPLY);
            Vec3f pos;
            Matrix_MultVec3f(&gZeroVec, &pos);

            Matrix_Translate(XYZ(&pos), MTXMODE_NEW);
            s16 bb_yaw = Math_Vec3f_Yaw(&pos, &play->view.eye);
            Matrix_RotateY(BINANG_TO_RAD(bb_yaw), MTXMODE_APPLY);
            float s = 0.05f;
            Matrix_Scale(s, s, s, MTXMODE_APPLY);
            Matrix_Translate(0, -1000, 0, MTXMODE_APPLY);

            Gfx_DrawDListOpa(play, square_textured_64x64_dl);
        }
    }

    CLOSE_DISPS_(play->state.gfxCtx);
}
