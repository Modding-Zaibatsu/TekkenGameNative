#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Array.h"
#include "ThumbnailOffsets.h"
#include "GameFramework/Actor.h"
#include "CharacterThumbnailOffset.generated.h"

UCLASS(Blueprintable)
class ACharacterThumbnailOffset : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> FaceOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> HairOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> UpperOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> LowerOffsets;
    
    ACharacterThumbnailOffset();
};

