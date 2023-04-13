#pragma once

#include "Array.h"
#include "MissileInstanceInfo.h"
#include "ObjectBase.h"
#include "MissileInfo.generated.h"

class ATekkenCharacterMissile;

USTRUCT(BlueprintType)
struct FMissileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATekkenCharacterMissile> MissileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissileInstanceInfo> SpawnedHandles;
    
    TEKKENGAME_API FMissileInfo();
};

