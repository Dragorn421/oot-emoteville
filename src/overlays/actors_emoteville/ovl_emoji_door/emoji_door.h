#ifndef ACTORS_EMOTEVILLE_ROCK_H
#define ACTORS_EMOTEVILLE_ROCK_H

#include "ultra64.h"
#include "actor.h"

typedef struct ActorEmojiDoor {
    Actor actor;
    enum DoorOpenAnim openAnim;
    bool playerIsOpening;
    int openTimer;
    float openAngle;
} ActorEmojiDoor;

#endif
