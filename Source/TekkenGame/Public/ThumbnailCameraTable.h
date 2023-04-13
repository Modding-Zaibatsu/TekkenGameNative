#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "ThumbnailOffsets.h"
#include "UObject.h"
#include "ThumbnailCameraTable.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UThumbnailCameraTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> UpperOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> LowerOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> FullBodyOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> FaceOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> AccessoryOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOffsets> HairAccessoryOffsets;
    
    UThumbnailCameraTable();
    UFUNCTION(BlueprintCallable, Category="Other")
    void ForceTableAsDirty();
    
};

