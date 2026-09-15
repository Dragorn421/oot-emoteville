#pragma once

#include "ultra64.h"
#include "actor.h"

#define N_RINGS 2

typedef struct ActorNightclubCF {
    Actor actor;
    s16 ring_yaw[N_RINGS];
} ActorNightclubCF;
