#include "square_textured_64x64.h"

Vtx square_textured_64x64_vtx[] = {
    { { { -500, 0, 0 }, 0, { 0, 2048 }, { 0x0, 0x81, 0x0, 255 } } },
    { { { 500, 0, 0 }, 0, { 2048, 2048 }, { 0x0, 0x81, 0x0, 255 } } },
    { { { 500, 1000, 0 }, 0, { 2048, 0 }, { 0x0, 0x81, 0x0, 255 } } },
    { { { -500, 1000, 0 }, 0, { 0, 0 }, { 0x0, 0x81, 0x0, 255 } } },
};
Gfx square_textured_64x64_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(G_PM_NPRIMITIVE | G_CYC_2CYCLE | G_TP_PERSP | G_TD_CLAMP | G_TL_TILE | G_TT_RGBA16 | G_TF_BILERP |
                         G_TC_FILT | G_CK_NONE | G_CD_MAGICSQ | G_AD_PATTERN,
                     AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL |
                         GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA) |
                         GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | G_ZS_PIXEL | G_AC_NONE),
    gsDPLoadTLUT_pal16(0, 0x08000000),
    gsDPLoadMultiBlock_4b(0x09000000, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                          G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN,
                     G_ZBUFFER | G_SHADE | G_LIGHTING | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&square_textured_64x64_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
