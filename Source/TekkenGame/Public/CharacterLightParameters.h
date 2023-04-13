#pragma once

#include "SpotLightParameters.h"
#include "CharacterLightParameters.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLightParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpotLightParameters SpotLight;
    
    TEKKENGAME_API FCharacterLightParameters();
};

