#include "TekkenGameModule.h"
#include "TkBowlReplayManager.h"

class AActor;
class UAkAudioEvent;
class UObject;
class UParticleSystem;

bool ATkBowlReplayManager::syncReplay() {
    return false;
}

void ATkBowlReplayManager::stopReplay() {
}

void ATkBowlReplayManager::stopRecord() {
}

void ATkBowlReplayManager::startReplay(float StartTime) {
}

void ATkBowlReplayManager::startRecord() {
}

void ATkBowlReplayManager::onFirstPinHit() {
}

float ATkBowlReplayManager::getTimeOfFirstHit() {
    return 0.0f;
}

float ATkBowlReplayManager::getReplayLength() {
    return 0.0f;
}

void ATkBowlReplayManager::clear() {
}

void ATkBowlReplayManager::addSE(UAkAudioEvent* AudioEvent, AActor* ActorSource) {
}

void ATkBowlReplayManager::addEffect(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation) {
}

void ATkBowlReplayManager::Add(UObject* Obj) {
}

ATkBowlReplayManager::ATkBowlReplayManager() {
}

