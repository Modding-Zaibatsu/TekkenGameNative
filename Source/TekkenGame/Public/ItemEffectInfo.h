#pragma once

#include "Array.h"
#include "ItemEffect.h"
#include "ItemSlotPosition.h"
#include "TKAbilityItemId.h"
#include "ItemEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TKAbilityItemId> ItemAbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEffect> ItemEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ItemSlotPosition> RelatedItemPosition;
    
    TEKKENGAME_API FItemEffectInfo();
};

