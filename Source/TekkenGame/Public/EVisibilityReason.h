#pragma once

#include "EVisibilityReason.generated.h"

UENUM(BlueprintType)
enum class EVisibilityReason : uint8 {
    RenderingMode,
    ConstrainedMode,
    MAX,
};

