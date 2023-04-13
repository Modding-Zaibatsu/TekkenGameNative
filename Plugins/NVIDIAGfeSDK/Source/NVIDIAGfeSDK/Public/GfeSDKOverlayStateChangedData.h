#pragma once

#include "EGfeSDKOverlayState.h"
#include "EnumAsByte.h"
#include "GfeSDKOverlayStateChangedData.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKOverlayStateChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGfeSDKOverlayState> State;
    
    NVIDIAGFESDK_API FGfeSDKOverlayStateChangedData();
};

