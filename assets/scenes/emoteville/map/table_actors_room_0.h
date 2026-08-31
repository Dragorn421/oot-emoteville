#include "actor_profile.h"
#include "exported/positions.h"
#include "overlays/actors_emoteville/ovl_emoji_door/emoji_door.h"

#ifndef I3
#define I3(x, y, z) x, y, z
#endif

/*
 * DEF_ACTOR(actorId, position, rotation, params)
 */

DEF_ACTOR(ACTOR_EMOJI_DOOR, POS_DOOR, ROT_DOOR, EMOJI_DOOR_TO_INSIDE_HOUSE)
