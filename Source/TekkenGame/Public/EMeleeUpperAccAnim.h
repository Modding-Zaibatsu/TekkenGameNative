#pragma once

#include "EMeleeUpperAccAnim.generated.h"

UENUM(BlueprintType)
enum class EMeleeUpperAccAnim : uint8 {
    Unassigned,
    OneHand_OverheadSwing01,
    OneHand_OverheadSwing02,
    OneHand_Bonk,
    TwoHand_GroundSlam,
    TwoHand_DeepSwing_CamFar,
    TwoHand_DeepSwing_CamNear,
    BaseballSwing,
    FancySwing,
};

