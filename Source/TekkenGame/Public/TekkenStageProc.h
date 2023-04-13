#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TekkenStageProc.generated.h"

UCLASS(Blueprintable)
class ATekkenStageProc : public AActor {
    GENERATED_BODY()
public:
    ATekkenStageProc();
};

