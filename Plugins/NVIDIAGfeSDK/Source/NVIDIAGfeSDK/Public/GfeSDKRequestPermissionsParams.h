#pragma once

#include "Array.h"
#include "EGfeSDKScope.h"
#include "GfeSDKRequestPermissionsParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKRequestPermissionsParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EGfeSDKScope>> Scopes;
    
    NVIDIAGFESDK_API FGfeSDKRequestPermissionsParams();
};

