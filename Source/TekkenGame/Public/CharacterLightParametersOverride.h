#pragma once

#include "Array.h"
#include "CharacterLightParameters.h"
#include "FighterId.h"
#include "CharacterLightParametersOverride.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLightParametersOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLightParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<FighterId>> FighterIDs;
    
    TEKKENGAME_API FCharacterLightParametersOverride();
};

