#pragma once

#include "EGFxScaleMode.generated.h"

UENUM(BlueprintType)
namespace EGFxScaleMode {
    enum Type {
        NoScale,
        ShowAll,
        ExactFit,
        NoBorder,
    };
}

