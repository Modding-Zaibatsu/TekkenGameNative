#include "AKAudioModule.h"
#include "AkGameplayStatics.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class UObject;
class USceneComponent;

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::UnloadBank(UAkAudioBank* Bank, const FString& BankName) {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& FileName) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& FileName) {
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy) {
    return NULL;
}

void UAkGameplayStatics::SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor) {
}

void UAkGameplayStatics::SetState(FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor) {
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

void UAkGameplayStatics::PostTrigger(FName Trigger, AActor* Actor) {
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
}

void UAkGameplayStatics::PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
}

void UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject) {
}

void UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
}

void UAkGameplayStatics::LoadInitBank() {
}

void UAkGameplayStatics::LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::LoadBank(UAkAudioBank* Bank, const FString& BankName) {
}

UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

void UAkGameplayStatics::ClearBanks() {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

UAkGameplayStatics::UAkGameplayStatics() {
}

