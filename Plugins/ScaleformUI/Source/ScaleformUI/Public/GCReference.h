#pragma once
#include "Platform.h"

#include "GCReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGCReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefCount;
    
    SCALEFORMUI_API FGCReference();
};

