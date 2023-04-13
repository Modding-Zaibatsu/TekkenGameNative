#pragma once
#include "Platform.h"

#include "EMissileSoundEventType.generated.h"

UENUM(BlueprintType)
enum class EMissileSoundEventType : uint8 {
    MissileSoundEventType_None,
    MissileSoundEventType_RegularHit,
    MissileSoundEventType_FloorHit,
    MissileSoundEventType_WallHit,
    MissileSoundEventType_Guard,
    MissileSoundEventType_Expired,
    MissileSoundEventType_MissileClash,
    MissileSoundEventType_Cancel,
    MissileSoundEventType_Spawn,
    MissileSoundEventType_MAX UMETA(Hidden),
};

