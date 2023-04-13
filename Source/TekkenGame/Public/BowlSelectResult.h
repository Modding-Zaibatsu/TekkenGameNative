#pragma once

#include "BowlSelectResult.generated.h"

UENUM(BlueprintType)
enum BowlSelectResult {
    BOWL_RESULT_NON,
    BOWL_RESULT_REPLAY,
    BOWL_RESULT_GOTO_CHARACTER_SELECT,
    BOWL_RESULT_GOTO_MAIN_MENU,
    BOWL_RESULT_MAX UMETA(Hidden),
};

