#pragma once

#include "CustomizeColors.h"
#include "ItemSlotPosition.h"
#include "CustomizeOverrides.generated.h"

USTRUCT(BlueprintType)
struct FCustomizeOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ItemSlotPosition>> ItemPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizeColors> ItemSetColors;
    
    TEKKENGAME_API FCustomizeOverrides();
};

