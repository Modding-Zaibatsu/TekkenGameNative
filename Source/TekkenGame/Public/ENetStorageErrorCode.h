#pragma once
#include "Platform.h"

#include "ENetStorageErrorCode.generated.h"

UENUM(BlueprintType)
enum class ENetStorageErrorCode : uint8 {
    Error,
    Ok,
    Lock,
    Active,
    Inactive,
    Abort,
    Offline,
    SizeOver,
    IllegalData,
    NotFound,
    EndOfService,
    BeforeService,
    Maintenance,
    AccessLimit,
};

