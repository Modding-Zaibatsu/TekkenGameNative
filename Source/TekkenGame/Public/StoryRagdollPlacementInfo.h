#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StoryRagdollInfo.h"
#include "GameFramework/Actor.h"
#include "StoryRagdollPlacementInfo.generated.h"

UCLASS(Blueprintable)
class AStoryRagdollPlacementInfo : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoryRagdollInfo> PlacementInfos;
    
    AStoryRagdollPlacementInfo();
    UFUNCTION(BlueprintCallable, Category="Other")
    void EnableRagdoll();
    
};

