#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "TkAnimNode_ModifyBoneArray.h"
#include "Animation/AnimInstance.h"
#include "TkTraceAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TEKKENGAME_API UTkTraceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTkAnimNode_ModifyBoneArray BoneArrayNode;
    
public:
    UTkTraceAnimInstance();
};

