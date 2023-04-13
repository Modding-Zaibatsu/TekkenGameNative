#pragma once

#include "ETekkenPlayerStart.generated.h"

UENUM(BlueprintType)
namespace ETekkenPlayerStart {
    enum Type {
        SPT_DRAMA_START,
        SPT_GAME_START,
        SPT_DRAMA_WIN,
        SPT_DRAMA_CONTINUE,
        SPT_DRAMA_SPECIAL,
        SPT_MAX UMETA(Hidden),
    };
}

