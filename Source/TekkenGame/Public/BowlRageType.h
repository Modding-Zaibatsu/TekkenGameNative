#pragma once

#include "BowlRageType.generated.h"

UENUM(BlueprintType)
enum BowlRageType {
    BOWL_RAGE_TYPE_NON,
    BOWL_RAGE_TYPE_BIG_BALL,
    BOWL_RAGE_TYPE_BOUND_BALL,
    BOWL_RAGE_TYPE_BOMB_BALL,
    BOWL_RAGE_TYPE_GOLDEN_BALL,
    BOWL_RAGE_TYPE_MAX UMETA(Hidden),
};

