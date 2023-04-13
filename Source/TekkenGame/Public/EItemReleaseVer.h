#pragma once

#include "EItemReleaseVer.generated.h"

UENUM(BlueprintType)
enum EItemReleaseVer {
    ItemVersionUnset,
    ItemFirstRelease,
    ItemUpdate1,
    ItemUpdate2,
    ItemUpdate3,
    ItemUpdate4,
    ItemUpdate5,
    ItemUpdate6,
    CS_Release_1_0,
    ItemUpdateLast,
};

