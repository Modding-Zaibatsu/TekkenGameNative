#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Array.h"
#include "PhatVariationMemeber.h"
#include "UObject.h"
#include "CharacterPhatVariation.generated.h"

class UPhysicsAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterPhatVariation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BaseSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsAsset*> VariationPhats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhatVariationMemeber> Variations;
    
    UCharacterPhatVariation();
};

