#pragma once

#include "Array.h"
#include "BoneModifyTransform.h"
#include "BoneModifyTransformArray.generated.h"

USTRUCT(BlueprintType)
struct TEKKENGAME_API FBoneModifyTransformArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneModifyTransform> BoneModifyTransform;
    
    FBoneModifyTransformArray();
};

