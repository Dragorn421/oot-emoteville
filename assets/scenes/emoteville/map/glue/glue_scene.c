#include "glue_scene.h"

#include "actor.h"
#include "environment.h"
#include "romfile.h"
#include "scene.h"
#include "segment_symbols.h"

// Scene header

#include "../header_scene.inc.c"

// Rooms

#define DEF_ROOM(enumName, segmentName) DECLARE_ROM_SEGMENT(segmentName)
#include "../table_rooms.h"
#undef DEF_ROOM

RomFile my_map_scene_RoomList[] = {
#define DEF_ROOM(enumName, segmentName) ROM_FILE(segmentName),
#include "../table_rooms.h"
#undef DEF_ROOM
};

// Spawns

Spawn my_map_scene_SpawnList[] = {
#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params)              \
  {(spawnEnumName), (roomEnumName)},
#include "../table_spawns.h"
#undef DEF_SPAWN
};

ActorEntry my_map_scene_PlayerEntryList[] = {
#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params)              \
  {ACTOR_PLAYER, {pos}, {0, (rotY), 0}, params},
#include "../table_spawns.h"
#undef DEF_SPAWN
};

// Environment light settings

EnvLightSettings my_map_scene_EnvLightSettingsList[] = {
#define DEF_ENV_LIGHT_SETTINGS(enumName, data) data,
#include "../table_envlightsettings.h"
#undef DEF_ENV_LIGHT_SETTINGS
};

// Collision

#define DEF_SURFACETYPE(name, st0, st1, flagsA, flagsB)
#include "../table_polytypes.h"
#undef DEF_SURFACETYPE

enum {
#define DEF_SURFACETYPE(name, st0, st1, flagsA, flagsB)                        \
  MY_MAP_SCENE_COL_##name##_FLAGS_A = (flagsA),                            \
  MY_MAP_SCENE_COL_##name##_FLAGS_B = (flagsB),
#include "../table_polytypes.h"
#undef DEF_SURFACETYPE
  MY_MAP_SCENE_COL_FLAGS_LAST
};

enum {
#define DEF_SURFACETYPE(name, st0, st1, flagsA, flagsB)                        \
  MY_MAP_SCENE_SURFACETYPE_##name,
#include "../table_polytypes.h"
#undef DEF_SURFACETYPE
  MY_MAP_SURFACETYPE_MAX
};

SurfaceType my_map_scene_SurfaceTypes[] = {
#define DEF_SURFACETYPE(name, st0, st1, flagsA, flagsB) {{st0, st1}},
#include "../table_polytypes.h"
#undef DEF_SURFACETYPE
};

BgCamInfo my_map_scene_BgCamList[] = {
#define DEF_CAMERA(enumName, camSetting) {(camSetting), 0, NULL},
#include "../table_cameras.h"
#undef DEF_CAMERA
};

#include "../exported/collision.inc.c"

// Transition actors

TransitionActorEntry my_map_scene_TransitionActorList[] = {
#define DEF_TRANSITION_ACTOR(frontRoom, frontCameraIndex, backRoom,            \
                             backCameraIndex, actorId, pos, yaw, params)       \
  {                                                                            \
      {                                                                        \
          {                                                                    \
              (frontRoom),                                                     \
              (frontCameraIndex),                                              \
          },                                                                   \
          {                                                                    \
              (backRoom),                                                      \
              (backCameraIndex),                                               \
          },                                                                   \
      },                                                                       \
      (actorId),                                                               \
      {pos},                                                                   \
      (yaw),                                                                   \
      (params),                                                                \
  },
#include "../table_transition_actors.h"
#undef DEF_TRANSITION_ACTOR
};
