#ifndef ACTORS_EMOTEVILLE_DRAGON_H
#define ACTORS_EMOTEVILLE_DRAGON_H

#include "ultra64.h"
#include "actor.h"
#include "animation.h"

typedef struct ActorDragon {
    Actor actor;
    SkelAnime skelAnime;
    float mouth_open_fac;
    Vec3f mouth_pos;
} ActorDragon;

#endif
