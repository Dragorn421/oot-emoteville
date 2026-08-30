#include "player.h"
#include "exported/positions.h"
#include "glue/glue_scene.h"

/*
 * DEF_SPAWN(name, room, position, yaw, params)
 */

DEF_SPAWN(MY_MAP_SCENE_SPAWN_0, MY_MAP_SCENE_ROOM_ROOM_0,
          POS_MY_MAP_SCENE_SPAWN, YAW_MY_MAP_SCENE_SPAWN,
          PLAYER_PARAMS(PLAYER_START_MODE_IDLE, PLAYER_START_BG_CAM_DEFAULT))
