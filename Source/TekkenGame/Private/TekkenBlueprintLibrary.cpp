#include "TekkenGameModule.h"
#include "TekkenBlueprintLibrary.h"

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

void UTekkenBlueprintLibrary::VRViewerDevelopMode(UObject* WorldContextObject, bool sw) {
}

void UTekkenBlueprintLibrary::UpdateVRMenuScreen(UCanvas* Canvas) {
}

void UTekkenBlueprintLibrary::UpdateVRBattleCamera(bool Force) {
}

void UTekkenBlueprintLibrary::UpdatePlayerCharacter(UObject* WorldContextObject) {
}

void UTekkenBlueprintLibrary::UpdateBGMState() {
}

FVector UTekkenBlueprintLibrary::ToUnrealCoord(const FVector& TekkenCoord) {
    return FVector{};
}

FVector UTekkenBlueprintLibrary::ToTekkenCoord(const FVector& UnrealCoord) {
    return FVector{};
}

void UTekkenBlueprintLibrary::TogglePause() {
}

void UTekkenBlueprintLibrary::TekkenStopAKEvent(int32 AudioId) {
}

int32 UTekkenBlueprintLibrary::TekkenPostAKEvent(UAkAudioEvent* pAkEvent, AActor* pActor) {
    return 0;
}

FString UTekkenBlueprintLibrary::StringToUpper(const FString& str) {
    return TEXT("");
}

FString UTekkenBlueprintLibrary::StringToLower(const FString& str) {
    return TEXT("");
}

AActor* UTekkenBlueprintLibrary::SpawnActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, const FTransform& Transform) {
    return NULL;
}

void UTekkenBlueprintLibrary::SetVSyncEnabled(bool bEnabled) {
}

void UTekkenBlueprintLibrary::SetVRMenuRenderTarget(UCanvasRenderTarget2D* CanvasTarget) {
}

void UTekkenBlueprintLibrary::SetVRHelpRenderTarget(UCanvasRenderTarget2D* CanvasTarget) {
}

void UTekkenBlueprintLibrary::SetStageSequenceId(UObject* WorldContextObject, int32 sid) {
}

void UTekkenBlueprintLibrary::SetStageModelNo(int32 stageModelNo) {
}

void UTekkenBlueprintLibrary::SetStageId(int32 stageId) {
}

void UTekkenBlueprintLibrary::SetRTPCValue(const FString& RTPC, float Value, AActor* Actor, int32 InterpolationTimeMs) {
}

void UTekkenBlueprintLibrary::SetResolutionScale(float Scale) {
}

void UTekkenBlueprintLibrary::SetPause() {
}

void UTekkenBlueprintLibrary::SetMontageAnimFrame(UAnimMontage* Montage, UAnimInstance* Instance, float Frame) {
}

void UTekkenBlueprintLibrary::SetMeshMaterial(UMeshComponent* Mesh, int32 ElementIndex, UMaterialInterface* Material) {
}

void UTekkenBlueprintLibrary::SetForceFinalRound(bool bForceFinalRound) {
}

void UTekkenBlueprintLibrary::SetForceFacingLocation(int32 side, bool sw, FVector Location) {
}

void UTekkenBlueprintLibrary::SetDisablePostAkEvent(bool flag) {
}

void UTekkenBlueprintLibrary::SetCastInsetShadow(UPrimitiveComponent* Component, bool bEnabled)
{
    Component->bCastInsetShadow = bEnabled;
}

void UTekkenBlueprintLibrary::SetCastHiddenShadow(UPrimitiveComponent* Component, bool bEnabled)
{
    Component->bCastHiddenShadow = bEnabled;
}

int32 UTekkenBlueprintLibrary::ResolveSceneBGMID(int32 nStageID, const FString& StateString) {
    return 0;
}

int32 UTekkenBlueprintLibrary::ResolveBGMID(int32 nSceneBGMID) {
    return 0;
}

void UTekkenBlueprintLibrary::RequestAsyncLoadFromPath(const FString& Path, FAsyncLoadDynamicDelegate Delegate) {
}

void UTekkenBlueprintLibrary::PickupActors(UObject* WorldContextObject) {
}

bool UTekkenBlueprintLibrary::NeedPracticeSwitchLevel(UObject* WorldContextObject) {
    return false;
}

UObject* UTekkenBlueprintLibrary::LoadObjectFromAssetPath(UClass* ObjectClass, const FName& Path) {
    return NULL;
}

bool UTekkenBlueprintLibrary::IsVSyncEnabledSetting() {
    return false;
}

