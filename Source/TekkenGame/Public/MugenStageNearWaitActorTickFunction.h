#pragma once
#include "Engine/EngineBaseTypes.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "MugenStageNearWaitActorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FMugenStageNearWaitActorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TEKKENGAME_API FMugenStageNearWaitActorTickFunction();
};