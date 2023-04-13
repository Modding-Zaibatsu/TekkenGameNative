#pragma once

#include "EOffsetVariationCreateOption.generated.h"

UENUM(BlueprintType)
enum EOffsetVariationCreateOption {
    CreateSingle,
    CreateForAll,
    CreateForMaleCharacterOnly,
    CreateForFemaleCharacterOnly,
};

