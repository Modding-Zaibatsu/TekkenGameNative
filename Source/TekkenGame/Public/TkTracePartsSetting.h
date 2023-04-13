#pragma once

#include "EnumAsByte.h"
#include "ETraceScaleType.h"
#include "TkTracePartsSetting.generated.h"

class UCurveFloat;
class UTkTraceKindDataAssetList;

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTracePartsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceScaleType> ScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceKindDataAssetList* KindDataAssetList;
    
    FTkTracePartsSetting();
};

