#include "emoji_door.h"

#include "actor.h"
#include "gfx.h"
#include "play_state.h"
#include "player.h"
#include "segmented_address.h"

#include <math.h>

#include "assets/objects/emoteville/object_emoji_door/object_emoji_door.h"
#include "assets/objects/gameplay_keep/emoteville/square_textured_64x64.h"

#define FLAGS 0

void ActorEmojiDoor_Init(Actor* thisx, PlayState* play);
void ActorEmojiDoor_Destroy(Actor* thisx, PlayState* play);
void ActorEmojiDoor_Update(Actor* thisx, PlayState* play);
void ActorEmojiDoor_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorEmojiDoor_Profile = {
    /**/ ACTOR_EMOJI_DOOR,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_EMOJI_DOOR,
    /**/ sizeof(ActorEmojiDoor),
    /**/ ActorEmojiDoor_Init,
    /**/ ActorEmojiDoor_Destroy,
    /**/ ActorEmojiDoor_Update,
    /**/ ActorEmojiDoor_Draw,
};

void ActorEmojiDoor_Init(Actor* thisx, PlayState* play) {
    Actor_SetScale(thisx, 0.1f);
}

void ActorEmojiDoor_Destroy(Actor* thisx, PlayState* play) {
}

void ActorEmojiDoor_Update(Actor* thisx, PlayState* play) {
    if (thisx->xzDistToPlayer < 40.0f && fabsf(thisx->yDistToPlayer) < 10.0f &&
        Player_IsFacingActor(thisx, 0x3000, play)) {
        Player* player = GET_PLAYER(play);

        player->doorType = PLAYER_DOORTYPE_HANDLE;
        player->doorDirection = 1.0f;
        player->doorActor = thisx;
    }
}

void ActorEmojiDoor_Draw(Actor* thisx, PlayState* play) {
    OPEN_DISPS_(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_door_64x64_TLUT));
    gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_door_64x64));
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);
    CLOSE_DISPS_(play->state.gfxCtx);
}
