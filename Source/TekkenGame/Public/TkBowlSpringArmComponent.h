#pragma once
#include "GameFramework/SpringArmComponent.h"
#include "Platform.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "TkBowlSpringArmComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChangePositionToUpCamera: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockToUpdateTargetLocation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRollCameraAngleByBallVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUpBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUpBlendTimeToGo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRollAmplifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRollDesired;
    
    UTkBowlSpringArmComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRollCameraAngleByBallVelocity(bool is_enable, USceneComponent* target_scene_component);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PositionUpCameraStart(bool is_start);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void LockUpdateArmLocation(bool is_locked);
    
};

