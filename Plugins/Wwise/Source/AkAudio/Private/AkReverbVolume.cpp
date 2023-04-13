#include "AKAudioModule.h"
#include "AkReverbVolume.h"
#include "Net/UnrealNetwork.h"

void AAkReverbVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAkReverbVolume, bEnabled);
}

AAkReverbVolume::AAkReverbVolume() {
    this->bEnabled = true;
    this->AuxBus = NULL;
    this->SendLevel = 0;
    this->FadeRate = 0;
    this->Priority = 0;
    this->NextLowerPriorityAkReverbVolume = NULL;
}

