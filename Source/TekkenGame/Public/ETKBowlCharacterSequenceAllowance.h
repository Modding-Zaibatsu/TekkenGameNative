#pragma once

#include "ETKBowlCharacterSequenceAllowance.generated.h"

UENUM(BlueprintType)
enum ETKBowlCharacterSequenceAllowance {
    TkBowl_SequenceAllowance_Any,
    TkBowl_SequenceAllowance_OnlyUnique,
    TkBowl_SequenceAllowance_OnlyCommon,
    TkBowl_SequenceAllowance_MAX UMETA(Hidden),
};

