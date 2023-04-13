#pragma once

#include "EnumAsByte.h"
#include "ItemSlotPosition.h"
#include "BoundItemBlueprintInfo.generated.h"

class ACharacterItemBlueprint;

USTRUCT(BlueprintType)
struct FBoundItemBlueprintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacterItemBlueprint* BindBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ItemSlotPosition> BindPosition;
    
    TEKKENGAME_API FBoundItemBlueprintInfo();
};

