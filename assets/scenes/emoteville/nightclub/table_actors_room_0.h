#include "actor_profile.h"
#include "exported/positions.h"
#include "src/overlays/actors_emoteville/ovl_emoji_door/emoji_door.h"

#ifndef I3
#define I3(x, y, z) x, y, z
#endif

/*
 * DEF_ACTOR(actorId, position, rotation, params)
 */

DEF_ACTOR(ACTOR_EMOJI_DOOR, POS_EXITDOOR, ROT_EXITDOOR, EMOJI_DOOR_TO_MY_MAP_FROM_NIGHTCLUB)
DEF_ACTOR(ACTOR_DANCING, POS_DANCER1, ROT_DANCER1, 0)
