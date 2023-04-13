#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterItemLoader.generated.h"

UCLASS(Blueprintable)
class ACharacterItemLoader : public AActor {
    GENERATED_BODY()
public:
    ACharacterItemLoader();
};

