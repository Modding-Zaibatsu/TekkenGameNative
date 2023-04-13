#pragma once
#include "Array.h"
#include "Engine/DataAsset.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TkTracePartsDataAssetList.generated.h"

class UTkTracePartsDataAsset;

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTracePartsDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTkTracePartsDataAsset*> PartsDataAssetTable;
    
    UTkTracePartsDataAssetList();
};

