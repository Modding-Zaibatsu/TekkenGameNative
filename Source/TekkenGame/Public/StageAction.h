#pragma once
#include "Array.h"

#include "StageAction.generated.h"

class AEmitter;
class ARadialForceActor;

USTRUCT(BlueprintType)
struct FStageAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARadialForceActor*> RadialForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEmitter*> Emitters;
    
    TEKKENGAME_API FStageAction();
};

