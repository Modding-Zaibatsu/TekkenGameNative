#pragma once

#include "EGFxRenderTextureMode.generated.h"

UENUM(BlueprintType)
namespace EGFxRenderTextureMode {
    enum Type {
        Opaque,
        Alpha,
        AlphaComposite,
    };
}

