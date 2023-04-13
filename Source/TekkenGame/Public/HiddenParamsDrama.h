#pragma once

#include "HiddenCommonParams.h"
#include "NameTypes.h"
#include "HiddenParamsDrama.generated.h"

USTRUCT(BlueprintType)
struct FHiddenParamsDrama : public FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DramaTag;
    
    TEKKENGAME_API FHiddenParamsDrama();
};

