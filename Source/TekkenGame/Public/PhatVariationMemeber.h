#pragma once

#include "EnumAsByte.h"
#include "PhatVariationAssign.h"
#include "PhatVariationMemeber.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPhatVariationMemeber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ProblemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<PhatVariationAssign> PhatVariationID;
    
    TEKKENGAME_API FPhatVariationMemeber();
};

