#pragma once

#include "MobSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMobSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundDelay;
    
    TEKKENGAME_API FMobSound();
};

