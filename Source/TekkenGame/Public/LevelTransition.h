#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelTransition.generated.h"

UCLASS(Blueprintable)
class ALevelTransition : public AActor {
    GENERATED_BODY()
public:
    ALevelTransition();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestTransition();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnTransitionRequested(bool bToRooftop);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnTransitionCompleted(bool bToRooftop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool IsTransferring() const;
    
};

