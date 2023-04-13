#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Array.h"
#include "Color.h"
#include "TkTraceColorPalletSetting.h"
#include "Engine/DataAsset.h"
#include "TkTraceColorPalletDataAsset.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkTraceColorPalletDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkTraceColorPalletSetting> ColorPalletSettings;
    
    UTkTraceColorPalletDataAsset();
};

