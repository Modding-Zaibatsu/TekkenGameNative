#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "GCReference.h"
#include "UObject.h"
#include "GFxEngine.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UGFxEngine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGCReference> GCReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefCount;
    
    UGFxEngine();
};

