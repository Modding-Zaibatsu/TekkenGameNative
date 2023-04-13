#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TekkenItemEffectManager.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATekkenItemEffectManager : public AActor {
    GENERATED_BODY()
public:
    ATekkenItemEffectManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnWorld(int32 itemID, int32 EffectID, int32 PlayerNumber, FVector Position, FRotator Rotation, int32 historyNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnData(int32 itemID, int32 EffectID, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnBone(int32 itemID, int32 EffectID, int32 PlayerNumber, int32 bonePlayerNumber, int32 boneID, int32 historyNumber, FVector Position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAuraVisibility(int32 PlayerNumber, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddWorldParticle(UParticleSystemComponent* Emitter);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddParticleSystem(int32 PlayerNumber, int32 itemID, int32 EffectID, UParticleSystemComponent* Emitter);
    
};

