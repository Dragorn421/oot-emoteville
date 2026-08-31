#include "emoji_door.h"

#include "actor.h"
#include "gfx.h"
#include "play_state.h"
#include "player.h"
#include "scene.h"
#include "segmented_address.h"
#include "sys_matrix.h"
#include "transition.h"
#include "z_lib.h"

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
    ActorEmojiDoor* this = (ActorEmojiDoor*)thisx;

    Actor_SetScale(thisx, 0.1f);
    this->openAngle = 0;
}

void ActorEmojiDoor_Destroy(Actor* thisx, PlayState* play) {
}

void ActorEmojiDoor_Update(Actor* thisx, PlayState* play) {
    ActorEmojiDoor* this = (ActorEmojiDoor*)thisx;

    if (thisx->xzDistToPlayer < 40.0f && fabsf(thisx->yDistToPlayer) < 10.0f &&
        Player_IsFacingActor(thisx, 0x3000, play)) {
        Player* player = GET_PLAYER(play);

        player->doorType = PLAYER_DOORTYPE_HANDLE;
        player->doorDirection = 1.0f;
        player->doorActor = thisx;
    }
    if (this->playerIsOpening) {
        this->playerIsOpening = false;
        this->openTimer = 35;
    }
    if (this->openTimer > 0) {
        this->openTimer--;
        if (this->openTimer < 25) {
            Math_StepToF(&this->openAngle, M_PI / 3.5f, M_PI / 30);
        }
        if (this->openTimer == 5) {
            switch (this->actor.params) {
                case EMOJI_DOOR_TO_INSIDE_HOUSE:
                    play->nextEntranceIndex = ENTR_INSIDE_HOUSE_0;
                    play->transitionTrigger = TRANS_TRIGGER_START;
                    break;
                case EMOJI_DOOR_TO_MY_MAP:
                    play->nextEntranceIndex = ENTR_MY_MAP_SCENE_0;
                    play->transitionTrigger = TRANS_TRIGGER_START;
                    break;
            }
        }
    } else {
        Math_StepToF(&this->openAngle, 0, M_PI / 30);
    }
}

void ActorEmojiDoor_Draw(Actor* thisx, PlayState* play) {
    ActorEmojiDoor* this = (ActorEmojiDoor*)thisx;

    // z fighting hack
    Matrix_Translate(0, 0, 20 + 30 * thisx->projectedPos.z / 1000.0f, MTXMODE_APPLY);

    Matrix_Translate(-300, 0, 0, MTXMODE_APPLY);
    Matrix_RotateY(-this->openAngle, MTXMODE_APPLY);
    Matrix_Translate(300, 0, 0, MTXMODE_APPLY);

    // put the handle on the same side as vanilla doors
    Matrix_RotateY(M_PI, MTXMODE_APPLY);

    OPEN_DISPS_(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 8, SEGMENTED_TO_VIRTUAL(emoji_door_64x64_TLUT));
    gSPSegment(POLY_OPA_DISP++, 9, SEGMENTED_TO_VIRTUAL(emoji_door_64x64));
    Gfx_DrawDListOpa(play, square_textured_64x64_dl);
    CLOSE_DISPS_(play->state.gfxCtx);
}
