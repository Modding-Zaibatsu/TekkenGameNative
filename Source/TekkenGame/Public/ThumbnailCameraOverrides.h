#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "ThumbnailOverrides.h"
#include "UObject.h"
#include "ThumbnailCameraOverrides.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UThumbnailCameraOverrides : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailOverrides> OverridenThumbnailItems;
    
    UThumbnailCameraOverrides();
};

