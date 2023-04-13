#pragma once
#include "AkAmbientSound.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkAmbientSound -FallbackName=AkAmbientSound
#include "TekkenAmbientSound.generated.h"

UCLASS(Blueprintable)
class ATekkenAmbientSound : public AAkAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundType;
    
    ATekkenAmbientSound();
};

