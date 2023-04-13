#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "ActorReferencesInterface.h"
#include "GameServicesInterface.h"
#include "TekkenBowlGameModeDeferredBeginPlaySignatureDelegate.h"
#include "GameFramework/GameMode.h"
#include "TekkenBowlGameMode.generated.h"

class ATkBowlCharacter;
class ATkBowlCharacterManager;
class UAkAudioBank;

UCLASS(Blueprintable, NonTransient)
class TEKKENGAME_API ATekkenBowlGameMode : public AGameMode, public IActorReferencesInterface, public IGameServicesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTekkenBowlGameModeDeferredBeginPlaySignature OnDeferredBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* BowlGameAudioBank;
    
    ATekkenBowlGameMode();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UnloadGameAudioBank();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void TryToPlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void LoadGameAudioBank();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure, Category="Other")
    bool IsReadyToPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    ATkBowlCharacterManager* GetTkBowlCharacterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    ATkBowlCharacter* GetPlayer_ImplementableEvent(int32 AssignedPlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    ATkBowlCharacter* GetCurrentPlayer_ImplementableEvent();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void ExecuteDeferredBeginPlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void EnablePhysSubsteppingASync();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void EnablePhysSubstepping();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EditStrikerBallNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void DisablePhysSubsteppingASync();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void DisablePhysSubstepping();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void DeferredBeginPlay();
    
    
    // Fix for true pure virtual functions not being implemented
};

