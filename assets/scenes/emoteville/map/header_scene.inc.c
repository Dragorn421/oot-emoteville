#include "array_count.h"
#include "object.h"
#include "scene.h"
#include "sequence.h"
#include "skybox.h"

#include "exported/collision.h"
#include "glue/glue_scene.h"

SceneCmd my_map_scene_scene[] = {
    SCENE_CMD_SOUND_SETTINGS(0, NATURE_ID_NONE, NA_BGM_NO_MUSIC),
    SCENE_CMD_ROOM_LIST(ARRAY_COUNT(my_map_scene_RoomList), my_map_scene_RoomList),
    SCENE_CMD_TRANSITION_ACTOR_LIST(ARRAY_COUNT(my_map_scene_TransitionActorList), my_map_scene_TransitionActorList),
    SCENE_CMD_COL_HEADER(&my_map_scene_Col),
    SCENE_CMD_SPAWN_LIST(my_map_scene_SpawnList),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_INVALID),
    SCENE_CMD_PLAYER_ENTRY_LIST(ARRAY_COUNT(my_map_scene_PlayerEntryList), my_map_scene_PlayerEntryList),
    SCENE_CMD_SKYBOX_SETTINGS(SKYBOX_NORMAL_SKY, 0, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(ARRAY_COUNT(my_map_scene_EnvLightSettingsList), my_map_scene_EnvLightSettingsList),
    SCENE_CMD_END(),
};
