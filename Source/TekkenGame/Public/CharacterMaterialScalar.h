#pragma once

#include "EnumAsByte.h"
#include "EShaderScalarType.h"
#include "CharacterMaterialScalar.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMaterialScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EShaderScalarType> ScalarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TEKKENGAME_API FCharacterMaterialScalar();
};

