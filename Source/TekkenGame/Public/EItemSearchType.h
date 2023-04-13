#pragma once
#include "Platform.h"

#include "EItemSearchType.generated.h"

UENUM(BlueprintType)
enum class EItemSearchType : uint8 {
    SearchType_ExactName,
    SearchType_Contains,
    SearchType_MAX UMETA(Hidden),
};

