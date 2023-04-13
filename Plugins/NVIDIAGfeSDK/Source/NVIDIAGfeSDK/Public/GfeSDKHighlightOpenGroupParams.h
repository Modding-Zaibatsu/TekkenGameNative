#pragma once
#include "Map.h"
#include "UnrealString.h"

#include "GfeSDKHighlightOpenGroupParams.generated.h"

USTRUCT(BlueprintType)
struct FGfeSDKHighlightOpenGroupParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> GroupDescriptionTranslationTable;
    
    NVIDIAGFESDK_API FGfeSDKHighlightOpenGroupParams();
};

