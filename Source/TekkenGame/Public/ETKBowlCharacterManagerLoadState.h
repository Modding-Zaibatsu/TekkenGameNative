#pragma once

#include "ETKBowlCharacterManagerLoadState.generated.h"

UENUM(BlueprintType)
enum ETKBowlCharacterManagerLoadState {
    TkBowl_CharacterLoad_Idle,
    TkBowl_CharacterLoad_Busy,
    TKBowl_CharacterLoad_CharacterClass_PreLoad,
    TKBowl_CharacterLoad_CharacterClass_RequestLoad,
    TKBowl_CharacterLoad_CharacterClass_PostLoad,
};

