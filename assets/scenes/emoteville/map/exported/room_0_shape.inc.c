#include "room_0_shape.h"

#include "ultra64.h"
#include "array_count.h"
#include "room.h"

u64 My_map_Scene_Room_0_house_64x64_pngTLUT[] = {
#include "assets/scenes/emoteville/map/exported/My_map_Scene_Room_0_house_64x64_png.tlut.rgba16.inc.c"
};

u64 My_map_Scene_Room_0_house_64x64_png[] = {
#include "assets/scenes/emoteville/map/exported/My_map_Scene_Room_0_house_64x64_png.ci4.inc.c"
};

// Hi from write_mesh_info_to_f3d_c
Gfx My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mat_dl[] = {
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
    gsDPSetPrimColor(0, 0, 66, 184, 0, 255),
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
Vtx My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mesh_vtx[] = {
    {{ { -400, 0, 400 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 400, 0, 400 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { 400, 0, -400 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
    {{ { -400, 0, -400 }, 0, { 0, 32 }, { 0x0, 0x0, 0x7F, 255 } }},
};
Gfx My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mesh_dl[] = {
    gsSPVertex(&My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mesh_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx My_map_Scene_Room_0_Room_0_Mesh_dl[] = {
    gsSPDisplayList(My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mat_dl),
    gsSPDisplayList(My_map_Scene_Room_0_Room_0_Mesh_My_map_Scene_Room_0_Material_mesh_dl),
    gsSPEndDisplayList(),
};
// Hi from write_mesh_info_to_f3d_c
Gfx My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mat_dl[] = {
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
    gsDPLoadTLUT_pal16(0, My_map_Scene_Room_0_house_64x64_pngTLUT),
    gsDPLoadMultiBlock_4b(My_map_Scene_Room_0_house_64x64_png, 0x000, 0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 0, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0x0, 0x000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0, G_TX_NOMIRROR | G_TX_WRAP, 0, 0),
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
Vtx My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mesh_vtx[] = {
    {{ { -224, -39, -289 }, 0, { 0, 2048 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 224, -39, -289 }, 0, { 2048, 2048 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { 224, 408, -289 }, 0, { 2048, 0 }, { 0x0, 0x81, 0x0, 255 } }},
    {{ { -224, 408, -289 }, 0, { 0, 0 }, { 0x0, 0x81, 0x0, 255 } }},
};
Gfx My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mesh_dl[] = {
    gsSPVertex(&My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mesh_vtx[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
Gfx My_map_Scene_Room_0_house_dl[] = {
    gsSPDisplayList(My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mat_dl),
    gsSPDisplayList(My_map_Scene_Room_0_house_My_map_Scene_Room_0_Material_001_mesh_dl),
    gsSPEndDisplayList(),
};
RoomShapeDListsEntry my_map_scene_Room_0_DListsEntries[] = {
    {
        My_map_Scene_Room_0_Room_0_Mesh_dl,
        NULL,
    },
    {
        My_map_Scene_Room_0_house_dl,
        NULL,
    },
};

RoomShapeNormal my_map_scene_room_0_RoomShape = {
    { ROOM_SHAPE_TYPE_NORMAL },
    ARRAY_COUNT(my_map_scene_Room_0_DListsEntries),
    my_map_scene_Room_0_DListsEntries,
    my_map_scene_Room_0_DListsEntries + ARRAY_COUNT(my_map_scene_Room_0_DListsEntries),
};

