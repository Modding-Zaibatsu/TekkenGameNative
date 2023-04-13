#pragma once
#include "Platform.h"
#include "Matinee/InterpTrackFloatBase.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackFloatBase -FallbackName=InterpTrackFloatBase
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueRTPCOnMatineeEnd: 1;

    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
    virtual UTexture2D* GetTrackIcon() const override;
    
    UInterpTrackAkAudioRTPC();
};

