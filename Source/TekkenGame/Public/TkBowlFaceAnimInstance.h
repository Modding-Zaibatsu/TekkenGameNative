#pragma once
#include "Animation/AnimInstance.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "TkBowlFaceAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class TEKKENGAME_API UTkBowlFaceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingFaceMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FaceAnimMontage;
    
    UTkBowlFaceAnimInstance();
    UFUNCTION(BlueprintCallable, Category="Other")
    void EnableFaceMontage();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void DisableFaceMontage();
    
};

