#pragma once

#include "EnumAsByte.h"
#include "KazumiTigerAnimTypes.h"
#include "TigerAnimAttack.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FTigerAnimAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<KazumiTigerAnimTypes> AnimTag;
    
    TEKKENGAME_API FTigerAnimAttack();
};

