#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "Curves/RichCurve.h"
#include "RuntimeDramaDofCurve.generated.h"

class UDramaDOFCurve;

USTRUCT(BlueprintType)
struct FRuntimeDramaDofCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve EditorCurveData[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDramaDOFCurve* ExternalCurve;
    
    TEKKENGAME_API FRuntimeDramaDofCurve();
};

