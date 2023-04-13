#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StageEvent.generated.h"

UCLASS(Blueprintable)
class AStageEvent : public AActor {
    GENERATED_BODY()
public:
    AStageEvent();
};

