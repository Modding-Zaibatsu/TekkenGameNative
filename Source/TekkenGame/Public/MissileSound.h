#pragma once

#include "EMissileSoundEventType.h"
#include "EnumAsByte.h"
#include "MissileSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMissileSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMissileSoundEventType> EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventSound;
    
    TEKKENGAME_API FMissileSound();
};

