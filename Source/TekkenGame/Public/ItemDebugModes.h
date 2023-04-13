#pragma once

#include "ItemDebugModes.generated.h"

UENUM(BlueprintType)
enum ItemDebugModes {
    not_loaded,
    loaded,
    capture_mode,
    standby_mode,
    game_mode,
};

