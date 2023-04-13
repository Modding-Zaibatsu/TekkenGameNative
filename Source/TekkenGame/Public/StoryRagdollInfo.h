#pragma once

#include "Array.h"
#include "StoryBattleNumber.h"
#include "StoryRagdollInfo.generated.h"

class ASkeletalMeshActor;

USTRUCT(BlueprintType)
struct FStoryRagdollInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> RagdollMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<StoryBattleNumber> BattleNo;
    
    TEKKENGAME_API FStoryRagdollInfo();
};

