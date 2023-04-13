#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetTitleStorageRequest.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UNetTitleStorageRequest : public UObject {
    GENERATED_BODY()
public:
    UNetTitleStorageRequest();
};

