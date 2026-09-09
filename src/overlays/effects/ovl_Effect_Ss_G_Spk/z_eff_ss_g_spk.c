/*
 * File: z_eff_ss_g_spk.c
 * Overlay: ovl_Effect_Ss_G_Spk
 * Description: Sparks
 */

#include "z_eff_ss_g_spk.h"

#include "libc64/qrand.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "segmented_address.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"
#include "skin_matrix.h"

#include "assets/objects/gameplay_keep/eff_spark_model.h"
#include "assets/objects/gameplay_keep/eff_spark_textures.h"
#include "assets/objects/gameplay_keep/emoteville/square_textured_64x64.h"
#include "assets/objects/gameplay_keep/emoteville/tex_bomb.h"

#define rPrimColorR regs[0]
#define rPrimColorG regs[1]
#define rPrimColorB regs[2]
#define rPrimColorA regs[3]
#define rEnvColorR regs[4]
#define rEnvColorG regs[5]
#define rEnvColorB regs[6]
#define rEnvColorA regs[7]
#define rTexIndex regs[8]
#define rScale regs[9]
#define rScaleStep regs[10]

u32 EffectSsGSpk_Init(PlayState* play, u32 index, EffectSs* this, void* initParamsx);
void EffectSsGSpk_Update(PlayState* play, u32 index, EffectSs* this);
void EffectSsGSpk_UpdateNoAccel(PlayState* play, u32 index, EffectSs* this);
void EffectSsGSpk_Draw(PlayState* play, u32 index, EffectSs* this);

EffectSsProfile Effect_Ss_G_Spk_Profile = {
    EFFECT_SS_G_SPK,
    EffectSsGSpk_Init,
};

u32 EffectSsGSpk_Init(PlayState* play, u32 index, EffectSs* this, void* initParamsx) {
    EffectSsGSpkInitParams* initParams = (EffectSsGSpkInitParams*)initParamsx;

    Math_Vec3f_Copy(&this->pos, &initParams->pos);
    Math_Vec3f_Copy(&this->velocity, &initParams->velocity);
    Math_Vec3f_Copy(&this->accel, &initParams->accel);
    this->gfx = SEGMENTED_TO_VIRTUAL(gEffSparkDL);

    if (initParams->updateMode == 0) {
        this->life = 10;
        this->vec.x = initParams->pos.x - initParams->actor->world.pos.x;
        this->vec.y = initParams->pos.y - initParams->actor->world.pos.y;
        this->vec.z = initParams->pos.z - initParams->actor->world.pos.z;
        this->update = EffectSsGSpk_Update;
    } else {
        this->life = 5;
        this->update = EffectSsGSpk_UpdateNoAccel;
    }

    this->draw = EffectSsGSpk_Draw;
    this->rPrimColorR = initParams->primColor.r;
    this->rPrimColorG = initParams->primColor.g;
    this->rPrimColorB = initParams->primColor.b;
    this->rPrimColorA = initParams->primColor.a;
    this->rEnvColorR = initParams->envColor.r;
    this->rEnvColorG = initParams->envColor.g;
    this->rEnvColorB = initParams->envColor.b;
    this->rEnvColorA = initParams->envColor.a;
    this->rTexIndex = 0;
    this->rScale = initParams->scale;
    this->rScaleStep = initParams->scaleStep;
    this->actor = initParams->actor;

    return 1;
}

void EffectSsGSpk_Draw(PlayState* play, u32 index, EffectSs* this) {
    GraphicsContext* gfxCtx = play->state.gfxCtx;

    OPEN_DISPS_(gfxCtx);

    Matrix_Translate(XYZ(&this->pos), MTXMODE_NEW);
    s16 yaw_towards_eye = Math_Vec3f_Yaw(&this->pos, &play->view.eye);
    float yaw = BINANG_TO_RAD(yaw_towards_eye);
    Matrix_RotateY(yaw, MTXMODE_APPLY);
    float s = 0.00005f * this->rScale;
    Matrix_Scale(s, s, s, MTXMODE_APPLY);
    Matrix_Translate(0, -500, 0, MTXMODE_APPLY);
    gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_fire_64x64_TLUT));
    gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_fire_64x64));
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);

    CLOSE_DISPS_(gfxCtx);
}

void EffectSsGSpk_Update(PlayState* play, u32 index, EffectSs* this) {

    this->accel.x = (Rand_ZeroOne() - 0.5f) * 3.0f;
    this->accel.z = (Rand_ZeroOne() - 0.5f) * 3.0f;

    if (this->actor != NULL) {
        if ((this->actor->category == ACTORCAT_EXPLOSIVE) && (this->actor->update != NULL)) {
            this->pos.x = this->actor->world.pos.x + this->vec.x;
            this->pos.y = this->actor->world.pos.y + this->vec.y;
            this->pos.z = this->actor->world.pos.z + this->vec.z;
        }
    }

    this->vec.x += this->accel.x;
    this->vec.z += this->accel.z;

    this->rTexIndex++;
    this->rTexIndex &= 3;
    this->rScale += this->rScaleStep;
}

// this update mode is unused in the original game
// with this update mode, the sparks don't move randomly in the xz plane, appearing to be on top of each other
void EffectSsGSpk_UpdateNoAccel(PlayState* play, u32 index, EffectSs* this) {
    if (this->actor != NULL) {
        if ((this->actor->category == ACTORCAT_EXPLOSIVE) && (this->actor->update != NULL)) {
            this->pos.x += (Math_SinS(this->actor->world.rot.y) * this->actor->speed);
            this->pos.z += (Math_CosS(this->actor->world.rot.y) * this->actor->speed);
        }
    }

    this->rTexIndex++;
    this->rTexIndex &= 3;
    this->rScale += this->rScaleStep;
}
