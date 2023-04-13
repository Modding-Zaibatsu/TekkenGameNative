#pragma once
#include "AnimInstanceProxy.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "TkTraceAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FTkTraceAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FTkTraceAnimInstanceProxy();
};

