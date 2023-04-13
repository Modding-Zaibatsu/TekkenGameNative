#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Array.h"
#include "TkTraceInfinitySetting.h"
#include "Engine/DataAsset.h"
#include "TkTraceInfinityDataAsset.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceInfinityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkTraceInfinitySetting> InfinitySettingTable;
    
    UTkTraceInfinityDataAsset();
};

