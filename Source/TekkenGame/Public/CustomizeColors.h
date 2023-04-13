#pragma once
#include "Array.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CustomizeColors.generated.h"

USTRUCT(BlueprintType)
struct FCustomizeColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> ItemColors;
    
    TEKKENGAME_API FCustomizeColors();
};

