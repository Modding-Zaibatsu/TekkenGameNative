#pragma once

#include "BowlThrowType.generated.h"

UENUM(BlueprintType)
enum BowlThrowType {
    BOWL_THROW_NORMAL,
    BOWL_THROW_MISS,
    BOWL_THROW_GUTTER,
    BOWL_THROW_FOUL,
    BOWL_THROW_MAX UMETA(Hidden),
};

