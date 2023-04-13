#pragma once

#include "BowlModeType.generated.h"

UENUM(BlueprintType)
enum BowlModeType {
    BOWL_MODE_10_PIN_1P,
    BOWL_MODE_10_PIN_2P,
    BOWL_MODE_PARTY_1P,
    BOWL_MODE_PARTY_2P,
    BOWL_MODE_STRIKER,
    BOWL_MODE_MAX UMETA(Hidden),
};

