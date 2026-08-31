#ifndef INSIDE_HOUSE_SCENE_GLUE_ROOM_0_H
#define INSIDE_HOUSE_SCENE_GLUE_ROOM_0_H

#include "ultra64.h"
#include "scene.h"

// Objects

#define DEF_OBJECT(objectName)
#include "../table_objects_room_0.h"
#undef DEF_OBJECT

extern s16 inside_house_scene_room_0_ObjectList[0
#define DEF_OBJECT(objectName) +1
#include "../table_objects_room_0.h"
#undef DEF_OBJECT
];

// Actors

#define DEF_ACTOR(actorName, pos, rot, params)
#include "../table_actors_room_0.h"
#undef DEF_ACTOR

extern ActorEntry inside_house_scene_room_0_ActorEntryList[0
#define DEF_ACTOR(actorName, pos, rot, params) +1
#include "../table_actors_room_0.h"
#undef DEF_ACTOR
];

#endif
