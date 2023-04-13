#pragma once

#include "ETekkenThumbnailPose.h"
#include "UnrealString.h"
#include "ThumbnailOverrides.generated.h"

USTRUCT(BlueprintType)
struct FThumbnailOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Overriden_CCI_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CCI_Camera_Bank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETekkenThumbnailPose> Pose_Override;
    
    TEKKENGAME_API FThumbnailOverrides();
};

