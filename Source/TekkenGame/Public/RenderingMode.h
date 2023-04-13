#pragma once

#include "RenderingMode.generated.h"

UENUM(BlueprintType)
enum RenderingMode {
    RENDERING_MODE_NORMAL,
    RENDERING_MODE_BG_DARK,
    RENDERING_MODE_BG_OFF,
    RENDERING_MODE_CHAR_BG_OFF,
    RenderingModeMax,
};

