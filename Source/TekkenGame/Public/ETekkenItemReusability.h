#pragma once

#include "ETekkenItemReusability.generated.h"

UENUM(BlueprintType)
enum ETekkenItemReusability {
    Usable_As_Is,
    Requires_Reinit,
    Requires_Reload,
    Requires_FullLoad,
};

