#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TekkenStageEffectManager.generated.h"

UCLASS(Blueprintable)
class ATekkenStageEffectManager : public AActor {
    GENERATED_BODY()
public:
    ATekkenStageEffectManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestStageFloorSmoke(const FVector& Position, const FRotator& Rotation, int32 FloorID, int32 EffectID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestSoundFootstep(const FVector& Position, int32 PlayerIndex, int32 FighterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestSoundDown(const FVector& Position, int32 PlayerIndex, int32 FighterId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestLanding(const FVector& LeftPosition, const FVector& RightPosition, const FRotator& LeftRotation, const FRotator& RightRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestFootstep(const FVector& Position, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RequestDown(const FVector& Position, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RemoveAllParticles();
    
};

