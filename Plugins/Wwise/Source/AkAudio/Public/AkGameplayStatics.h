#pragma once
#include "EnumAsByte.h"
#include "Platform.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "AkGameplayStatics.generated.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStatics();
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UnloadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StartProfilerCapture(const FString& FileName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void StartOutputCapture(const FString& FileName);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetState(FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void PostTrigger(FName Trigger, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static void PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void LoadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void ClearBanks();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
};

