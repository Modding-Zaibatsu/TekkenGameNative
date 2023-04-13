#pragma once
#include "Platform.h"

#include "ETkTraceKindId.generated.h"

UENUM(BlueprintType)
enum class ETkTraceKindId : uint8 {
    TRC_KIND_NORMAL,
    TRC_KIND_DRAMA,
    TRC_KIND_MAX UMETA(Hidden),
    TRC_KIND_NONE,
};

