#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "DramaOffset.h"
#include "ETekkenPlayerStart.h"
#include "GameFramework/PlayerStart.h"
#include "TekkenPlayerStart.generated.h"

UCLASS(Blueprintable)
class ATekkenPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETekkenPlayerStart::Type> PosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDramaOffset> DramaOffsetGroups;
    
    ATekkenPlayerStart();
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetStageSequenceID();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetStagePositionType();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetFloorNo();
    
};

