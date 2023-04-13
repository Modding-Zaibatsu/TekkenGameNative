#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TekkenMobManager.generated.h"

class ATekkenMobActor;
class ATekkenWallActor;

UCLASS(Blueprintable)
class ATekkenMobManager : public AActor {
    GENERATED_BODY()
public:
    ATekkenMobManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void MapMobWallDependencies(TArray<ATekkenMobActor*> StageMobs);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<ATekkenMobActor*> GetWallDependentMobActors(ATekkenWallActor* Wall);
    
};

