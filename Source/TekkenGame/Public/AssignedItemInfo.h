#pragma once

#include "ECostumeType.h"
#include "EnumAsByte.h"
#include "AssignedItemInfo.generated.h"

class UCustomizeCharacterItem;

USTRUCT(BlueprintType)
struct FAssignedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizeCharacterItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECostumeType> CostumeType;
    
    TEKKENGAME_API FAssignedItemInfo();
};

