#pragma once
#include "UnrealString.h"

#include "CharacterStream.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FCharacterStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    TEKKENGAME_API FCharacterStream();
};

