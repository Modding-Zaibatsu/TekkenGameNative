#pragma once
#include "Platform.h"

#include "ERenderingLayer.generated.h"

UENUM(BlueprintType)
enum class ERenderingLayer : uint8 {
    Background,
    Chara1P,
    Chara2P,
    Chara1P_Back,
    Chara2P_Back,
    MAX,
};

