#pragma once

#include "ECharacterLoadedInfoStatus.generated.h"

UENUM(BlueprintType)
enum ECharacterLoadedInfoStatus {
    Status_Requires_CharacterClass_Load,
    Status_Requires_Character_Reinitialization,
    Status_Requires_Asset_Load,
    Status_Requires_Asset_Reinitialization,
    Status_Requires_PlayerNum_Change,
    Status_Good_To_Go,
    Status_MAX UMETA(Hidden),
};

