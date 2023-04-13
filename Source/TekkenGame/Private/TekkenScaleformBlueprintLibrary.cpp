#include "TekkenGameModule.h"
#include "TekkenScaleformBlueprintLibrary.h"

void UTekkenScaleformBlueprintLibrary::ShowBowlHud() {
}

void UTekkenScaleformBlueprintLibrary::SetBowlPlayerKeyPause(bool Pause) {
}

bool UTekkenScaleformBlueprintLibrary::IsCharSetectStopHinokoEffect() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::IsCharSetectCallSparkEffect() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::IsCharSetectCallSmokeEffect() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::IsCharSetectCallHinokoEffect() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::HideBowlHud() {
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncScoreStart() {
    return false;
}

TEnumAsByte<BowlSelectResult> UTekkenScaleformBlueprintLibrary::BowlSyncResult() {
    return BOWL_RESULT_NON;
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncPinInfoStart() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncHudOverlay() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncHud() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncGaugeStart(TEnumAsByte<BowlPlayer> Player) {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlSyncGameMessage() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlStopSubtitle() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartWinPlayer(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartTimeUp() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartTimer() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartThorw(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num) {
}

bool UTekkenScaleformBlueprintLibrary::BowlStartStrikeScore() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlStartStrike(const bool striker_is_split_made) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartSplit(TArray<TEnumAsByte<BowlPin>> score) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartSpeedInfo(float Speed) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartSpare() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartScore() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartResult(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartPinInfo(TArray<TEnumAsByte<BowlPin>> score) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartPin(TArray<TEnumAsByte<BowlPin>> score) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartPartyBalls(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartOverCharged() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartNewRecord() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartMiss() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartLastBall() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartHudOverlay(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartGutter() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartGauge(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlStartGameOver() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartFoul() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartFinalThrow() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartDraw() {
}

void UTekkenScaleformBlueprintLibrary::BowlStartButtonHelp(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetTimer(float Time) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetStrikerBallCount(int32 Count) {
}

TEnumAsByte<BowlScoreResult> UTekkenScaleformBlueprintLibrary::BowlSetScore(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num, const TArray<TEnumAsByte<BowlPin>>& score, TEnumAsByte<BowlThrowType> throw_type) {
    return BOWL_SCORE_RESULT_NORMAL;
}

void UTekkenScaleformBlueprintLibrary::BowlSetRHICmdUseDeferredContexts(const bool onoff) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetResultMotionEnd(bool flag) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetPower(TEnumAsByte<BowlPlayer> Player, float power) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetPinType(TEnumAsByte<BowlPinType> Type) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetPinInfo(const TArray<TEnumAsByte<BowlPin>>& score) {
}

bool UTekkenScaleformBlueprintLibrary::BowlSetMode(TEnumAsByte<BowlModeType> Type) {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlSetFrameNo(const int32 frame_no, const int32 throw_no) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetEnableTimeOut(bool is_enable) {
}

void UTekkenScaleformBlueprintLibrary::BowlSetCurve(TEnumAsByte<BowlPlayer> Player, float Curve) {
}

void UTekkenScaleformBlueprintLibrary::BowlResetPins(const TArray<TEnumAsByte<BowlPin>>& score) {
}

bool UTekkenScaleformBlueprintLibrary::BowlResetPartyScore() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlPlayScore(TEnumAsByte<BowlPlayer> Player, int32 Frame, int32 Num) {
}

void UTekkenScaleformBlueprintLibrary::BowlPartyStartRageLottery(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlPartyStartRage(TEnumAsByte<BowlPlayer> Player) {
}

TEnumAsByte<BowlRageType> UTekkenScaleformBlueprintLibrary::BowlPartyRageDecideLottery(TEnumAsByte<BowlPlayer> Player) {
    return BOWL_RAGE_TYPE_NON;
}

bool UTekkenScaleformBlueprintLibrary::BowlPartyIsRageMax(TEnumAsByte<BowlPlayer> Player) {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlPartyIsBallsThrow(TEnumAsByte<BowlPlayer> Player) {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlPartyEndRage(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlPartyBallsThrow(TEnumAsByte<BowlPlayer> Player) {
}

bool UTekkenScaleformBlueprintLibrary::BowlIsStartHudOverlay() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlIsResultMotionEnd() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlIsNewRecord() {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlIsHudOverlayMode(TEnumAsByte<BowlPlayer> Player) {
    return false;
}

bool UTekkenScaleformBlueprintLibrary::BowlIsEnableTimeOut() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlGotoMainMenu() {
}

void UTekkenScaleformBlueprintLibrary::BowlGotoCharacterSelect() {
}

int32 UTekkenScaleformBlueprintLibrary::BowlGetTotalScore(TEnumAsByte<BowlPlayer> Player) {
    return 0;
}

TEnumAsByte<BowlPinType> UTekkenScaleformBlueprintLibrary::BowlGetPinType() {
    return BOWL_PIN_TYPE_NORMAL;
}

int32 UTekkenScaleformBlueprintLibrary::BowlGetPartyScore(TEnumAsByte<BowlPlayer> Player) {
    return 0;
}

TEnumAsByte<BowlModeType> UTekkenScaleformBlueprintLibrary::BowlGetMode() {
    return BOWL_MODE_10_PIN_1P;
}

void UTekkenScaleformBlueprintLibrary::BowlGameStart() {
}

void UTekkenScaleformBlueprintLibrary::BowlFadeOut(TEnumAsByte<FadeType> Type) {
}

void UTekkenScaleformBlueprintLibrary::BowlFadeIn(TEnumAsByte<FadeType> Type) {
}

void UTekkenScaleformBlueprintLibrary::BowlFadeClean(TEnumAsByte<FadeType> Type) {
}

void UTekkenScaleformBlueprintLibrary::BowlFadeBlack(TEnumAsByte<FadeType> Type) {
}

void UTekkenScaleformBlueprintLibrary::BowlEndWinPlayer() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndTimer() {
}

bool UTekkenScaleformBlueprintLibrary::BowlEndSyncHudOverlay() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlEndStrikeScore() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndSpeedInfo() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndScore() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndPinInfo() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndPartyBalls(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlEndNewRecord() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndHudOverlay() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndGauge(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlEndDraw() {
}

void UTekkenScaleformBlueprintLibrary::BowlEndButtonHelp(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlEnablePause() {
}

void UTekkenScaleformBlueprintLibrary::BowlEditStrikerBallNum(int32 Num) {
}

void UTekkenScaleformBlueprintLibrary::BowlDisablePause() {
}

void UTekkenScaleformBlueprintLibrary::BowlDecidePower(TEnumAsByte<BowlPlayer> Player) {
}

void UTekkenScaleformBlueprintLibrary::BowlDecideCurve(TEnumAsByte<BowlPlayer> Player) {
}

int32 UTekkenScaleformBlueprintLibrary::BowlDbgGetGotoResultScore(TEnumAsByte<BowlPlayer> Player) {
    return 0;
}

bool UTekkenScaleformBlueprintLibrary::BowlDbgGetGotoResult() {
    return false;
}

void UTekkenScaleformBlueprintLibrary::BowlClearScore() {
}

void UTekkenScaleformBlueprintLibrary::BowlCancelGameMessage() {
}

void UTekkenScaleformBlueprintLibrary::BowlBallPlusOneAtNextStartScore() {
}

bool UTekkenScaleformBlueprintLibrary::BowlAddPartyScore(TEnumAsByte<BowlPlayer> Player, int32 score) {
    return false;
}

UTekkenScaleformBlueprintLibrary::UTekkenScaleformBlueprintLibrary() {
}

