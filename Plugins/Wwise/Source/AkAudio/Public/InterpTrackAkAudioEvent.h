#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackVectorBase -FallbackName=InterpTrackVectorBase
#include "AkAudioEventTrackKey.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS(CollapseCategories)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkAudioEventTrackKey> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueEventOnMatineeEnd: 1;

    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;
    virtual UTexture2D* GetTrackIcon() const override;
    
    UInterpTrackAkAudioEvent();
};
