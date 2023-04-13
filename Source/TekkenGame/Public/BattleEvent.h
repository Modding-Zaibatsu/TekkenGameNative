#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BattleEvent.generated.h"

UCLASS(Blueprintable)
class ABattleEvent : public AActor {
    GENERATED_BODY()
public:
    ABattleEvent();
};

