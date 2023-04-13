#pragma once

#include "EGfeSDKHighlightSignificance.h"
#include "EGfeSDKHighlightType.h"
#include "UnrealString.h"
#include "GfeSDKHighlightGroupView.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightGroupView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGfeSDKHighlightType> TagsFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGfeSDKHighlightSignificance> SignificanceFilter;
    
    NVIDIAGFESDK_API FGfeSDKHighlightGroupView();
};

