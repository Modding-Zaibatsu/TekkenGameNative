#pragma once

#include "ETKBowlCharacterSequenceType.generated.h"

UENUM(BlueprintType)
enum ETKBowlCharacterSequenceType {
    TkBowl_CharacterEmote_Success,
    TkBowl_CharacterEmote_BigSuccess,
    TkBowl_CharacterEmote_Strike,
    TkBowl_CharacterEmote_Failure,
    TkBowl_CharacterEmote_Timeout,
    TkBowl_CharacterEmote_AlleyEntry,
    TkBowl_CharacterEmote_FrameOut,
    TkBowl_CharacterEmote_UNSET,
    TkBowl_CharacterEmote_MAX UMETA(Hidden),
};

