#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETKBowlPinType.h"
#include "TkBowlStrikerFrameParam.h"
#include "UObject.h"
#include "TkBowlStrikerPinTable.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTkBowlStrikerPinTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTkBowlStrikerFrameParam> StrikerFrameParameters;
    
    UTkBowlStrikerPinTable();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsSplitFrame(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsDefinedFrame(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ETKBowlPinType> GetFramePinType(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TArray<bool> GetDefinedPinFrame(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool DoesFrameRequireReplay(int32 FrameNumber);
    
};

