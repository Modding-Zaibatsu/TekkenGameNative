#pragma once

#include "EnumAsByte.h"
#include "ETkTraceKindId.h"
#include "TkTraceKindSetting.generated.h"

class UTkTraceKindDataAsset;

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceKindSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkTraceKindId> TraceKindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkTraceKindDataAsset* KindDataAsset;
    
    FTkTraceKindSetting();
};

