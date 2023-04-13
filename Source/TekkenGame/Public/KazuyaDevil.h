#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "KazuyaDevil.generated.h"

UCLASS(Blueprintable)
class AKazuyaDevil : public AActor {
    GENERATED_BODY()
public:
    AKazuyaDevil();
};

