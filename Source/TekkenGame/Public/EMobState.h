#pragma once
#include "Platform.h"

#include "EMobState.generated.h"

UENUM(BlueprintType)
enum class EMobState : uint8 {
    Idle_State,
    Cheer_State,
    Terror_State,
};

