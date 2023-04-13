#pragma once
#include "Platform.h"

#include "EffectMember.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FEffectMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ItemEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemEffectID;
    
    TEKKENGAME_API FEffectMember();
};

