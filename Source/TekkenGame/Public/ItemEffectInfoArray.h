#pragma once

#include "ItemEffectInfo.h"
#include "ItemEffectInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FItemEffectInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEffectInfo> ItemEffectInfo;
    
    TEKKENGAME_API FItemEffectInfoArray();
};

