#pragma once
#include "Platform.h"

#include "ETkTraceEffectCurveType.generated.h"

UENUM(BlueprintType)
enum class ETkTraceEffectCurveType : uint8 {
    Brightness,
    Color,
    Refracion,
    KeyFrame,
    Width,
    MaterialParam1,
    MaterialParam2,
    Num,
};

