#pragma once

#include "ETekkenStageResult.generated.h"

UENUM(BlueprintType)
enum class ETekkenStageResult : uint8 {
    TK_ST_BATTLE,
    TK_ST_WIN_1P,
    TK_ST_WIN_2P,
    TK_ST_DRAW,
    TK_ST_MAX UMETA(Hidden),
};

