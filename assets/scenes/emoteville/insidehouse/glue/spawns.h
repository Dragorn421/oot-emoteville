#ifndef INSIDE_HOUSE_SCENE_GLUE_SPAWNS_H
#define INSIDE_HOUSE_SCENE_GLUE_SPAWNS_H

#define TABLE_SPAWNS_NO_INCLUDES

#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params)
#include "../table_spawns.h"
#undef DEF_SPAWN

enum {
#define DEF_SPAWN(spawnEnumName, roomEnumName, pos, rotY, params) spawnEnumName,
#include "../table_spawns.h"
#undef DEF_SPAWN
  INSIDE_HOUSE_SCENE_SPAWN_MAX
};

#undef TABLE_SPAWNS_NO_INCLUDES

#endif
