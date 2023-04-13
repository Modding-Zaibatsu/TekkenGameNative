#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveBase -FallbackName=CurveBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "DramaDofData.h"
#include "Curves/CurveBase.h"
#include "DramaDOFCurve.generated.h"

UCLASS(Blueprintable)
class UDramaDOFCurve : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[5];
    
    UDramaDOFCurve();
    UFUNCTION(BlueprintCallable, Category="Other")
    FPostProcessSettings SetDOFParameter(FPostProcessSettings Settings, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FDramaDofData GetDramaDofData(float InTime) const;
    
};

