#include "emoji_rock.h"

#include "play_state.h"

#define FLAGS 0

void ActorEmojiRock_Init(Actor* thisx, PlayState* play);
void ActorEmojiRock_Destroy(Actor* thisx, PlayState* play);
void ActorEmojiRock_Update(Actor* thisx, PlayState* play);
void ActorEmojiRock_Draw(Actor* thisx, PlayState* play);

ActorProfile ActorEmojiRock_Profile = {
    /**/ ACTOR_EMOJI_ROCK,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ActorEmojiRock),
    /**/ ActorEmojiRock_Init,
    /**/ ActorEmojiRock_Destroy,
    /**/ ActorEmojiRock_Update,
    /**/ ActorEmojiRock_Draw,
};

void ActorEmojiRock_Init(Actor* thisx, PlayState* play) {
}

void ActorEmojiRock_Destroy(Actor* thisx, PlayState* play) {
}

void ActorEmojiRock_Update(Actor* thisx, PlayState* play) {
}

void ActorEmojiRock_Draw(Actor* thisx, PlayState* play) {
}
