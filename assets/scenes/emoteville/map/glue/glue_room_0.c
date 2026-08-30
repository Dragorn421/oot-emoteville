#include "glue_room_0.h"

#include "ultra64.h"
#include "scene.h"

// Room header

#include "../header_room_0.inc.c"

// Objects

s16 my_map_scene_room_0_ObjectList[] = {
#define DEF_OBJECT(objectName) (objectName),
#include "../table_objects_room_0.h"
#undef DEF_OBJECT
};

// Actors

ActorEntry my_map_scene_room_0_ActorEntryList[] = {
#define DEF_ACTOR(actorName, pos, rot, params)                                 \
  {(actorName), {pos}, {rot}, (params)},
#include "../table_actors_room_0.h"
#undef DEF_ACTOR
};

// Room shape

#include "../exported/room_0_shape.inc.c"
