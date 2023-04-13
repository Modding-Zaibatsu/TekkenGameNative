#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlaybackSettings -FallbackName=LevelSequencePlaybackSettings
#include "EnumAsByte.h"
#include "ETKBowlCharacterSequenceType.h"
#include "ETKBowlSequenceCameraType.h"
#include "LevelSequencePlayer.h"
#include "NameTypes.h"
#include "TkBowlCharacterSequenceInfo.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FTkBowlCharacterSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETKBowlCharacterSequenceType> SequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageSectionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETKBowlSequenceCameraType> CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence_LeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueToCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequencePlaybackSettings PlaybackSettings;
    
    TEKKENGAME_API FTkBowlCharacterSequenceInfo();
};

