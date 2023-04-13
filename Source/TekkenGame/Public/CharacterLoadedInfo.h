#pragma once

#include "ECharacterLoadedInfoStatus.h"
#include "ECostumeType.h"
#include "EnumAsByte.h"
#include "FighterId.h"
#include "UnrealString.h"
#include "CharacterLoadedInfo.generated.h"

class ATekkenPlayer;

USTRUCT(BlueprintType)
struct FCharacterLoadedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<FighterId> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATekkenPlayer* CharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECostumeType> CostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueCostumePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECharacterLoadedInfoStatus> Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReloadItemPaths;
    
    TEKKENGAME_API FCharacterLoadedInfo();
};

