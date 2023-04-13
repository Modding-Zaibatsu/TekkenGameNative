#pragma once
#include "Vector.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CharacterLoadInfo.generated.h"

class UAnimBlueprint;
class UCharacterItemSet;

USTRUCT(BlueprintType)
struct FCharacterLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterItemSet* CharacterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimBlueprint* AnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    TEKKENGAME_API FCharacterLoadInfo();
};

