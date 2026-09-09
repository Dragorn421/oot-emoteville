#ifndef ACTORS_EMOTEVILLE_DANCING_H
#define ACTORS_EMOTEVILLE_DANCING_H

#include "collision_check.h"
#include "ultra64.h"
#include "actor.h"
#include "animation.h"

typedef struct ActorDancing {
    Actor actor;
    SkelAnime skelAnime;
    ColliderCylinder body_collider;
    ColliderCylinder foot_collider;
    float spin_speed;
    int rest_timer;
    int spin_timer;
    int faint_timer;
    s16 spin_angle;
} ActorDancing;

#endif
