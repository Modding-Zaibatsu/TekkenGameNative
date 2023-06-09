#pragma once

#include "EGfeSDKScope.h"
#include "UnrealString.h"
#include "GfeSDKCreateInputParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKCreateInputParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EGfeSDKScope>> RequiredScopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PollForCallbacks;
    
    NVIDIAGFESDK_API FGfeSDKCreateInputParams();
};

