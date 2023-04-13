#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetDataStoreManager.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UNetDataStoreManager : public UObject {
    GENERATED_BODY()
public:
    UNetDataStoreManager();
};

