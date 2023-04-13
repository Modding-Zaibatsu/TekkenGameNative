#pragma once

#include "TkTraceCatmullRomSpline.h"
#include "TkTraceBezierSpline.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceBezierSpline : public FTkTraceCatmullRomSpline {
    GENERATED_BODY()
public:
    FTkTraceBezierSpline();
};

