#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "EMobState.h"
#include "MobSound.h"
#include "GameFramework/Pawn.h"
#include "TekkenMobActor.generated.h"

class ATekkenWallActor;
class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ATekkenMobActor : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATekkenWallActor* WallDependency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMobSound> CheerSoundEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMobSound> TerrorSoundEvents;
    
    ATekkenMobActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetFocusTransNative(const FTransform& InFocusTrans);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    float GetYawLimitNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    bool GetUseFocusNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FRotator GetTargetLookatRotNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    USkeletalMeshComponent* GetSkeletalMeshNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    UAnimSequence* GetRandomIdleNative(EMobState InMobState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    float GetPitchLimitNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    EMobState GetMobStateNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FTransform GetFocusTransNative() const;
    
};

