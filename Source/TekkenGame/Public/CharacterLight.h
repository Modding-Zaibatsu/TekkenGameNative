#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterLight.generated.h"

UCLASS(Blueprintable)
class ACharacterLight : public AActor {
    GENERATED_BODY()
public:
    ACharacterLight();
};