bool UTekkenBlueprintLibrary::IsVSyncEnabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsVRViewerMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsVRMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsVRBattleMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsTekkenHMDEnabled(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsStoryMode() {
    return false;
}

bool UTekkenBlueprintLibrary::IsStoryBattleStarted() {
    return false;
}

bool UTekkenBlueprintLibrary::IsSilenceStageBreakMode() {
    return false;
}

bool UTekkenBlueprintLibrary::IsSettleableRound() {
    return false;
}

bool UTekkenBlueprintLibrary::IsReplayMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsReplayBattleForRecording() {
    return false;
}

bool UTekkenBlueprintLibrary::IsRage(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsQualityControlSSSEnabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsQualityControlShadowEnabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsQualityControlResolutionEnabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsPS4_4K() {
    return false;
}

bool UTekkenBlueprintLibrary::IsPracticeMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsPracticeDeku() {
    return false;
}

bool UTekkenBlueprintLibrary::IsPlayingMovelistDemonstration() {
    return false;
}

bool UTekkenBlueprintLibrary::IsPlayInEditor(UObject* WorldContextObject) {
    return true;
}

bool UTekkenBlueprintLibrary::IsPlayerVisible(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsParticleSoundDisabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsOnlinePlayerYou(int32 PlayerNum, bool IgnoreSpectator) {
    return false;
}

bool UTekkenBlueprintLibrary::isMotheadDrama(int32 player_id) {
    return false;
}

bool UTekkenBlueprintLibrary::IsHitGetFrame(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsHitAnalysisFrameDiff(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsHitAnalysisCannotMove(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsHeavyLevelPrefetchEnabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsGlobalQualityControl() {
    return false;
}

bool UTekkenBlueprintLibrary::isEnableFighterId(int32 fighter_id) {
    return false;
}

bool UTekkenBlueprintLibrary::IsEditor() {
    return true;
}

bool UTekkenBlueprintLibrary::IsDown2(int32 player_id) {
    return false;
}

bool UTekkenBlueprintLibrary::IsDisablePostAkEvent() {
    return false;
}

bool UTekkenBlueprintLibrary::IsDebug() {
    return false;
}

bool UTekkenBlueprintLibrary::IsDead(int32 PlayerNumber) {
    return false;
}

bool UTekkenBlueprintLibrary::IsCustomizeMode(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsCPUBattle(UObject* WorldContextObject) {
    return false;
}

bool UTekkenBlueprintLibrary::IsBossMakuaiDisabled() {
    return false;
}

bool UTekkenBlueprintLibrary::IsAlwaysCounterHit(int32 PlayerNumber) {
    return false;
}

int32 UTekkenBlueprintLibrary::IncrementStageSequenceId(UObject* WorldContextObject) {
    return 0;
}

ATekkenPlayerController* UTekkenBlueprintLibrary::GetTekkenPlayerController()
{
    return NULL;
}

ATekkenBowlGameMode* UTekkenBlueprintLibrary::GetTekkenBowlGameMode(UObject* WorldContextObject) {
    return NULL;
}

TEnumAsByte<StoryZakoType> UTekkenBlueprintLibrary::GetStoryZakoType() {
    return ZAKO_TEKKEN_FORCE;
}

TEnumAsByte<StoryBattleNumber> UTekkenBlueprintLibrary::GetStoryBattleNumber() {
    return Chapter00_Battle1;
}

int32 UTekkenBlueprintLibrary::GetStageWinner() {
    return 0;
}

int32 UTekkenBlueprintLibrary::GetStageSequenceID() {
    return 0;
}

int32 UTekkenBlueprintLibrary::GetStageRoundCount(UObject* WorldContextObject) {
    return 0;
}

TEnumAsByte<ETekkenStageResult> UTekkenBlueprintLibrary::GetStageResult() {
    return ETekkenStageResult::TK_ST_BATTLE;
}

float UTekkenBlueprintLibrary::GetResolutionScaleSetting() {
    return 0.0f;
}

FString UTekkenBlueprintLibrary::GetRequestedLevelName(UObject* WorldContextObject) {
    return TEXT("");
}

int32 UTekkenBlueprintLibrary::GetPlayerSide() {
    return 0;
}

FVector UTekkenBlueprintLibrary::GetPlayerBufferDbgPoint(int32 side) {
    return FVector{};
}

float UTekkenBlueprintLibrary::GetNormalizedHP(int32 PlayerNumber) {
    return 0.0f;
}

TEnumAsByte<ETekkenNeoFurOption> UTekkenBlueprintLibrary::GetNeoFurOptionSetting() {
    return ETekkenNeoFurOption::NEOFUR_HIGHSPEC;
}

float UTekkenBlueprintLibrary::GetMotionBlurScale(bool bInDrama) {
    return 0.0f;
}

FString UTekkenBlueprintLibrary::GetMotheadName(int32 player_id) {
    return TEXT("");
}

int32 UTekkenBlueprintLibrary::GetMotheadDramaNo(int32 player_id) {
    return 0;
}

float UTekkenBlueprintLibrary::GetMontageLength(UAnimMontage* Montage, FName InSectionName) {
    return 0.0f;
}

float UTekkenBlueprintLibrary::GetMontageAnimFrame(UAnimMontage* Montage, UAnimInstance* Instance) {
    return 0.0f;
}

FVector UTekkenBlueprintLibrary::GetLocationOfComponentSpace(USceneComponent* Component, const FVector& world_location) {
    return FVector{};
}

float UTekkenBlueprintLibrary::GetKazScale(int32 PlayerNumber) {
    return 0.0f;
}

float UTekkenBlueprintLibrary::GetItaFace(int32 PlayerNumber) {
    return 0.0f;
}

FVector UTekkenBlueprintLibrary::GetHitVector(int32 PlayerNumber) {
    return FVector{};
}

FRotator UTekkenBlueprintLibrary::GetHitRotator(int32 PlayerNumber) {
    return FRotator{};
}

FVector UTekkenBlueprintLibrary::GetHitPosition(int32 PlayerNumber) {
    return FVector{};
}

FVector UTekkenBlueprintLibrary::GetGameBonePositionGame(int32 side, int32 ID) {
    return FVector{};
}

float UTekkenBlueprintLibrary::GetFloorHeight(UObject* WorldContextObject) {
    return 0.0f;
}

FVector UTekkenBlueprintLibrary::GetFighterPos(int32 player_id) {
    return FVector{};
}

FVector UTekkenBlueprintLibrary::GetFighterOrgPos(int32 player_id) {
    return FVector{};
}

int32 UTekkenBlueprintLibrary::GetFighterId(UObject* WorldContextObject, int32 Index) {
    return 0;
}

float UTekkenBlueprintLibrary::GetFighterAnimFrame(int32 player_id) {
    return 0.0f;
}

int32 UTekkenBlueprintLibrary::GetDamageGiven(int32 PlayerNumber) {
    return 0;
}

bool UTekkenBlueprintLibrary::GetConsoleCommandTimeoutEnabled(UObject* WorldContextObject) {
    return false;
}

float UTekkenBlueprintLibrary::GetConsoleCommandSpinValue(UObject* WorldContextObject) {
    return 0.0f;
}

bool UTekkenBlueprintLibrary::GetConsoleCommandSpinEnabled(UObject* WorldContextObject) {
    return false;
}

float UTekkenBlueprintLibrary::GetConsoleCommandPowerValue(UObject* WorldContextObject) {
    return 0.0f;
}

bool UTekkenBlueprintLibrary::GetConsoleCommandPowerEnabled(UObject* WorldContextObject) {
    return false;
}

FName UTekkenBlueprintLibrary::GetCharacterSocketToName(TEnumAsByte<TKCharacterSkeletonSocketPos> SocketPosition) {
    return NAME_None;
}

int32 UTekkenBlueprintLibrary::GetCannotMoveFrame(int32 PlayerNumber) {
    return 0;
}

APawn* UTekkenBlueprintLibrary::GetCameraPawn()
{
    return NULL;
}

FTransform UTekkenBlueprintLibrary::GetBoneTransform2(const USkinnedMeshComponent* Mesh, int32 PlayerNumber, int32 TekkenBoneID) {
    return FTransform{};
}

FTransform UTekkenBlueprintLibrary::GetBoneTransform(const USkinnedMeshComponent* Mesh, int32 BoneIndex) {
    return FTransform{};
}

int32 UTekkenBlueprintLibrary::GetBattleRoundFromStars() {
    return 0;
}

int32 UTekkenBlueprintLibrary::GetBattleRound() {
    return 0;
}

AGameMode* UTekkenBlueprintLibrary::GetAuthGameMode() {
    return NULL;
}

UClass* UTekkenBlueprintLibrary::GetAnimBlueprintGeneratedClass(UAnimBlueprint* AnimBlueprint) {
    return NULL;
}

TArray<AActor*> UTekkenBlueprintLibrary::GetAllAttachedActors(AActor* TargetActor) {
    return TArray<AActor*>();
}

void UTekkenBlueprintLibrary::GameCameraCutThisFrame(UObject* WorldContextObject) {
}

void UTekkenBlueprintLibrary::FrameAdvance() {
}

void UTekkenBlueprintLibrary::ForceGarbageCollection(UObject* WorldContextObject, bool bFullPurge) {
}

bool UTekkenBlueprintLibrary::DoesPackageExist(const FString& LongPackageName) {
    return false;
}

void UTekkenBlueprintLibrary::ClearPause() {
}

bool UTekkenBlueprintLibrary::AllowDynamicScreenPercentage() {
    return false;
}

bool UTekkenBlueprintLibrary::AllowDynamicParallelTranslateCommandList() {
    return false;
}

bool UTekkenBlueprintLibrary::AllowDynamicOcclusionQueryLocation() {
    return false;
}

UTekkenBlueprintLibrary::UTekkenBlueprintLibrary() {
}

