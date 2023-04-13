#pragma once
#include "Vector.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DefaultMissileHitFX.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FDefaultMissileHitFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FXScale;
    
    TEKKENGAME_API FDefaultMissileHitFX();
};

