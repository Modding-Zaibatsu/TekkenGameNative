#pragma once
#include "Matinee/InterpTrackInst.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackInst -FallbackName=InterpTrackInst
#include "InterpTrackInstAkAudioRTPC.generated.h"

UCLASS()
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioRTPC();
};

