#pragma once

#include "AkAmbSoundCheckpointRecord.generated.h"

USTRUCT(BlueprintType)
struct FAkAmbSoundCheckpointRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyPlaying;
    
    AKAUDIO_API FAkAmbSoundCheckpointRecord();
};

