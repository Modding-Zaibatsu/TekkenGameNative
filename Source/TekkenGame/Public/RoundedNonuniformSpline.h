#pragma once

#include "TkTraceSpline.h"
#include "RoundedNonuniformSpline.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FRoundedNonuniformSpline : public FTkTraceSpline {
    GENERATED_BODY()
public:
    FRoundedNonuniformSpline();
};

