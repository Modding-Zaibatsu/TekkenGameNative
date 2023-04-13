#pragma once

#include "ECostumeType.h"
#include "FighterId.h"
#include "UnrealString.h"
#include "PendingCharacterLoadInfo.generated.h"

USTRUCT(BlueprintType)
struct FPendingCharacterLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FighterId> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECostumeType> DesiredCostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueCostumePath;
    
    TEKKENGAME_API FPendingCharacterLoadInfo();
};

