#pragma once

#include "EMissileHitType.generated.h"

UENUM(BlueprintType)
enum EMissileHitType {
    MissileHitTypeEffect_Unassigned,
    MissileHitTypeEffect_RegularHit,
    MissileHitTypeEffect_FloorHit,
    MissileHitTypeEffect_WallHit,
    MissileHitTypeEffect_Guard,
    MissileHitTypeEffect_Expired,
    MissileHitTypeEffect_MissileClash,
    MissileHitTypeEffect_Cancel,
    MissileHitTypeEffect_MAX UMETA(Hidden),
};

