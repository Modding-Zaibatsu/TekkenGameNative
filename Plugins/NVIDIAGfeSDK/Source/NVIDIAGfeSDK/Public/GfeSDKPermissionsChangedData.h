#pragma once

#include "EGfeSDKPermission.h"
#include "EGfeSDKScope.h"
#include "Map.h"
#include "GfeSDKPermissionsChangedData.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKPermissionsChangedData {
    GENERATED_BODY()
public:
    
    NVIDIAGFESDK_API FGfeSDKPermissionsChangedData();
};

