#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "ActorReferencesInterface.h"
#include "GameServicesInterface.h"
#include "GameFramework/GameMode.h"
#include "TekkenGameMode.generated.h"

class AEventDispatcher;
class ALevelTransition;
class AMRXRageArtsBG;
class APracticeSwitch;

UCLASS(Blueprintable, NonTransient)
class ATekkenGameMode : public AGameMode, public IActorReferencesInterface, public IGameServicesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APracticeSwitch* PracticeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMRXRageArtsBG* MRXRageArtsBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelTransition* LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventDispatcher* EventDispatcher;
    
    ATekkenGameMode();
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopBGMAmbientSound();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopAmbientSounds();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetSecretlySwitchingStageFlag(bool bRequest);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetReinitCharCompletedFlag(bool bCompleted);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLevelVisiblingFlag(bool bVisibling);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLevelReLoadCompletedFlag(bool bCompleted);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLevelLoadCompletedFlag(bool bCompleted);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLevelLoadCancelWaitFlag(bool bWait);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetLevelLoadCancelFlag(bool bRequest);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetDebugKey(int32 nPadNo, int32 nKey);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCharacterCustomizeLoadWaitFlag(bool bWait);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PlayBGMAmbientSound();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PlayAmbientSounds();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void MotheadActorRePickupSound();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsMotheadStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool IsBowlingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetSecretlySwitchingStageFlag();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool GetLevelLoadCompletedFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetLevelLoadCancelWaitFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetLevelLoadCancelFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool GetCharacterCustomizeLoadWaitFlag();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CleanUpItemsInLevel();
    
    
    // Fix for true pure virtual functions not being implemented
};

