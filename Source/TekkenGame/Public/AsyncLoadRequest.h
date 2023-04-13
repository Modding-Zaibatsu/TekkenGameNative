#pragma once

#include "UObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AsyncLoadRequest.generated.h"

UCLASS(Blueprintable)
class UAsyncLoadRequest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
public:
    UAsyncLoadRequest();
};

