#pragma once

#include "MatineeVar.generated.h"

class AMatineeActor;

USTRUCT(BlueprintType)
struct FMatineeVar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatineeActor* Matinee;
    
    TEKKENGAME_API FMatineeVar();
};

