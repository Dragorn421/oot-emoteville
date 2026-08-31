#ifndef ACTORS_EMOTEVILLE_EMOJI_PROP_H
#define ACTORS_EMOTEVILLE_EMOJI_PROP_H

#include "ultra64.h"
#include "actor.h"

enum EmojiPropType {
    EMOJI_PROP_BED,
    EMOJI_PROP_CHAIR,
    EMOJI_PROP_FILE_CABINET_SMALL,
    EMOJI_PROP_FILE_CABINET_MEDIUM,
    EMOJI_PROP_FILE_CABINET_BIG,
    EMOJI_PROP_LIGHTBULB,
    EMOJI_PROP_SOFA,
    EMOJI_PROP_MAX
};

struct ActorEmojiProp;

typedef void (*ActorEmojiPropActionFunc)(struct ActorEmojiProp*, struct PlayState*);

typedef struct ActorEmojiProp {
    Actor actor;
    ActorEmojiPropActionFunc actionFunc;
    void* tlut;
    void* tex;
    u16 propFlags;
    s8 requiredObjectSlot;
} ActorEmojiProp;

#endif
