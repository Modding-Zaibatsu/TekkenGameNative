#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MatineeVar.h"
#include "GameFramework/Actor.h"
#include "TekkenDramaActorHenchman.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API ATekkenDramaActorHenchman : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameSpeedDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatineeVar> MatineeList;
    
    ATekkenDramaActorHenchman();
};

