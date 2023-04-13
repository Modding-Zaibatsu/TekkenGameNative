#pragma once
#include "Platform.h"

#include "ETkTraceCurveType.generated.h"

UENUM(BlueprintType)
enum class ETkTraceCurveType : uint8 {
    ETC_Spline,
    EFB_BSpline,
    ENUM_MAX UMETA(Hidden),
};

