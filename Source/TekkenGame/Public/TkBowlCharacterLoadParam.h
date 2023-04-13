#pragma once

#include "ECostumeType.h"
#include "FighterId.h"
#include "TkBowlCharacterBowlParam.h"
#include "TkBowlCharacterLoadParam.generated.h"

USTRUCT(BlueprintType)
struct FTkBowlCharacterLoadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FighterId> Fighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECostumeType> Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedPlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTkBowlCharacterBowlParam BowlParameters;
    
    TEKKENGAME_API FTkBowlCharacterLoadParam();
};

