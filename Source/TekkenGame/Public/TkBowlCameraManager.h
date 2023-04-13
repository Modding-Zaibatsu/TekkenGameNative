#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TkBowlCameraManager.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlCameraManager : public AActor {
    GENERATED_BODY()
public:
    ATkBowlCameraManager();
};

