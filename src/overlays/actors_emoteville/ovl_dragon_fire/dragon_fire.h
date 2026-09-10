#ifndef ACTORS_EMOTEVILLE_DRAGON_FIRE_H
#define ACTORS_EMOTEVILLE_DRAGON_FIRE_H

#include "ultra64.h"
#include "actor.h"
#include "collision_check.h"

typedef struct ActorDragonFire {
    Actor actor;
    ColliderCylinder collider;
    int life;
} ActorDragonFire;

#endif
