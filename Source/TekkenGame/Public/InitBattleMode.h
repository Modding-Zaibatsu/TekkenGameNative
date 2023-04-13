#pragma once

#include "InitBattleMode.generated.h"

UENUM(BlueprintType)
enum InitBattleMode {
    InitBattleModePreStart1P,
    InitBattleModePreStart2P,
    InitBattleModeDrama,
    InitBattleModeRound1,
    InitBattleModeRound2,
    InitBattleModeRoundAction,
    InitBattleModeRoundActionDrama,
    InitBattleModeWinView,
    InitBattleModeWinViewDrama,
    InitBattleModeDrawView,
    InitBattleModeContinue,
    InitBattleModeKeyAutoPlay,
    InitBattleModePracticePre,
    InitBattleModePracticeMain,
    InitBattleModeRevengePractice,
    InitBattleModeSeamlessRound1,
    InitBattleModeSeamlessRound2,
    InitBattleModePlayerInfo,
    InitBattleModeReplay,
    InitBattleModeCustomize,
    InitBattleModeCustomizeStartView,
    InitBattleModeCustomizeWinView,
    InitBattleModeKeyRecord,
    InitBattleModeMax,
};

