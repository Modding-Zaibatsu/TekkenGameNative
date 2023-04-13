#pragma once

#include "HiddenCommonParams.h"
#include "HiddenParamsSequenceProceeded.generated.h"

USTRUCT(BlueprintType)
struct FHiddenParamsSequenceProceeded : public FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelatedStageSequenceId;
    
    TEKKENGAME_API FHiddenParamsSequenceProceeded();
};

