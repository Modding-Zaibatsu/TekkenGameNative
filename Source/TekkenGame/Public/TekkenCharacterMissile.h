#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EMissileHitType.h"
#include "EMissileSoundEventType.h"
#include "MissileSound.h"
#include "GameFramework/Actor.h"
#include "TekkenCharacterMissile.generated.h"

class ATekkenCharacterMissileHitEffect;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATekkenCharacterMissile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMissileHitType> NextEffectQueued;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATekkenCharacterMissileHitEffect> MissileHitEffectTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissileSound> Sounds;
    
public:
    ATekkenCharacterMissile();
    UFUNCTION(BlueprintCallable, Category="Other")
    void TerminateMissile();
    
private:
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetNextEffectQueued(TEnumAsByte<EMissileHitType> EffectType);
    
public:
    UFUNCTION(BlueprintCallable, Category="Other")
    void PlaySound(TEnumAsByte<EMissileSoundEventType> EventType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void MissileHit(const FVector SpawnLocation, FRotator SpawnRotation, FHitResult HitResult, TEnumAsByte<EMissileHitType> HitType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<EMissileHitType> GetNextEffectQueued();
    
};

