#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Resident.generated.h"

UCLASS(Blueprintable)
class AResident : public AActor {
    GENERATED_BODY()
public:
    AResident();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnBattleActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool IsSpawnBattleActorsCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void DestroyBattleActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void AsyncSpawnBattleActors();
    
};

