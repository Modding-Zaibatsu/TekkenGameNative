#pragma once
#include "UnrealString.h"

#include "CustomizeMaterialScalarData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizeMaterialScalarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DescName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    TEKKENGAME_API FCustomizeMaterialScalarData();
};

