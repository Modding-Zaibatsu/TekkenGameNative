#pragma once

#include "EMob2State.generated.h"

UENUM(BlueprintType)
enum class EMob2State : uint8 {
    State_Loop,
    State_Loop1,
    State_Loop2,
    State_InitBattleRound,
    State_Afraid,
    State_WallHit,
    State_DealBigDamage,
    State_CausedBigDamage1,
    State_CausedBigDamage2,
    State_Rage1,
    State_Rage2,
    State_RageArtsHit,
    State_Win,
    State_Lose,
    State_MAX UMETA(Hidden),
};

