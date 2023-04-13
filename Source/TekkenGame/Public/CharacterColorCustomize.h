#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Color.h"
#include "TKCustomizeColorCategory.h"
#include "CharacterColorCustomize.generated.h"

USTRUCT(BlueprintType)
struct FCharacterColorCustomize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color_Index_Private;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TKCustomizeColorCategory> ColorIndex;
    
    TEKKENGAME_API FCharacterColorCustomize();
};

