#pragma once

#include "EGfeSDKHighlightSignificance.h"
#include "EGfeSDKHighlightType.h"
#include "Map.h"
#include "UnrealString.h"
#include "GfeSDKHighlightDefinition.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserDefaultInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGfeSDKHighlightType> HighlightTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGfeSDKHighlightSignificance> Significance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> NameTranslationTable;
    
    NVIDIAGFESDK_API FGfeSDKHighlightDefinition();
};

