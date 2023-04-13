#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AsyncLoadDynamicDelegateDelegate.h"
#include "ETekkenNeoFurOption.h"
#include "ETekkenStageResult.h"
#include "StoryBattleNumber.h"
#include "StoryZakoType.h"
#include "TKCharacterSkeletonSocketPos.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TekkenBlueprintLibrary.generated.h"

class AActor;
class AGameMode;
class APawn;
class ATekkenBowlGameMode;
class ATekkenPlayerController;
class UAkAudioEvent;
class UAnimBlueprint;
class UAnimInstance;
class UAnimMontage;
class UBlueprint;
class UCanvas;
class UCanvasRenderTarget2D;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class UTekkenBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTekkenBlueprintLibrary();
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void VRViewerDevelopMode(UObject* WorldContextObject, bool sw);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UpdateVRMenuScreen(UCanvas* Canvas);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UpdateVRBattleCamera(bool Force);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void UpdatePlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UpdateBGMState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector ToUnrealCoord(const FVector& TekkenCoord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector ToTekkenCoord(const FVector& UnrealCoord);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void TogglePause();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void TekkenStopAKEvent(int32 AudioId);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 TekkenPostAKEvent(UAkAudioEvent* pAkEvent, AActor* pActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FString StringToUpper(const FString& str);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FString StringToLower(const FString& str);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetVSyncEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetVRMenuRenderTarget(UCanvasRenderTarget2D* CanvasTarget);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetVRHelpRenderTarget(UCanvasRenderTarget2D* CanvasTarget);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void SetStageSequenceId(UObject* WorldContextObject, int32 sid);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetStageModelNo(int32 stageModelNo);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetStageId(int32 stageId);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetRTPCValue(const FString& RTPC, float Value, AActor* Actor, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetResolutionScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetPause();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetMontageAnimFrame(UAnimMontage* Montage, UAnimInstance* Instance, float Frame);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetMeshMaterial(UMeshComponent* Mesh, int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetForceFinalRound(bool bForceFinalRound);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetForceFacingLocation(int32 side, bool sw, FVector Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetDisablePostAkEvent(bool flag);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetCastInsetShadow(UPrimitiveComponent* Component, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetCastHiddenShadow(UPrimitiveComponent* Component, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 ResolveSceneBGMID(int32 nStageID, const FString& StateString);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 ResolveBGMID(int32 nSceneBGMID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void RequestAsyncLoadFromPath(const FString& Path, FAsyncLoadDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void PickupActors(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool NeedPracticeSwitchLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UObject* LoadObjectFromAssetPath(UClass* ObjectClass, const FName& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsVSyncEnabledSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsVSyncEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsVRViewerMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsVRMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsVRBattleMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsTekkenHMDEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsStoryMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsStoryBattleStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsSilenceStageBreakMode();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsSettleableRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsReplayMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsReplayBattleForRecording();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsRage(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsQualityControlSSSEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsQualityControlShadowEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsQualityControlResolutionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsPS4_4K();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsPracticeMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsPracticeDeku();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsPlayingMovelistDemonstration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsPlayerVisible(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsParticleSoundDisabled();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsOnlinePlayerYou(int32 PlayerNum, bool IgnoreSpectator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool isMotheadDrama(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsHitGetFrame(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsHitAnalysisFrameDiff(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsHitAnalysisCannotMove(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsHeavyLevelPrefetchEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsGlobalQualityControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool isEnableFighterId(int32 fighter_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsDown2(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsDisablePostAkEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsDebug();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsDead(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsCustomizeMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool IsCPUBattle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsBossMakuaiDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsAlwaysCounterHit(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static int32 IncrementStageSequenceId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static ATekkenPlayerController* GetTekkenPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static ATekkenBowlGameMode* GetTekkenBowlGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static TEnumAsByte<StoryZakoType> GetStoryZakoType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static TEnumAsByte<StoryBattleNumber> GetStoryBattleNumber();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 GetStageWinner();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 GetStageSequenceID();
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static int32 GetStageRoundCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ETekkenStageResult> GetStageResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float GetResolutionScaleSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static FString GetRequestedLevelName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static int32 GetPlayerSide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetPlayerBufferDbgPoint(int32 side);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static float GetNormalizedHP(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ETekkenNeoFurOption> GetNeoFurOptionSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float GetMotionBlurScale(bool bInDrama);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FString GetMotheadName(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static int32 GetMotheadDramaNo(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static float GetMontageLength(UAnimMontage* Montage, FName InSectionName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static float GetMontageAnimFrame(UAnimMontage* Montage, UAnimInstance* Instance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetLocationOfComponentSpace(USceneComponent* Component, const FVector& world_location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static float GetKazScale(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static float GetItaFace(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FVector GetHitVector(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FRotator GetHitRotator(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FVector GetHitPosition(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetGameBonePositionGame(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static float GetFloorHeight(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetFighterPos(int32 player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetFighterOrgPos(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static int32 GetFighterId(UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float GetFighterAnimFrame(int32 player_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 GetDamageGiven(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool GetConsoleCommandTimeoutEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static float GetConsoleCommandSpinValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool GetConsoleCommandSpinEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static float GetConsoleCommandPowerValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other", meta=(WorldContext="WorldContextObject"))
    static bool GetConsoleCommandPowerEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FName GetCharacterSocketToName(TEnumAsByte<TKCharacterSkeletonSocketPos> SocketPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static int32 GetCannotMoveFrame(int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static APawn* GetCameraPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FTransform GetBoneTransform2(const USkinnedMeshComponent* Mesh, int32 PlayerNumber, int32 TekkenBoneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FTransform GetBoneTransform(const USkinnedMeshComponent* Mesh, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static int32 GetBattleRoundFromStars();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 GetBattleRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static AGameMode* GetAuthGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static UClass* GetAnimBlueprintGeneratedClass(UAnimBlueprint* AnimBlueprint);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TArray<AActor*> GetAllAttachedActors(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void GameCameraCutThisFrame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void FrameAdvance();
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void ForceGarbageCollection(UObject* WorldContextObject, bool bFullPurge);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool DoesPackageExist(const FString& LongPackageName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void ClearPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool AllowDynamicScreenPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool AllowDynamicParallelTranslateCommandList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool AllowDynamicOcclusionQueryLocation();
    
};

