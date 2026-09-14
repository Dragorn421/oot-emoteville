#include "actor_profile.h"
#include "exported/positions.h"
#include "overlays/actors_emoteville/ovl_emoji_door/emoji_door.h"

#ifndef I3
#define I3(x, y, z) x, y, z
#endif

/*
 * DEF_ACTOR(actorId, position, rotation, params)
 */

DEF_ACTOR(ACTOR_EMOJI_DOOR, POS_DOOR_TO_INSIDEHOUSE, ROT_DOOR_TO_INSIDEHOUSE, EMOJI_DOOR_TO_INSIDE_HOUSE)
DEF_ACTOR(ACTOR_EMOJI_DOOR, POS_DOOR_TO_NIGHTCLUB, ROT_DOOR_TO_NIGHTCLUB, EMOJI_DOOR_TO_NIGHTCLUB)
//DEF_ACTOR(ACTOR_DANCING, POS_TESTACTOR, ROT_TESTACTOR, 0)
DEF_ACTOR(ACTOR_DRAGON, POS_TESTACTOR, ROT_TESTACTOR, 0)
