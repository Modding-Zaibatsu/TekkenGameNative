#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterSound.h"
#include "CharacterStream.h"
#include "GameFramework/Actor.h"
#include "TekkenCharacterSoundManager.generated.h"

UCLASS(Blueprintable)
class ATekkenCharacterSoundManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSound> Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterStream> Streams;
    
    ATekkenCharacterSoundManager();
};

