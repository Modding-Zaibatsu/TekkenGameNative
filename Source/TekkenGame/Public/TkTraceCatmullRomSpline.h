#pragma once

#include "TkTraceSpline.h"
#include "TkTraceCatmullRomSpline.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceCatmullRomSpline : public FTkTraceSpline {
    GENERATED_BODY()
public:
    FTkTraceCatmullRomSpline();
};

