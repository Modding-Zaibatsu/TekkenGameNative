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
    this->SendLevel = 140700621893344;
    this->FadeRate = 140700621893344;
    this->Priority = 140700621893344;
    this->NextLowerPriorityAkReverbVolume = NULL;
}

