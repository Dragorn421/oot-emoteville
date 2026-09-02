#include "room_0_shape.h"

#include "ultra64.h"
#include "array_count.h"
#include "room.h"

u64 inside_house_Scene_Room_0_window_64x64_pngTLUT[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_window_64x64_png.tlut.rgba16.inc.c"
};

u64 inside_house_Scene_Room_0_ladder_64x64_pngTLUT[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_ladder_64x64_png.tlut.rgba16.inc.c"
};

u64 inside_house_Scene_Room_0_painting_64x64_pngTLUT[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_painting_64x64_png.tlut.rgba16.inc.c"
};

u64 inside_house_Scene_Room_0_window_64x64_png[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_window_64x64_png.ci4.inc.c"
};

u64 inside_house_Scene_Room_0_ladder_64x64_png[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_ladder_64x64_png.ci4.inc.c"
};

u64 inside_house_Scene_Room_0_painting_64x64_png[] = {
#include "assets/scenes/emoteville/insidehouse/exported/inside_house_Scene_Room_0_painting_64x64_png.ci4.inc.c"
};

// Hi from write_mesh_info_to_f3d_c
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_NONE
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(0, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 127, 76, 33, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_CULL_BACK
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mesh_vtx[] = {
    {{ { -22, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -493, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -493, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, 114 }, 0, { 16, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 114 }, 0, { 16, 18 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, 223 }, 0, { 32, 0 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 114 }, 0, { 16, 18 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 223 }, 0, { 32, 5 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 59, 141, 223 }, 0, { 32, 0 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 114 }, 0, { 16, 21 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 223 }, 0, { 32, 11 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, 114 }, 0, { 16, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 223 }, 0, { 32, 11 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, 223 }, 0, { 32, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -493, 141, 114 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -493, 141, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -493, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, 114 }, 0, { 16, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 114 }, 0, { 16, 21 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 114 }, 0, { 16, 18 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -22, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -106, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -400, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -106, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -106, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -400, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -106, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -106, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
    {{ { -400, 0, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7E, 255 } }},
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mesh_vtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 7, 9, 0, 8, 10, 7, 0),
    gsSP2Triangles(11, 0, 10, 0, 11, 12, 0, 0),
    gsSP2Triangles(13, 5, 12, 0, 13, 14, 5, 0),
    gsSP2Triangles(15, 13, 12, 0, 15, 12, 11, 0),
    gsSP2Triangles(16, 15, 11, 0, 16, 11, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 27, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(30, 31, 28, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mesh_vtx[32], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 3, 0),
    gsSP2Triangles(5, 7, 6, 0, 8, 7, 5, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 8, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 5, 13, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 15, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 18, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_NONE
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(0, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 101, 45, 127, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_CULL_BACK
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[] = {
    {{ { -22, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 0, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 0, 223 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, 223 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -400, 0, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 0, -210 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 130, -210 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 130, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -22, 0, 223 }, 0, { 0, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 130, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 59, 130, 223 }, 0, { 32, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 59, 0, 223 }, 0, { 0, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -493, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -493, 0, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 59, 0, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 0, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -493, 0, 223 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 0, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 130, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 130, 223 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 130, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -493, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -493, 130, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 0, 223 }, 0, { 0, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 130, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 130, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 0, 223 }, 0, { 0, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 0, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 0, 223 }, 0, { 0, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 130, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 130, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 0, 223 }, 0, { 0, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 59, 0, -210 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 0, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 130, -210 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -400, 0, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 0, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 130, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 130, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 141, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 130, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 130, -210 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 141, -210 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x7E, 0x0, 255 } }},
    {{ { -22, 141, -119 }, 0, { 0, 32 }, { 0x0, 0x7E, 0x0, 255 } }},
    {{ { -22, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x7E, 0x0, 255 } }},
    {{ { -106, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x7E, 0x0, 255 } }},
    {{ { -22, 141, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -22, 141, -210 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -22, 130, -210 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -22, 130, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, -210 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { 59, 141, -119 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -119 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -210 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { -400, 141, -119 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 141, -210 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 235, -210 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 235, -119 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 141, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -493, 141, 223 }, 0, { 0, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -493, 235, 223 }, 0, { 0, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 235, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 59, 141, 223 }, 0, { 32, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 141, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 235, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 59, 235, 223 }, 0, { 32, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 141, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -106, 235, -210 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -493, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 141, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -400, 235, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -493, 235, 6 }, 0, { 0, 32 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -22, 141, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 141, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 235, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -22, 235, 223 }, 0, { 32, 5 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 141, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 141, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 235, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 235, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 323, -119 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 443, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 348, 114 }, 0, { 16, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { 59, 141, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 235, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 348, 114 }, 0, { 16, 16 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 443, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, 114 }, 0, { 16, 16 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 235, 223 }, 0, { 32, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, 223 }, 0, { 32, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 323, -119 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 235, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, 6 }, 0, { 0, 32 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 348, 114 }, 0, { 16, 16 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 59, 141, 114 }, 0, { 16, 16 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -493, 141, 114 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 141, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 235, 6 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 348, 114 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -106, 141, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 141, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -400, 235, 223 }, 0, { 32, 32 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -106, 235, 223 }, 0, { 32, 11 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -493, 141, 223 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 141, 114 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 348, 114 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -493, 235, 223 }, 0, { 0, 32 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -400, 235, -119 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 235, -210 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { -400, 323, -119 }, 0, { 0, 32 }, { 0x7E, 0x0, 0x0, 255 } }},
    {{ { 59, 323, -119 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -210 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
    {{ { 59, 235, -119 }, 0, { 0, 32 }, { 0x82, 0x0, 0x0, 255 } }},
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 4, 11, 12, 0),
    gsSP2Triangles(13, 14, 5, 0, 13, 5, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[96], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 20, 25, 0, 24, 26, 20, 0),
    gsSP2Triangles(27, 28, 26, 0, 27, 29, 28, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_vtx[126], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mat_dl[] = {
    gsDPPipeSync(),
    gsDPSetOtherMode(
        G_PM_NPRIMITIVE
      | G_CYC_2CYCLE
      | G_TP_PERSP
      | G_TD_CLAMP
      | G_TL_TILE
      | G_TT_NONE
      | G_TF_BILERP
      | G_TC_FILT
      | G_CK_NONE
      | G_CD_MAGICSQ
      | G_AD_PATTERN
        ,
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(0, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 108, 67, 124, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_CULL_BACK
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mesh_vtx[] = {
    {{ { -22, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -22, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -22, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, 223 }, 0, { 11, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -400, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -400, 130, 223 }, 0, { 32, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -400, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -493, 130, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -493, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -22, 130, 223 }, 0, { 5, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, 223 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 59, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -22, 130, 223 }, 0, { 5, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -400, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x82, 255 } }},
    {{ { -106, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x82, 255 } }},
    {{ { -106, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x82, 255 } }},
    {{ { -400, 130, 6 }, 0, { 0, 32 }, { 0x0, 0x0, 0x82, 255 } }},
    {{ { -400, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, -210 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -106, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -400, 130, -119 }, 0, { 0, 32 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -493, 348, 114 }, 0, { 0, 32 }, { 0x0, 0xA5, 0xA8, 255 } }},
    {{ { -493, 235, 6 }, 0, { 0, 32 }, { 0x0, 0xA5, 0xA8, 255 } }},
    {{ { -400, 235, 6 }, 0, { 0, 32 }, { 0x0, 0xA5, 0xA8, 255 } }},
    {{ { -400, 348, 114 }, 0, { 16, 32 }, { 0x0, 0xA5, 0xA8, 255 } }},
    {{ { -493, 235, 223 }, 0, { 0, 32 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { -493, 348, 114 }, 0, { 0, 32 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { -400, 348, 114 }, 0, { 16, 32 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { -400, 235, 223 }, 0, { 32, 32 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { 59, 348, 114 }, 0, { 16, 16 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { -400, 348, 114 }, 0, { 16, 32 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { 59, 235, 223 }, 0, { 32, 0 }, { 0x0, 0x5B, 0xA8, 255 } }},
    {{ { 59, 348, 114 }, 0, { 16, 16 }, { 0x0, 0x54, 0xA1, 255 } }},
    {{ { -400, 348, 114 }, 0, { 16, 32 }, { 0x0, 0x54, 0xA1, 255 } }},
    {{ { -400, 443, 6 }, 0, { 0, 32 }, { 0x0, 0x54, 0xA1, 255 } }},
    {{ { 59, 443, 6 }, 0, { 0, 32 }, { 0x0, 0x54, 0xA1, 255 } }},
    {{ { -400, 235, -210 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { 59, 235, -210 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { 59, 323, -119 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { -400, 323, -119 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { 59, 443, 6 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { -400, 323, -119 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
    {{ { -400, 443, 6 }, 0, { 0, 32 }, { 0x0, 0xA9, 0xA5, 255 } }},
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mesh_vtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 8, 7, 0),
    gsSP2Triangles(9, 10, 5, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 9, 16, 0, 15, 16, 3, 0),
    gsSP2Triangles(17, 3, 18, 0, 17, 19, 3, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mesh_vtx[32], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 6, 3, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_floor_walls_ceiling_dl[] = {
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_floor_mesh_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_walls_mesh_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_floor_walls_ceiling_inside_house_Scene_Room_0_ceiling_mesh_dl),
    gsSPEndDisplayList(),
};
// Hi from write_mesh_info_to_f3d_c
Gfx inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mat_dl[] = {
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
        AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL
      | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
      | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
      | G_ZS_PIXEL
      | G_AC_NONE
    ),
    gsDPLoadTLUT_pal16(0, inside_house_Scene_Room_0_window_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(inside_house_Scene_Room_0_window_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 101, 45, 127, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_CULL_BACK
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mesh_vtx[] = {
    {{ { -487, 104, 95 }, 0, { 0, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 104, 150 }, 0, { 2048, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 49, 150 }, 0, { 2048, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 49, 95 }, 0, { 0, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { 54, 104, 127 }, 0, { 0, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 104, 72 }, 0, { 2048, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 49, 72 }, 0, { 2048, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 49, 127 }, 0, { 0, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 104, -44 }, 0, { 0, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 104, -98 }, 0, { 2048, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 49, -98 }, 0, { 2048, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 49, -44 }, 0, { 0, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -218, 104, -205 }, 0, { 0, 2048 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -273, 104, -205 }, 0, { 2048, 2048 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -273, 49, -205 }, 0, { 2048, 0 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -218, 49, -205 }, 0, { 0, 0 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -159, 104, 218 }, 0, { 0, 2048 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -104, 104, 218 }, 0, { 2048, 2048 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -104, 49, 218 }, 0, { 2048, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -159, 49, 218 }, 0, { 0, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -487, 246, 95 }, 0, { 0, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 246, 150 }, 0, { 2048, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 192, 150 }, 0, { 2048, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -487, 192, 95 }, 0, { 0, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { 54, 246, 127 }, 0, { 0, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 246, 72 }, 0, { 2048, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 192, 72 }, 0, { 2048, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 192, 127 }, 0, { 0, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 246, -44 }, 0, { 0, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 246, -98 }, 0, { 2048, 2048 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 192, -98 }, 0, { 2048, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { 54, 192, -44 }, 0, { 0, 0 }, { 0x81, 0x0, 0x0, 255 } }},
    {{ { -395, 246, -127 }, 0, { 0, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -395, 246, -72 }, 0, { 2048, 2048 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -395, 192, -72 }, 0, { 2048, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
    {{ { -395, 192, -127 }, 0, { 0, 0 }, { 0x7F, 0x0, 0x0, 255 } }},
};
Gfx inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mesh_vtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mesh_vtx[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_windows_dl[] = {
    gsSPDisplayList(inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_windows_inside_house_Scene_Room_0_window_mesh_dl),
    gsSPEndDisplayList(),
};
// Hi from write_mesh_info_to_f3d_c
Gfx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, inside_house_Scene_Room_0_ladder_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(inside_house_Scene_Room_0_ladder_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mesh_vtx[] = {
    {{ { -80, 141, -124 }, 0, { 369, -5376 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -48, 141, -124 }, 0, { 1661, -5376 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -48, 0, -124 }, 0, { 1661, 2058 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -80, 0, -124 }, 0, { 369, 2058 }, { 0x0, 0x7F, 0x0, 255 } }},
};
Gfx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mesh_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, inside_house_Scene_Room_0_ladder_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(inside_house_Scene_Room_0_ladder_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x100, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 127),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_CULL_BACK
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mesh_vtx[] = {
    {{ { -48, 141, -124 }, 0, { 1661, -5376 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -80, 141, -124 }, 0, { 369, -5376 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -80, 156, -124 }, 0, { 369, -6163 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -48, 156, -124 }, 0, { 1661, -6163 }, { 0x0, 0x7F, 0x0, 255 } }},
};
Gfx inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mesh_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_ladder_dl[] = {
    gsSPDisplayList(inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_mesh_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_ladder_inside_house_Scene_Room_0_ladder_top_mesh_dl),
    gsSPEndDisplayList(),
};
// Hi from write_mesh_info_to_f3d_c
Gfx inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, inside_house_Scene_Room_0_painting_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(inside_house_Scene_Room_0_painting_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
    gsDPSetTileSize(1, (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4), (int)(0.00 * 4)),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimDepth(0, 0),
    gsDPSetFogColor(255, 255, 255, 255),
    gsDPSetBlendColor(255, 255, 255, 255),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPGeometryMode(
        G_CULL_FRONT
      | G_TEXTURE_GEN
        ,
        G_ZBUFFER
      | G_SHADE
      | G_LIGHTING
      | G_CULL_BACK
      | G_FOG
      | G_SHADING_SMOOTH
    ),
    gsSPEndDisplayList(),
};
Vtx inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mesh_vtx[] = {
    {{ { -102, 36, -205 }, 0, { 0, 2048 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -40, 36, -205 }, 0, { 2048, 2048 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -40, 98, -205 }, 0, { 2048, 0 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -102, 98, -205 }, 0, { 0, 0 }, { 0x0, 0x0, 0x7F, 255 } }},
};
Gfx inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mesh_dl[] = {
    gsSPVertex(&inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mesh_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx inside_house_Scene_Room_0_Plane_dl[] = {
    gsSPDisplayList(inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mat_dl),
    gsSPDisplayList(inside_house_Scene_Room_0_Plane_inside_house_Scene_Room_0_painting_mesh_dl),
    gsSPEndDisplayList(),
};
RoomShapeDListsEntry inside_house_scene_Room_0_DListsEntries[] = {
    {
        inside_house_Scene_Room_0_floor_walls_ceiling_dl,
        NULL,
    },
    {
        inside_house_Scene_Room_0_windows_dl,
        NULL,
    },
    {
        inside_house_Scene_Room_0_ladder_dl,
        NULL,
    },
    {
        inside_house_Scene_Room_0_Plane_dl,
        NULL,
    },
};

RoomShapeNormal inside_house_scene_room_0_RoomShape = {
    { ROOM_SHAPE_TYPE_NORMAL },
    ARRAY_COUNT(inside_house_scene_Room_0_DListsEntries),
    inside_house_scene_Room_0_DListsEntries,
    inside_house_scene_Room_0_DListsEntries + ARRAY_COUNT(inside_house_scene_Room_0_DListsEntries),
};

