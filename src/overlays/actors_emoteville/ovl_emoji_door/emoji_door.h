#ifndef ACTORS_EMOTEVILLE_EMOJI_DOOR_H
#define ACTORS_EMOTEVILLE_EMOJI_DOOR_H

#include "ultra64.h"
#include "actor.h"

enum EmojiDoorTo {
    EMOJI_DOOR_TO_INSIDE_HOUSE,
    EMOJI_DOOR_TO_MY_MAP,
    EMOJI_DOOR_TO_MAX
};

typedef struct ActorEmojiDoor {
    Actor actor;
    enum DoorOpenAnim openAnim;
    bool playerIsOpening;
    int openTimer;
    float openAngle;
} ActorEmojiDoor;

#endif
