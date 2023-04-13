#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterEffect.h"
#include "GameFramework/Actor.h"
#include "TekkenCharacterEffectManager.generated.h"

class UBlueprint;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATekkenCharacterEffectManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEffect> Effects;
    
    ATekkenCharacterEffectManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnWorld(int32 EffectID, FVector Position, FRotator Rotation, int32 historyNumber, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SpawnBone(int32 EffectID, int32 PlayerNumber, int32 bonePlayerNumber, int32 boneID, int32 historyNumber, FVector Position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void FindEffectsNative(int32 EffectID, TArray<UParticleSystem*>& ParticleSystems, TArray<UBlueprint*>& Blueprints, TArray<float>& BlueprintLifeSpans);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ConstructEffectsMaps();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AddParticleSystem(int32 PlayerNumber, int32 EffectID, UParticleSystemComponent* Emitter);
    
};

