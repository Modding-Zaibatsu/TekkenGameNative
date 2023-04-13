#pragma once

#include "EnumAsByte.h"
#include "NsbDogAnimTypes.h"
#include "NsbDogAttack.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FNsbDogAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<NsbDogAnimTypes> AnimTag;
    
    TEKKENGAME_API FNsbDogAttack();
};

