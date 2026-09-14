#include "stdbool.h"
#include "array_count.h"
#include "room.h"
#include "scene.h"

#include "exported/room_0_shape.h"
#include "glue/glue_room_0.h"

SceneCmd nightclub_scene_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&nightclub_scene_room_0_RoomShape),
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(nightclub_scene_room_0_ObjectList), nightclub_scene_room_0_ObjectList),
    SCENE_CMD_ACTOR_LIST(ARRAY_COUNT(nightclub_scene_room_0_ActorEntryList), nightclub_scene_room_0_ActorEntryList),
    SCENE_CMD_END(),
};
