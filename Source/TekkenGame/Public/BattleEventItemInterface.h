#pragma once
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BattleEventItemInterface.generated.h"

UINTERFACE(Blueprintable)
class UBattleEventItemInterface : public UInterface {
    GENERATED_BODY()
};

class IBattleEventItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnWin(bool bPerfectWin, bool bKOdOnRageArts, bool bGameIsDecided, bool bTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnWallBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnVictorious();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnThrowDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRoundActionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRevengePracticeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnReceivedHit(int32 Damage, const FVector& HitPosition, const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnReceivedCriticalHit(const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRageStatusLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRageStatusEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRageArtStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnRageArtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnPlayerDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnPlayCustomizeDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnOpponentEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnOpponentContinueStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnNextRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnMotHeadEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnLoss(bool bGameIsDecided, bool bTimeUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnJumpLanding();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnGuardedAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnFootStep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnFloorBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnDraw(bool bGameIsDecided);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnDoubleKO(bool bGameIsDecided);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnDefeated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCustomizeModeItemInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCustomizeModeDramaAnimationEnds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnContinueStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCommandlistPlaybackStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCharacterEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCausedHit(int32 Damage, const FVector& HitPosition, const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnCausedCriticalHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnBattleBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnBalconyBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Other")
    void OnArmorState();
    
};

