#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveBase -FallbackName=CurveBase
#include "Array.h"
#include "ETkTraceEffectCurveType.h"
#include "TkTraceEffectCurveData.h"
#include "Curves/CurveBase.h"
#include "TkTraceEffectCurve.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceEffectCurve : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkTraceEffectCurveData> CurveData;
    
    UTkTraceEffectCurve();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float GetParamValue(TEnumAsByte<ETkTraceEffectCurveType> CurveType, float InTime) const;
    
};

