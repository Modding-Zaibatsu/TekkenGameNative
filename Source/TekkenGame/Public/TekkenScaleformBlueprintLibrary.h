#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BowlModeType.h"
#include "BowlPin.h"
#include "BowlPinType.h"
#include "BowlPlayer.h"
#include "BowlRageType.h"
#include "BowlScoreResult.h"
#include "BowlSelectResult.h"
#include "BowlThrowType.h"
#include "FadeType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TekkenScaleformBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UTekkenScaleformBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTekkenScaleformBlueprintLibrary();
    UFUNCTION(BlueprintCallable, Category="Other")
    static void ShowBowlHud();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetBowlPlayerKeyPause(bool Pause);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsCharSetectStopHinokoEffect();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsCharSetectCallSparkEffect();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsCharSetectCallSmokeEffect();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsCharSetectCallHinokoEffect();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void HideBowlHud();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncScoreStart();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<BowlSelectResult> BowlSyncResult();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncPinInfoStart();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncHudOverlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncHud();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncGaugeStart(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSyncGameMessage();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStopSubtitle();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartWinPlayer(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartTimeUp();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartTimer();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartThorw(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlStartStrikeScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartStrike(const bool striker_is_split_made);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartSplit(TArray<TEnumAsByte<BowlPin>> score);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartSpeedInfo(float Speed);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartSpare();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartResult(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartPinInfo(TArray<TEnumAsByte<BowlPin>> score);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartPin(TArray<TEnumAsByte<BowlPin>> score);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartPartyBalls(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartOverCharged();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartNewRecord();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartMiss();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartLastBall();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartHudOverlay(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartGutter();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartGauge(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartGameOver();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartFoul();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartFinalThrow();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartDraw();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlStartButtonHelp(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetTimer(float Time);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetStrikerBallCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<BowlScoreResult> BowlSetScore(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num, const TArray<TEnumAsByte<BowlPin>>& score, TEnumAsByte<BowlThrowType> throw_type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetRHICmdUseDeferredContexts(const bool onoff);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetResultMotionEnd(bool flag);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetPower(TEnumAsByte<BowlPlayer> Player, float power);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetPinType(TEnumAsByte<BowlPinType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetPinInfo(const TArray<TEnumAsByte<BowlPin>>& score);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlSetMode(TEnumAsByte<BowlModeType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetFrameNo(const int32 frame_no, const int32 throw_no);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetEnableTimeOut(bool is_enable);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlSetCurve(TEnumAsByte<BowlPlayer> Player, float Curve);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlResetPins(const TArray<TEnumAsByte<BowlPin>>& score);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlResetPartyScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlPlayScore(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlPartyStartRageLottery(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlPartyStartRage(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<BowlRageType> BowlPartyRageDecideLottery(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlPartyIsRageMax(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlPartyIsBallsThrow(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlPartyEndRage(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlPartyBallsThrow(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlIsStartHudOverlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlIsResultMotionEnd();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlIsNewRecord();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlIsHudOverlayMode(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlIsEnableTimeOut();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlGotoMainMenu();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlGotoCharacterSelect();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 BowlGetTotalScore(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<BowlPinType> BowlGetPinType();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 BowlGetPartyScore(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<BowlModeType> BowlGetMode();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlGameStart();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlFadeOut(TEnumAsByte<FadeType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlFadeIn(TEnumAsByte<FadeType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlFadeClean(TEnumAsByte<FadeType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlFadeBlack(TEnumAsByte<FadeType> Type);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndWinPlayer();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndTimer();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlEndSyncHudOverlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndStrikeScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndSpeedInfo();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndPinInfo();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndPartyBalls(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndNewRecord();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndHudOverlay();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndGauge(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndDraw();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEndButtonHelp(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEnablePause();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlEditStrikerBallNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlDisablePause();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlDecidePower(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlDecideCurve(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static int32 BowlDbgGetGotoResultScore(TEnumAsByte<BowlPlayer> Player);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlDbgGetGotoResult();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlClearScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlCancelGameMessage();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void BowlBallPlusOneAtNextStartScore();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool BowlAddPartyScore(TEnumAsByte<BowlPlayer> Player, int32 score);
    
};

