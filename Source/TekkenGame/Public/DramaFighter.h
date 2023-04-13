#pragma once

#include "FighterId.h"
#include "DramaFighter.generated.h"

USTRUCT(BlueprintType)
struct FDramaFighter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FighterId> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Variation;
    
    TEKKENGAME_API FDramaFighter();
};

