#pragma once

#include "Array.h"
#include "EnumAsByte.h"
#include "ETKBowlPinType.h"
#include "TkBowlStrikerFrameParam.generated.h"

USTRUCT(BlueprintType)
struct FTkBowlStrikerFrameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETKBowlPinType> PinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReplayOnSuccess;
    
    TEKKENGAME_API FTkBowlStrikerFrameParam();
};

