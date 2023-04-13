#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetDataStore.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UNetDataStore : public UObject {
    GENERATED_BODY()
public:
    UNetDataStore();
};

