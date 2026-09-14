#ifndef NIGHTCLUB_SCENE_GLUE_SCENE_H
#define NIGHTCLUB_SCENE_GLUE_SCENE_H

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
  NIGHTCLUB_SCENE_ROOM_MAX
};

extern RomFile nightclub_scene_RoomList[0
#define DEF_ROOM(enumName, segmentName) +1
#include "../table_rooms.h"
#undef DEF_ROOM
];

// Spawns

#include "spawns.h"

extern Spawn nightclub_scene_SpawnList[NIGHTCLUB_SCENE_SPAWN_MAX];
extern ActorEntry nightclub_scene_PlayerEntryList[NIGHTCLUB_SCENE_SPAWN_MAX];

// Environment light settings

#define DEF_ENV_LIGHT_SETTINGS(enumName, data)
#include "../table_envlightsettings.h"
#undef DEF_ENV_LIGHT_SETTINGS

enum {
#define DEF_ENV_LIGHT_SETTINGS(enumName, data) enumName,
#include "../table_envlightsettings.h"
#undef DEF_ENV_LIGHT_SETTINGS
  NIGHTCLUB_SCENE_ENV_LIGHT_SETTINGS_MAX
};

extern EnvLightSettings nightclub_scene_EnvLightSettingsList
    [NIGHTCLUB_SCENE_ENV_LIGHT_SETTINGS_MAX];

// Cameras

#define DEF_CAMERA(enumName, camSetting)
#include "../table_cameras.h"
#undef DEF_CAMERA

enum {
#define DEF_CAMERA(enumName, camSetting) enumName,
#include "../table_cameras.h"
#undef DEF_CAMERA
  NIGHTCLUB_SCENE_CAMERA_MAX
};

// Transition actors

#define DEF_TRANSITION_ACTOR(frontRoom, frontCameraIndex, backRoom,            \
                             backCameraIndex, actorId, pos, yaw, params)
#include "../table_transition_actors.h"
#undef DEF_TRANSITION_ACTOR

extern TransitionActorEntry nightclub_scene_TransitionActorList[0
#define DEF_TRANSITION_ACTOR(frontRoom, frontCameraIndex, backRoom,            \
                             backCameraIndex, actorId, pos, yaw, params)       \
  +1
#include "../table_transition_actors.h"
#undef DEF_TRANSITION_ACTOR
];

#endif
