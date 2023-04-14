#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AkAmbientSound.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerIsDestroyed;
    
    AAkAmbientSound();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void StartAmbientSound();

private:

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly,  meta = (AllowPrivateAccess = "true"))
    UAkComponent* AkComponent;
    
};

