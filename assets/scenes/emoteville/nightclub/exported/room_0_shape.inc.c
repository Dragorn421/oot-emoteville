#include "room_0_shape.h"

#include "ultra64.h"
#include "array_count.h"
#include "room.h"

// Hi from write_mesh_info_to_f3d_c
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mat_dl[] = {
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
    gsDPSetPrimColor(0, 0, 0, 238, 255, 255),
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
Vtx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mesh_vtx[] = {
    {{ { 0, 0, -497 }, 0, { 32, 16 }, { 0xC9, 0x8E, 0x0, 255 } }},
    {{ { 401, 0, -303 }, 0, { 27, 16 }, { 0xC9, 0x8E, 0x0, 255 } }},
    {{ { 401, 160, -303 }, 0, { 27, 0 }, { 0xC9, 0x8E, 0x0, 255 } }},
    {{ { 0, 160, -497 }, 0, { 32, 0 }, { 0xC9, 0x8E, 0x0, 255 } }},
    {{ { 401, 0, -303 }, 0, { 27, 16 }, { 0x85, 0xE4, 0x0, 255 } }},
    {{ { 500, 0, 130 }, 0, { 22, 16 }, { 0x85, 0xE4, 0x0, 255 } }},
    {{ { 500, 160, 130 }, 0, { 22, 0 }, { 0x85, 0xE4, 0x0, 255 } }},
    {{ { 401, 160, -303 }, 0, { 27, 0 }, { 0x85, 0xE4, 0x0, 255 } }},
    {{ { 500, 0, 130 }, 0, { 22, 16 }, { 0x9D, 0x4F, 0x0, 255 } }},
    {{ { 222, 0, 478 }, 0, { 18, 16 }, { 0x9D, 0x4F, 0x0, 255 } }},
    {{ { 222, 160, 478 }, 0, { 18, 0 }, { 0x9D, 0x4F, 0x0, 255 } }},
    {{ { 500, 160, 130 }, 0, { 22, 0 }, { 0x9D, 0x4F, 0x0, 255 } }},
    {{ { 222, 0, 478 }, 0, { 18, 16 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -222, 0, 478 }, 0, { 13, 16 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -222, 160, 478 }, 0, { 13, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { 222, 160, 478 }, 0, { 18, 0 }, { 0x0, 0x7F, 0x0, 255 } }},
    {{ { -222, 0, 478 }, 0, { 13, 16 }, { 0x63, 0x4F, 0x0, 255 } }},
    {{ { -500, 0, 130 }, 0, { 9, 16 }, { 0x63, 0x4F, 0x0, 255 } }},
    {{ { -500, 160, 130 }, 0, { 9, 0 }, { 0x63, 0x4F, 0x0, 255 } }},
    {{ { -222, 160, 478 }, 0, { 13, 0 }, { 0x63, 0x4F, 0x0, 255 } }},
    {{ { -500, 0, 130 }, 0, { 9, 16 }, { 0x7B, 0xE4, 0x0, 255 } }},
    {{ { -401, 0, -303 }, 0, { 4, 16 }, { 0x7B, 0xE4, 0x0, 255 } }},
    {{ { -401, 160, -303 }, 0, { 4, 0 }, { 0x7B, 0xE4, 0x0, 255 } }},
    {{ { -500, 160, 130 }, 0, { 9, 0 }, { 0x7B, 0xE4, 0x0, 255 } }},
    {{ { -401, 0, -303 }, 0, { 4, 16 }, { 0x37, 0x8E, 0x0, 255 } }},
    {{ { 0, 0, -497 }, 0, { 0, 16 }, { 0x37, 0x8E, 0x0, 255 } }},
    {{ { 0, 160, -497 }, 0, { 0, 0 }, { 0x37, 0x8E, 0x0, 255 } }},
    {{ { -401, 160, -303 }, 0, { 4, 0 }, { 0x37, 0x8E, 0x0, 255 } }},
};
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mesh_dl[] = {
    gsSPVertex(&nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mesh_vtx[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mat_dl[] = {
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
    gsDPSetPrimColor(0, 0, 0, 255, 253, 255),
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
Vtx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mesh_vtx[] = {
    {{ { 0, 0, -497 }, 0, { 0, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -401, 0, -303 }, 0, { 4, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 0, 0, 16 }, 0, { 13, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 401, 0, -303 }, 0, { 27, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 500, 0, 130 }, 0, { 22, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 0, 0, 16 }, 0, { 13, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -401, 0, -303 }, 0, { 4, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -500, 0, 130 }, 0, { 9, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -222, 0, 478 }, 0, { 13, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 222, 0, 478 }, 0, { 18, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 500, 0, 130 }, 0, { 22, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -222, 0, 478 }, 0, { 13, 16 }, { 0x0, 0x0, 0x7F, 255 } }},
};
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mesh_dl[] = {
    gsSPVertex(&nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mesh_vtx[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 8, 2, 0, 9, 10, 2, 0),
    gsSP1Triangle(11, 9, 2, 0),
    gsSPEndDisplayList(),
};
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mat_dl[] = {
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
    gsDPSetPrimColor(0, 0, 188, 252, 255, 255),
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
Vtx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mesh_vtx[] = {
    {{ { 401, 160, -303 }, 0, { 27, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 500, 160, 130 }, 0, { 22, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 0, 160, 16 }, 0, { 13, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 0, 160, -497 }, 0, { 0, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -401, 160, -303 }, 0, { 4, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 0, 160, 16 }, 0, { 13, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 500, 160, 130 }, 0, { 22, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { 222, 160, 478 }, 0, { 18, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -222, 160, 478 }, 0, { 13, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -500, 160, 130 }, 0, { 9, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -401, 160, -303 }, 0, { 4, 0 }, { 0x0, 0x0, 0x81, 255 } }},
    {{ { -222, 160, 478 }, 0, { 13, 0 }, { 0x0, 0x0, 0x81, 255 } }},
};
Gfx nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mesh_dl[] = {
    gsSPVertex(&nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mesh_vtx[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 8, 2, 0, 9, 10, 2, 0),
    gsSP1Triangle(11, 9, 2, 0),
    gsSPEndDisplayList(),
};
Gfx nightclub_Scene_Room_0_nightclub_dl[] = {
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mat_dl),
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_walls_mesh_dl),
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mat_dl),
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_floor_mesh_dl),
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mat_dl),
    gsSPDisplayList(nightclub_Scene_Room_0_nightclub_nightclub_Scene_Room_0_ceiling_mesh_dl),
    gsSPEndDisplayList(),
};
RoomShapeDListsEntry nightclub_scene_Room_0_DListsEntries[] = {
    {
        nightclub_Scene_Room_0_nightclub_dl,
        NULL,
    },
};

RoomShapeNormal nightclub_scene_room_0_RoomShape = {
    { ROOM_SHAPE_TYPE_NORMAL },
    ARRAY_COUNT(nightclub_scene_Room_0_DListsEntries),
    nightclub_scene_Room_0_DListsEntries,
    nightclub_scene_Room_0_DListsEntries + ARRAY_COUNT(nightclub_scene_Room_0_DListsEntries),
};

