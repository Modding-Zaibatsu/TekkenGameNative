#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InitBattleMode.h"
#include "MotheadEvent.h"
#include "GameFramework/Actor.h"
#include "PostProcessScalarType.h"
#include "RenderingMode.h"
#include "TKAbilityItemId.h"
#include "TKGenericItemEvent.h"
#include "EventDispatcher.generated.h"

class UCustomizeCharacterItem;

UCLASS(Blueprintable)
class AEventDispatcher : public AActor {
    GENERATED_BODY()
public:
    AEventDispatcher();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void UnregisterListener(const AActor* Listener);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ResyncStageWeather();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void RegisterListener(const AActor* Listener);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnZakoDeath(int32 DamageCauser, int32 Damage, const FVector& Position, const FVector& HitDirectionNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallHit(int32 player_id, const FVector& Position, const FVector& Direction, int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnWallBreak(const FVector& Position, const FVector& Direction, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnUnloadLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnTouchDown(const FVector& Position, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnToggleAuraVisibility(int32 PlayerNumber, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnTimeUp(int32 WinningPlayerId, bool bMatchDraw, bool bGameDecided);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnTigerPositionOffset(int32 player_id, const FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnTigerCancel(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnTigerAnimationStart(int32 player_id, int32 Type, FTransform Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnThrowDamage(int32 DamageCauser, int32 Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnStageBreakEvent(int32 BreakType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnSetRenderingMode(RenderingMode mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRoundSettled(int32 RoundResultFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnReturnAbilityItemByBone(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnReturnAbilityItem(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnResetPlayerPhysics(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnResetCharacterClothSim(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnReplayReloadedStage(int32 last_stageSequenceId, int32 now_stageSequenceId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnReplayJumpEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageStateChanged(int32 PlayerNumber, bool IsRage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageAttackEnd(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnRageAttackBegin(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void onRageArtsEnd(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void onRageArtsBegin(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnPowerModeEnd(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnPowerModeBegin(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnPlayItemDemo(UCustomizeCharacterItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnNsbDogCancel(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnNsbDogAnimationStart(int32 player_id, int32 Type, FTransform Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMrzChangeFresnelWeight(int32 PlayerNumber, float TargetVal, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMrzChangeFresnelExponentScale(int32 PlayerNumber, float TargetVal, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMrzChangeEmissiveAlpha(int32 PlayerNumber, float TargetVal, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMrzChangeBaseAlpha(int32 PlayerNumber, float TargetVal, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMrXBackItemVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMotHeadEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMotEvent(MotheadEvent mode, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileUpdate(int32 Handle, int32 player_id, const FVector& Position, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileRequest(int32 Handle, int32 player_id, int32 effect_id, const FVector& Position, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileHit(int32 Handle, int32 player_id, bool bFloorHit, bool bWallHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileGuard(int32 Handle, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileExpired(int32 Handle, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileClash(int32 Handle, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnMissileCancel(int32 Handle, int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnKO(const FVector& HitPosition, const FVector& HitVector, const FRotator& HitRotator, bool isSpecialKO, bool IsRageArts, int32 player_id, bool bPerfectWin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnJumpLanding(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemThrowSetPosition(int32 player_id, TKAbilityItemId abilityItem_id, const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemThrowHit(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemThrowGuard(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemThrowCancel(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemThrow(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemSpawnToWorld(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemSpawnAndAttach(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemReset(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemRangedShoot(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemRangedSetPosition(int32 player_id, TKAbilityItemId abilityItem_id, const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemRangedHit(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemRangedGuard(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemRangedCancel(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemMeleeHit(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemMeleeGuard(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemDrop(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemDespawnAttached(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemAnimationStop(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnItemAnimationStart(int32 player_id, TKAbilityItemId abilityItem_id, int32 animSwitch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnInitBattle(InitBattleMode mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnHit(int32 DamageCauser, int32 Damage, const FVector& Position, const FVector& HitDirectionNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnHandOffAbilityItemByBone(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnHandOffAbilityItem(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnGuard(int32 DamageCauser, int32 Damage, const FVector& Position, const FVector& HitDirectionNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnGenericItemEvent(int32 player_id, TKAbilityItemId abilityItem_id, TKGenericItemEvent item_event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnFootStepSound(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnExArtsEnd(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnExArtsBegin(int32 PlayerNumber, bool HasEndCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnEnableClothBlend(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDown(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDoubleKO(const TArray<FVector>& HitPositions, const TArray<FVector>& HitVectors, const TArray<FRotator>& HitRotators, bool isSpecialKO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnDisableClothBlend(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnCustomizeModeItemInit(UCustomizeCharacterItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnCriticalHit(int32 DamageCauser, const FVector& HitDirectionNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool OnCheckAbilityItemEquipped(int32 player_id, TKAbilityItemId abilityItem_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnChangePostProcessScalar(PostProcessScalarType Type, float targetRelativeValue, int32 interpolationFrames, bool cosineInterpolation, bool isCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnArmorSucceeded(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnAlisaRightArmRecover(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnAlisaLeftArmRecover(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnAlisaHeadRecover(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void OnAiuchi(const TArray<FVector>& HitPositions, const TArray<FVector>& HitVectors, const TArray<FRotator>& HitRotators, bool isSpecialAiuchi);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void CancelExArtsEffect(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void CallAiuchiPostProcessEffect();
    
};

