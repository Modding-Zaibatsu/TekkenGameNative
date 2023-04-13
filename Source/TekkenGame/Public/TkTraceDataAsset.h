#pragma once
#include "Engine/DataAsset.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TkTraceDataAsset.generated.h"

class UTkTraceColorPalletDataAsset;
class UTkTraceInfinityDataAsset;
class UTkTracePartsDataAssetList;

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTracePartsDataAssetList* TracePartsDataAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceInfinityDataAsset* TraceInfinityDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceKeyFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceVelocity;
    
    UTkTraceDataAsset();
};

