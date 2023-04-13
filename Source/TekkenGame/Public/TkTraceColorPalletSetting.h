#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Color.h"
#include "ETkEffectVertexClutId.h"
#include "ETkTracePartsId.h"
#include "TkTraceColorPalletSetting.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceColorPalletSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkTracePartsId> TracePartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkEffectVertexClutId> ClutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColor;
    
    FTkTraceColorPalletSetting();
};

