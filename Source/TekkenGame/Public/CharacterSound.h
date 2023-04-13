#pragma once
#include "Platform.h"

#include "CharacterSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FCharacterSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    TEKKENGAME_API FCharacterSound();
};

