#pragma once
#include "Platform.h"

#include "CharacterEffect.generated.h"

class UBlueprint;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FCharacterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlueprintLifeSpan;
    
    TEKKENGAME_API FCharacterEffect();
};

