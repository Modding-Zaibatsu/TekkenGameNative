#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "TkBowlReplayManager.generated.h"

class UAkAudioEvent;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class TEKKENGAME_API ATkBowlReplayManager : public AActor {
    GENERATED_BODY()
public:
    ATkBowlReplayManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool syncReplay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void stopReplay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void stopRecord();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void startReplay(float StartTime);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void startRecord();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void onFirstPinHit();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    float getTimeOfFirstHit();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    float getReplayLength();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void clear();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void addSE(UAkAudioEvent* AudioEvent, AActor* ActorSource);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void addEffect(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Add(UObject* Obj);
    
};

