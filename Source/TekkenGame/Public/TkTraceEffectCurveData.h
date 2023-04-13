#pragma once
#include "NameTypes.h"
#include "Curves/RichCurve.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "TkTraceEffectCurveData.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FTkTraceEffectCurveData();
};

