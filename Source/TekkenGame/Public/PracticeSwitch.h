#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PracticeSwitch.generated.h"

UCLASS(Blueprintable)
class APracticeSwitch : public AActor {
    GENERATED_BODY()
public:
    APracticeSwitch();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestSwitchLevels();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool IsSwitchCompleted();
    
};

