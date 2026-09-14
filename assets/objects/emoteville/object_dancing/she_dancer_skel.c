#include "ultra64.h"
#include "animation.h"
#include "array_count.h"
#include "she_dancer_skel.h"
u64 she_dancer_skel_woman_dancing_64x64_pngTLUT[] = {
#include "assets/objects/emoteville/object_dancing/she_dancer_skel_woman_dancing_64x64_png.tlut.rgba16.inc.c"
};

u64 she_dancer_skel_woman_dancing_64x64_png[] = {
#include "assets/objects/emoteville/object_dancing/she_dancer_skel_woman_dancing_64x64_png.ci4.inc.c"
};

// limb 0
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_0_dl[] = {
    gsSPEndDisplayList(),
};
// limb 1
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_1_dl[] = {
    gsSPEndDisplayList(),
};
// limb 2
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { -878, -302, 0 }, 0, { 0, 1343 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -878, -990, 0 }, 0, { 0, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 177, -990, 0 }, 0, { 1081, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1121, -56, 0 }, 0, { 2048, 1092 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1121, 273, 0 }, 0, { 2048, 753 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mesh_vtx[0], 3, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mesh_vtx[3], 2, 3),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_2_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_2_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 3
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { 177, -990, 0 }, 0, { 1081, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -878, -302, 0 }, 0, { 0, 1343 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 177, -990, 0 }, 0, { 1081, 2048 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -3, 3, 0 }, 0, { 896, 1030 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -501, -181, 0 }, 0, { 386, 1220 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 168, 67, 0 }, 0, { 1072, 964 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 168, 67, 0 }, 0, { 1072, 964 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -501, -181, 0 }, 0, { 386, 1220 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 154, 305, 0 }, 0, { 1058, 721 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 1121, 273, 0 }, 0, { 2048, 753 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_vtx[0], 3, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_vtx[3], 6, 3),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_vtx[9], 1, 9),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 1, 0),
    gsSP2Triangles(5, 3, 2, 0, 2, 9, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 8, 7, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_3_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_3_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 4
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { -501, -181, 0 }, 0, { 386, 1220 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 154, 305, 0 }, 0, { 1058, 721 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 186, -81, 0 }, 0, { 1040, 636 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 225, 45, 0 }, 0, { 1080, 505 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_4_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_4_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 5
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { 225, 45, 0 }, 0, { 1080, 505 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 186, -81, 0 }, 0, { 1040, 636 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 341, 26, 0 }, 0, { 1412, 556 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 13, -122, 0 }, 0, { 1076, 708 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_5_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_5_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 6
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { 341, 26, 0 }, 0, { 1412, 556 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 13, -122, 0 }, 0, { 1076, 708 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -10, -285, 0 }, 0, { 1283, 905 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -205, -328, 0 }, 0, { 1084, 948 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_6_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_6_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 7
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { 621, 1009, 0 }, 0, { 1535, 0 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -396, 1009, 0 }, 0, { 494, 0 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -501, -181, 0 }, 0, { 386, 1220 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -389, 64, 0 }, 0, { 451, 486 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -408, -148, 0 }, 0, { 431, 704 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { 225, 45, 0 }, 0, { 1080, 505 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_vtx[0], 3, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_vtx[3], 2, 3),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_vtx[5], 1, 5),
    gsSP2Triangles(0, 1, 3, 0, 5, 0, 3, 0),
    gsSP2Triangles(3, 2, 5, 0, 3, 4, 2, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_7_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_7_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// limb 8
// Hi from write_mesh_info_to_f3d_c
Gfx she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, she_dancer_skel_woman_dancing_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(she_dancer_skel_woman_dancing_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
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
Vtx she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mesh_vtx[] = {
    {{ { -408, -148, 0 }, 0, { 431, 704 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -389, 64, 0 }, 0, { 451, 486 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -437, -26, 0 }, 0, { 0, 621 }, { 0x0, 0x0, 0x0, 255 } }},
    {{ { -437, 175, 0 }, 0, { 0, 414 }, { 0x0, 0x0, 0x0, 255 } }},
};
Gfx she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mesh_dl[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mesh_vtx[0], 2, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mesh_vtx[2], 2, 2),
    gsSP2Triangles(2, 0, 1, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};
Gfx she_dancer_skel_SheDancerMesh_limb_8_dl[] = {
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mat_dl),
    gsSPDisplayList(she_dancer_skel_SheDancerMesh_limb_8_she_dancer_skel_Material_mesh_dl),
    gsSPEndDisplayList(),
};
StandardLimb she_dancer_skel_root = {
    { 0, 0, 0 },
    SHE_DANCER_SKEL_LEFTLEG - 1,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_0_dl,
};
StandardLimb she_dancer_skel_leftleg = {
    { -20, 168, 0 },
    LIMB_DONE,
    SHE_DANCER_SKEL_RIGHTLEG - 1,
    she_dancer_skel_SheDancerMesh_limb_1_dl,
};
StandardLimb she_dancer_skel_rightleg = {
    { -20, 168, 0 },
    LIMB_DONE,
    SHE_DANCER_SKEL_TORSO - 1,
    she_dancer_skel_SheDancerMesh_limb_2_dl,
};
StandardLimb she_dancer_skel_torso = {
    { -20, 168, 0 },
    SHE_DANCER_SKEL_LEFTSHOULDER - 1,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_3_dl,
};
StandardLimb she_dancer_skel_leftshoulder = {
    { -49, 470, 0 },
    SHE_DANCER_SKEL_LEFTARM - 1,
    SHE_DANCER_SKEL_RIGHTARM - 1,
    she_dancer_skel_SheDancerMesh_limb_4_dl,
};
StandardLimb she_dancer_skel_leftarm = {
    { 208, -29, 0 },
    SHE_DANCER_SKEL_LEFTFOREARM - 1,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_5_dl,
};
StandardLimb she_dancer_skel_leftforearm = {
    { 226, -29, 0 },
    LIMB_DONE,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_6_dl,
};
StandardLimb she_dancer_skel_rightarm = {
    { -49, 470, 0 },
    SHE_DANCER_SKEL_RIGHTFOREARM - 1,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_7_dl,
};
StandardLimb she_dancer_skel_rightforearm = {
    { -393, -41, 0 },
    LIMB_DONE,
    LIMB_DONE,
    she_dancer_skel_SheDancerMesh_limb_8_dl,
};
void* she_dancer_skelLimbs[] = {
    &she_dancer_skel_root,
    &she_dancer_skel_leftleg,
    &she_dancer_skel_rightleg,
    &she_dancer_skel_torso,
    &she_dancer_skel_leftshoulder,
    &she_dancer_skel_leftarm,
    &she_dancer_skel_leftforearm,
    &she_dancer_skel_rightarm,
    &she_dancer_skel_rightforearm,
};
FlexSkeletonHeader she_dancer_skel = {
    {
        she_dancer_skelLimbs,
        ARRAY_COUNT(she_dancer_skelLimbs),
    },
    9,
};
