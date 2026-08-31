// SPDX-FileCopyrightText: 2023 Tharo
// SPDX-License-Identifier: MIT

#include "sys_math3d.h"
#include "array_count.h"
#include "gfx.h"
#include "play_state.h"
#include "sys_matrix.h"

#define gdSPDefVtxN(x, y, z, s, t, nx, ny, nz, ca) \
    ((Vtx){ .n = {                                 \
                .ob = { (x), (y), (z) },           \
                .tc = { (s)*32, (t)*32 },          \
                .n = { (nx), (ny), (nz) },         \
                .a = (ca),                         \
            } })

void Math3D_DrawSphere(PlayState* play, Sphere16* sph) {
}

void Math3D_DrawCylinder(GraphicsContext* gfxCtx, Gfx* restrict* gfxP, Cylinder16* cyl) {
#define CYL_DIVS 12
    static Gfx cylGfx[5 + CYL_DIVS * 2];
    static Vtx cylVtx[2 + CYL_DIVS * 2];
    static u8 init = false;

    if (!init) {
        // Build Vertices

        cylVtx[0] = gdSPDefVtxN(0, 0, 0, 0, 0, 0, -127, 0, 255);
        cylVtx[1] = gdSPDefVtxN(0, 128, 0, 0, 0, 0, 127, 0, 255);
        for (s32 i = 0; i < CYL_DIVS; i++) {
            f32 cos = cosf(2.0f * M_PI * i / CYL_DIVS);
            f32 sin = sinf(2.0f * M_PI * i / CYL_DIVS);

            s32 vtx_x = floorf(0.5f + cos * 128.0f);
            s32 vtx_z = floorf(0.5f - sin * 128.0f);
            s32 norm_x = cos * 127.0f;
            s32 norm_z = -sin * 127.0f;
            cylVtx[2 + i * 2 + 0] = gdSPDefVtxN(vtx_x, 0, vtx_z, 0, 0, norm_x, 0, norm_z, 255);
            cylVtx[2 + i * 2 + 1] = gdSPDefVtxN(vtx_x, 128, vtx_z, 0, 0, norm_x, 0, norm_z, 255);
        }

        // Build Display List

        Gfx* cylGfxP = cylGfx;

        gSPSetGeometryMode(cylGfxP++, G_CULL_BACK | G_SHADING_SMOOTH);
        gSPVertex(cylGfxP++, cylVtx, 2 + CYL_DIVS * 2, 0);
        for (s32 i = 0; i < CYL_DIVS; i++) {
            s32 p = (i + CYL_DIVS - 1) % CYL_DIVS;
            s32 v[4] = {
                2 + p * 2 + 0,
                2 + i * 2 + 0,
                2 + i * 2 + 1,
                2 + p * 2 + 1,
            };
            gSP2Triangles(cylGfxP++, v[0], v[1], v[2], 0, v[0], v[2], v[3], 0);
        }
        gSPClearGeometryMode(cylGfxP++, G_SHADING_SMOOTH);
        for (s32 i = 0; i < CYL_DIVS; i++) {
            s32 p = (i + CYL_DIVS - 1) % CYL_DIVS;
            s32 v[4] = {
                2 + p * 2 + 0,
                2 + i * 2 + 0,
                2 + i * 2 + 1,
                2 + p * 2 + 1,
            };
            gSP2Triangles(cylGfxP++, 0, v[1], v[0], 0, 1, v[3], v[2], 0);
        }
        gSPClearGeometryMode(cylGfxP++, G_CULL_BACK);
        gSPEndDisplayList(cylGfxP++);

        assert(cylGfxP <= &cylGfx[ARRAY_COUNT(cylGfx)]);

        init = true;
    }
#undef CYL_DIVS

    f32 radius = cyl->radius / 128.0f;
    if (cyl->radius == 0) {
        // make zero-radius cylinders tiny
        radius = 0.75f / 128.0f;
    }

    f32 height = cyl->height / 128.0f;
    if (cyl->height == 0) {
        // make zero-height cylinders tiny
        height = 0.75f / 128.0f;
    }

    Matrix_Translate(cyl->pos.x, cyl->pos.y + cyl->yShift, cyl->pos.z, MTXMODE_NEW);
    Matrix_Scale(radius, height, radius, MTXMODE_APPLY);

    MATRIX_FINALIZE_AND_LOAD_((*gfxP)++, gfxCtx);
    gSPDisplayList((*gfxP)++, cylGfx);
}
