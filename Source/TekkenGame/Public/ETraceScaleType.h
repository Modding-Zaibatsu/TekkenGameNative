#pragma once
#include "Platform.h"

#include "ETraceScaleType.generated.h"

UENUM(BlueprintType)
enum class ETraceScaleType : uint8 {
    FromFirstSocket,
    FromSecondSocket,
    FromCentre,
};

