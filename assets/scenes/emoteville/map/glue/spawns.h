#ifndef MY_MAP_SCENE_GLUE_SPAWNS_H
#define MY_MAP_SCENE_GLUE_SPAWNS_H

#define TABLE_SPAWNS_NO_INCLUDES

#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params)
#include "../table_spawns.h"
#undef DEF_SPAWN

enum {
#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params) spawnEnumName,
#include "../table_spawns.h"
#undef DEF_SPAWN
  MY_MAP_SCENE_SPAWN_MAX
};

#undef TABLE_SPAWNS_NO_INCLUDES

#endif
