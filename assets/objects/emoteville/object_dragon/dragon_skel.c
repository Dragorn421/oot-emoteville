#include "ultra64.h"
#include "animation.h"
#include "array_count.h"
#include "dragon_skel.h"
u64 dragon_skel_dragon_64x64_pngTLUT[] = {
#include "assets/objects/emoteville/object_dragon/dragon_skel_dragon_64x64_png.tlut.rgba16.inc.c"
};

u64 dragon_skel_dragon_64x64_png[] = {
#include "assets/objects/emoteville/object_dragon/dragon_skel_dragon_64x64_png.ci4.inc.c"
};

// limb 0
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_0_dl[] = {
    gsSPEndDisplayList(),
};
// limb 1
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 377, 103 }, 0, { 1100, 1443 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -53, 625 }, 0, { 566, 1884 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -26, -2 }, 0, { 1186, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 479, -62 }, 0, { 1248, 1529 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -26, 261 }, 0, { 915, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mesh_vtx[2], 3, 2),
    gsSP2Triangles(2, 3, 0, 0, 0, 4, 2, 0),
    gsSP1Triangle(0, 1, 4, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_1_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_1_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 2
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 277, -256 }, 0, { 1087, 1396 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -53, 625 }, 0, { 566, 1884 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 377, 103 }, 0, { 1100, 1443 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mesh_vtx[0], 1, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mesh_vtx[1], 2, 1),
    gsSP1Triangle(1, 2, 0, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_2_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_2_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 3
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_3_dl[] = {
    gsSPEndDisplayList(),
};
// limb 4
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 415, -411 }, 0, { 1278, 642 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 164, 202 }, 0, { 650, 899 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 301, -391 }, 0, { 1165, 1075 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 354, 140 }, 0, { 620, 1021 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_4_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_4_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 5
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 415, -411 }, 0, { 1278, 642 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 164, 202 }, 0, { 650, 899 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 542, -365 }, 0, { 1285, 225 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 625, -292 }, 0, { 1211, 140 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_5_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_5_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 6
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 164, 202 }, 0, { 650, 899 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 415, 357 }, 0, { 512, 191 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -44, 219 }, 0, { 653, 661 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 762, -171 }, 0, { 1086, 0 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 762, 306 }, 0, { 597, 0 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 625, -292 }, 0, { 1211, 140 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_vtx[0], 1, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_vtx[1], 2, 1),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_vtx[3], 3, 3),
    gsSP2Triangles(3, 4, 1, 0, 3, 1, 2, 0),
    gsSP2Triangles(2, 5, 3, 0, 2, 0, 5, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_6_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_6_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 7
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, -239, 423 }, 0, { 235, 900 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -136, 660 }, 0, { -7, 794 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 164, 202 }, 0, { 650, 899 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -44, 219 }, 0, { 653, 661 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_vtx[2], 1, 2),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_vtx[3], 1, 3),
    gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_7_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_7_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 8
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, -44, 219 }, 0, { 653, 661 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 415, 357 }, 0, { 512, 191 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -136, 660 }, 0, { -7, 794 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 193, 657 }, 0, { -4, 456 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_8_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_8_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 9
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 301, -391 }, 0, { 1165, 1075 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 354, 140 }, 0, { 620, 1021 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 220, 168 }, 0, { 591, 1158 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 324, 291 }, 0, { 466, 1051 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -274, 272 }, 0, { 486, 1665 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 277, -256 }, 0, { 1087, 1396 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 294, 271 }, 0, { 546, 1378 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -53, 625 }, 0, { 566, 1884 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_vtx[2], 3, 2),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_vtx[5], 2, 5),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_vtx[7], 1, 7),
    gsSP2Triangles(0, 1, 2, 0, 2, 5, 0, 0),
    gsSP2Triangles(2, 6, 5, 0, 6, 2, 3, 0),
    gsSP2Triangles(4, 6, 3, 0, 5, 6, 4, 0),
    gsSP1Triangle(5, 4, 7, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_9_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_9_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 10
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 324, 291 }, 0, { 466, 1051 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -274, 272 }, 0, { 486, 1665 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -264, 393 }, 0, { 361, 1654 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 320, 287 }, 0, { 231, 1029 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 185, 436 }, 0, { 79, 1167 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mesh_vtx[0], 3, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mesh_vtx[3], 2, 3),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 1, 0),
    gsSP1Triangle(4, 2, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_10_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_10_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 11
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, -26, -2 }, 0, { 1186, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -26, -304 }, 0, { 1496, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 479, -62 }, 0, { 1248, 1529 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -102, -533 }, 0, { 1753, 1933 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, 328, -209 }, 0, { 1421, 1493 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mesh_vtx[0], 3, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mesh_vtx[3], 2, 3),
    gsSP2Triangles(0, 1, 3, 0, 3, 2, 0, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_11_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_11_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 12
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mesh_vtx[] = {
    {{ { 0, 328, -209 }, 0, { 1421, 1493 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 0, -102, -533 }, 0, { 1753, 1933 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 40, -306 }, 0, { 1930, 1701 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 388, 64 }, 0, { 1550, 1344 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 316, -368 }, 0, { 1993, 1418 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mesh_vtx[2], 3, 2),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_12_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_12_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 13
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mesh_vtx[] = {
    {{ { 1, 316, -368 }, 0, { 1993, 1418 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 388, 64 }, 0, { 1550, 1344 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 436, -131 }, 0, { 1938, 948 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 349, 265 }, 0, { 1532, 1037 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_13_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_13_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 14
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mesh_vtx[] = {
    {{ { 1, 436, -131 }, 0, { 1938, 948 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 349, 265 }, 0, { 1532, 1037 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 345, -48 }, 0, { 1803, 641 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 308, 302 }, 0, { 1443, 679 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_14_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_14_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 15
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mesh_vtx[] = {
    {{ { 1, 209, -173 }, 0, { 1820, 448 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 430, 126 }, 0, { 1513, 222 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 345, -48 }, 0, { 1803, 641 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 308, 302 }, 0, { 1443, 679 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_15_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_15_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 16
// Hi from write_mesh_info_to_f3d_c
Gfx dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_RGBA16
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, dragon_skel_dragon_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(dragon_skel_dragon_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_SHADE
      | G_LIGHTING
      | G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mesh_vtx[] = {
    {{ { 1, 255, -339 }, 0, { 2048, 109 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 50, -339 }, 0, { 2048, 318 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 430, 126 }, 0, { 1513, 222 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1, 209, -173 }, 0, { 1820, 448 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000400, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};
Gfx dragon_skel_dragon_mesh_limb_16_dl[] = {
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mat_dl),
    gsSPDisplayList(dragon_skel_dragon_mesh_limb_16_dragon_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
StandardLimb dragon_skel_root = {
    { 0, 0, 0 },
    DRAGON_SKEL_BODY1 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_0_dl,
};
StandardLimb dragon_skel_body1 = {
    { 0, 187, -22 },
    DRAGON_SKEL_BODY2 - 1,
    DRAGON_SKEL_TAIL1 - 1,
    dragon_skel_dragon_mesh_limb_1_dl,
};
StandardLimb dragon_skel_body2 = {
    { 0, 146, 373 },
    DRAGON_SKEL_BODY3 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_2_dl,
};
StandardLimb dragon_skel_body3 = {
    { 0, 289, 58 },
    DRAGON_SKEL_BODY4 - 1,
    DRAGON_SKEL_HANDSROOT - 1,
    dragon_skel_dragon_mesh_limb_3_dl,
};
StandardLimb dragon_skel_body4 = {
    { 0, 309, -90 },
    DRAGON_SKEL_HEAD - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_4_dl,
};
StandardLimb dragon_skel_head = {
    { 0, 280, -53 },
    DRAGON_SKEL_JAW - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_5_dl,
};
StandardLimb dragon_skel_jaw = {
    { 0, 160, 32 },
    DRAGON_SKEL_JAWLOWER - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_6_dl,
};
StandardLimb dragon_skel_jawlower = {
    { 0, -38, 204 },
    LIMB_DONE,
    DRAGON_SKEL_JAWUPPER - 1,
    dragon_skel_dragon_mesh_limb_7_dl,
};
StandardLimb dragon_skel_jawupper = {
    { 0, -38, 204 },
    LIMB_DONE,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_8_dl,
};
StandardLimb dragon_skel_handsroot = {
    { 0, 289, 58 },
    DRAGON_SKEL_HANDS - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_9_dl,
};
StandardLimb dragon_skel_hands = {
    { 0, 26, 233 },
    LIMB_DONE,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_10_dl,
};
StandardLimb dragon_skel_tail1 = {
    { 0, 187, -22 },
    DRAGON_SKEL_TAIL2 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_11_dl,
};
StandardLimb dragon_skel_tail2 = {
    { -1, 84, -400 },
    DRAGON_SKEL_TAIL3 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_12_dl,
};
StandardLimb dragon_skel_tail3 = {
    { 0, 340, -184 },
    DRAGON_SKEL_TAIL4 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_13_dl,
};
StandardLimb dragon_skel_tail4 = {
    { 0, 391, 50 },
    DRAGON_SKEL_TAIL5 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_14_dl,
};
StandardLimb dragon_skel_tail5 = {
    { 0, 324, 108 },
    DRAGON_SKEL_TAIL6 - 1,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_15_dl,
};
StandardLimb dragon_skel_tail6 = {
    { 0, 286, -55 },
    LIMB_DONE,
    LIMB_DONE,
    dragon_skel_dragon_mesh_limb_16_dl,
};
void* dragon_skelLimbs[] = {
    &dragon_skel_root,
    &dragon_skel_body1,
    &dragon_skel_body2,
    &dragon_skel_body3,
    &dragon_skel_body4,
    &dragon_skel_head,
    &dragon_skel_jaw,
    &dragon_skel_jawlower,
    &dragon_skel_jawupper,
    &dragon_skel_handsroot,
    &dragon_skel_hands,
    &dragon_skel_tail1,
    &dragon_skel_tail2,
    &dragon_skel_tail3,
    &dragon_skel_tail4,
    &dragon_skel_tail5,
    &dragon_skel_tail6,
};
FlexSkeletonHeader dragon_skel = {
    {
        dragon_skelLimbs,
        ARRAY_COUNT(dragon_skelLimbs),
    },
    17,
};
