#pragma once
#include "Platform.h"

#include "EGfeSDKOverlayState.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKOverlayState : uint8 {
    Main,
    Permission,
    HighlightsSummary,
    MAX,
};

