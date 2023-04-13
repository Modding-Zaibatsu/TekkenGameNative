#pragma once

#include "RoundedNonuniformSpline.h"
#include "SmoothNonuniformSpline.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FSmoothNonuniformSpline : public FRoundedNonuniformSpline {
    GENERATED_BODY()
public:
    FSmoothNonuniformSpline();
};

