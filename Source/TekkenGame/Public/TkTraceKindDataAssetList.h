#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Array.h"
#include "TkTraceKindSetting.h"
#include "Engine/DataAsset.h"
#include "TkTraceKindDataAssetList.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceKindDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkTraceKindSetting> KindSettingTable;
    
    UTkTraceKindDataAssetList();
};

