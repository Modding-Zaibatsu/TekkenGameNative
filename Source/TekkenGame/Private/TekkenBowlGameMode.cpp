#include "TekkenGameModule.h"
#include "TekkenBowlGameMode.h"

class ATkBowlCharacterManager;

void ATekkenBowlGameMode::UnloadGameAudioBank() {
}


void ATekkenBowlGameMode::LoadGameAudioBank() {
}

bool ATekkenBowlGameMode::IsReadyToPlay_Implementation() const {
    return false;
}

ATkBowlCharacterManager* ATekkenBowlGameMode::GetTkBowlCharacterManager() const {
    return NULL;
}



void ATekkenBowlGameMode::ExecuteDeferredBeginPlay() {
}

void ATekkenBowlGameMode::EnablePhysSubsteppingASync() {
}

void ATekkenBowlGameMode::EnablePhysSubstepping() {
}


void ATekkenBowlGameMode::DisablePhysSubsteppingASync() {
}

void ATekkenBowlGameMode::DisablePhysSubstepping() {
}


ATekkenBowlGameMode::ATekkenBowlGameMode() {
    this->BowlGameAudioBank = NULL;
}

