#pragma once
#include "UObject.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetUserStorageRequest.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UNetUserStorageRequest : public UObject {
    GENERATED_BODY()
public:
    UNetUserStorageRequest();
};

