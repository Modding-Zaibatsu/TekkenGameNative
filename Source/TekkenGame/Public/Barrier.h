#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BarrierGroup.h"
#include "WallBarrierGroup.h"
#include "GameFramework/Actor.h"
#include "Barrier.generated.h"

UCLASS(Blueprintable)
class ABarrier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWallBarrierGroup> WallBarrierGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarrierGroup> BarrierGroups;
    
    ABarrier();
};

