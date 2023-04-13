#pragma once
#include "Components/SceneComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AkComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UAkComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UseReverbVolumes(bool inUseReverbVolumes);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Stop();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetOutputBusVolume(float BusVolume);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetAttenuationScalingFactor(float Value);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetActiveListeners(int32 in_uListenerMask);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PostTrigger(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PostAssociatedAkEvent();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PostAkEventByName(const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PostAkEvent(UAkAudioEvent* AkEvent, const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    float GetAttenuationRadius() const;
    
};

