#include "collision.h"

#include "stddef.h"
#include "array_count.h"
#include "bgcheck.h"
#include "z_math.h"

// Hi from write_OoTCollisionMesh_to_c
Vec3s my_map_scene_VtxList[] = {
    { -400, 0, 400 },
    { 400, 0, 400 },
    { 400, 0, -400 },
    { -400, 0, -400 },
    { -224, -39, -289 },
    { 224, -39, -289 },
    { 224, 408, -289 },
    { -224, 408, -289 },
};
CollisionPoly my_map_scene_PolyList[] = {
/*
  0 = -400.000000 0.000000 400.000000
  1 = 400.000000 0.000000 400.000000
  2 = 400.000000 0.000000 -400.000000
  u = 800.000000 0.000000 0.000000
  v = 800.000000 0.000000 -800.000000
  n = -0.000000 640000.000000 0.000000
  nn = 640000.000000
 */
    {
        MY_MAP_SCENE_SURFACETYPE_DEFAULT,
        {
            COLPOLY_VTX(0, MY_MAP_SCENE_COL_DEFAULT_FLAGS_A),
            COLPOLY_VTX(1, MY_MAP_SCENE_COL_DEFAULT_FLAGS_B),
            COLPOLY_VTX(2, 0),
        },
        {
            COLPOLY_SNORMAL(-0.000000),
            COLPOLY_SNORMAL(1.000000),
            COLPOLY_SNORMAL(0.000000),
        },
        0,
    },
/*
  0 = -400.000000 0.000000 400.000000
  1 = 400.000000 0.000000 -400.000000
  2 = -400.000000 0.000000 -400.000000
  u = 800.000000 0.000000 -800.000000
  v = 0.000000 0.000000 -800.000000
  n = 0.000000 640000.000000 0.000000
  nn = 640000.000000
 */
    {
        MY_MAP_SCENE_SURFACETYPE_DEFAULT,
        {
            COLPOLY_VTX(0, MY_MAP_SCENE_COL_DEFAULT_FLAGS_A),
            COLPOLY_VTX(2, MY_MAP_SCENE_COL_DEFAULT_FLAGS_B),
            COLPOLY_VTX(3, 0),
        },
        {
            COLPOLY_SNORMAL(0.000000),
            COLPOLY_SNORMAL(1.000000),
            COLPOLY_SNORMAL(0.000000),
        },
        0,
    },
/*
  0 = -224.100662 -39.590797 -289.405548
  1 = 224.100662 -39.590797 -289.405548
  2 = 224.100662 408.610565 -289.405548
  u = 448.201324 0.000000 0.000000
  v = 448.201324 448.201355 0.000000
  n = 0.000000 0.000000 200884.437500
  nn = 200884.437500
 */
    {
        MY_MAP_SCENE_SURFACETYPE_DEFAULT,
        {
            COLPOLY_VTX(4, MY_MAP_SCENE_COL_DEFAULT_FLAGS_A),
            COLPOLY_VTX(5, MY_MAP_SCENE_COL_DEFAULT_FLAGS_B),
            COLPOLY_VTX(6, 0),
        },
        {
            COLPOLY_SNORMAL(0.000000),
            COLPOLY_SNORMAL(0.000000),
            COLPOLY_SNORMAL(1.000000),
        },
        289,
    },
/*
  0 = -224.100662 -39.590797 -289.405548
  1 = 224.100662 408.610565 -289.405548
  2 = -224.100662 408.610565 -289.405548
  u = 448.201324 448.201355 0.000000
  v = 0.000000 448.201355 0.000000
  n = 0.000000 0.000000 200884.437500
  nn = 200884.437500
 */
    {
        MY_MAP_SCENE_SURFACETYPE_DEFAULT,
        {
            COLPOLY_VTX(4, MY_MAP_SCENE_COL_DEFAULT_FLAGS_A),
            COLPOLY_VTX(6, MY_MAP_SCENE_COL_DEFAULT_FLAGS_B),
            COLPOLY_VTX(7, 0),
        },
        {
            COLPOLY_SNORMAL(0.000000),
            COLPOLY_SNORMAL(0.000000),
            COLPOLY_SNORMAL(1.000000),
        },
        289,
    },
};
CollisionHeader my_map_scene_Col = {
    { -400, -39, -400 },
    { 400, 408, 400 },
    ARRAY_COUNT(my_map_scene_VtxList),
    my_map_scene_VtxList,
    ARRAY_COUNT(my_map_scene_PolyList),
    my_map_scene_PolyList,
    my_map_scene_SurfaceTypes,
    my_map_scene_BgCamList,
    0,
    NULL,
};

