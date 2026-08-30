#ifndef MY_MAP_SCENE_GLUE_SCENE_H
#define MY_MAP_SCENE_GLUE_SCENE_H

#include "environment.h"
#include "romfile.h"
#include "scene.h"

// Rooms

#define DEF_ROOM(enumName, segmentName)
#include "../table_rooms.h"
#undef DEF_ROOM

enum {
#define DEF_ROOM(enumName, segmentName) enumName,
#include "../table_rooms.h"
#undef DEF_ROOM
  MY_MAP_SCENE_ROOM_MAX
};

extern RomFile my_map_scene_RoomList[0
#define DEF_ROOM(enumName, segmentName) +1
#include "../table_rooms.h"
#undef DEF_ROOM
];

// Spawns

#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params)
#include "../table_spawns.h"
#undef DEF_SPAWN

enum {
#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params) spawnEnumName,
#include "../table_spawns.h"
#undef DEF_SPAWN
  MY_MAP_SCENE_SPAWN_MAX
};

extern Spawn my_map_scene_SpawnList[MY_MAP_SCENE_SPAWN_MAX];
extern ActorEntry my_map_scene_PlayerEntryList[MY_MAP_SCENE_SPAWN_MAX];

// Environment light settings

#define DEF_ENV_LIGHT_SETTINGS(enumName, data)
#include "../table_envlightsettings.h"
#undef DEF_ENV_LIGHT_SETTINGS

enum {
#define DEF_ENV_LIGHT_SETTINGS(enumName, data) enumName,
#include "../table_envlightsettings.h"
#undef DEF_ENV_LIGHT_SETTINGS
  MY_MAP_SCENE_ENV_LIGHT_SETTINGS_MAX
};

extern EnvLightSettings my_map_scene_EnvLightSettingsList
    [MY_MAP_SCENE_ENV_LIGHT_SETTINGS_MAX];

// Cameras

#define DEF_CAMERA(enumName, camSetting)
#include "../table_cameras.h"
#undef DEF_CAMERA

enum {
#define DEF_CAMERA(enumName, camSetting) enumName,
#include "../table_cameras.h"
#undef DEF_CAMERA
  MY_MAP_SCENE_CAMERA_MAX
};

// Transition actors

#define DEF_TRANSITION_ACTOR(frontRoom, frontCameraIndex, backRoom,            \
                             backCameraIndex, actorId, pos, yaw, params)
#include "../table_transition_actors.h"
#undef DEF_TRANSITION_ACTOR

extern TransitionActorEntry my_map_scene_TransitionActorList[0
#define DEF_TRANSITION_ACTOR(frontRoom, frontCameraIndex, backRoom,            \
                             backCameraIndex, actorId, pos, yaw, params)       \
  +1
#include "../table_transition_actors.h"
#undef DEF_TRANSITION_ACTOR
];

#endif
