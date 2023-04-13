#pragma once
#include "Platform.h"

#include "ETraceInactiveType.generated.h"

UENUM(BlueprintType)
enum class ETraceInactiveType : uint8 {
    Immediatery,
    Standard,
    Stoped,
};

