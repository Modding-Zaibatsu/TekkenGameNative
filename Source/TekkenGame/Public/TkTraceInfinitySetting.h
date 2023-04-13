#pragma once

#include "EnumAsByte.h"
#include "ETkEffectVertexClutId.h"
#include "ETkTraceKindId.h"
#include "ETkTracePartsId.h"
#include "TkTraceInfinitySetting.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceInfinitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkTracePartsId> PartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkTraceKindId> KindId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETkEffectVertexClutId> ClutId;
    
    FTkTraceInfinitySetting();
};

