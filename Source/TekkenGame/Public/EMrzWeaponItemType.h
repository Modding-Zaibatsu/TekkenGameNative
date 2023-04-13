#pragma once
#include "Platform.h"

#include "EMrzWeaponItemType.generated.h"

UENUM(BlueprintType)
enum class EMrzWeaponItemType : uint8 {
    EMWIT_BASTARDSWORD,
    EMWIT_KING,
    EMWIT_MIDSWORD,
    EMWIT_SHIELD,
    EMWIT_SHORTSWORD,
    EMWIT_SPEAR,
    EMWIT_MAX UMETA(Hidden),
};

