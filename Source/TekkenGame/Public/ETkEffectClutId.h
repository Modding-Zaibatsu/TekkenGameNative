#pragma once
#include "Platform.h"

#include "ETkEffectClutId.generated.h"

UENUM(BlueprintType)
enum class ETkEffectClutId : uint8 {
    OEF_CLUT_NONE,
    OEF_CLUT_AUTO,
    OEF_CLUT_RED,
    OEF_CLUT_ORANGE,
    OEF_CLUT_YELLOW,
    OEF_CLUT_LIME,
    OEF_CLUT_GREEN,
    OEF_CLUT_EMERALD,
    OEF_CLUT_CYAN,
    OEF_CLUT_SKYBLUE,
    OEF_CLUT_BLUE,
    OEF_CLUT_PURPLE,
    OEF_CLUT_MAGENTA,
    OEF_CLUT_ROSE,
    OEF_CLUT_WHITE,
    OEF_CLUT_GRAY,
    OEF_CLUT_R_Y,
    OEF_CLUT_Y_G,
    OEF_CLUT_G_C,
    OEF_CLUT_C_B,
    OEF_CLUT_B_P,
    OEF_CLUT_P_R,
    OEF_CLUT_P_G,
    OEF_CLUT_P_B,
    OEF_CLUT_VLT,
    OEF_CLUT_MAX UMETA(Hidden),
};

