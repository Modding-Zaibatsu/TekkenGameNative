#pragma once

#include "EShaderScalarType.generated.h"

UENUM(BlueprintType)
enum EShaderScalarType {
    Metallic,
    Specular,
    RoughnessMax,
    RoughnessMin,
    RoughnessHair,
    Anisotropic,
};

