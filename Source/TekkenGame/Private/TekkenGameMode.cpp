#include "TekkenGameModule.h"
#include "TekkenGameMode.h"

void ATekkenGameMode::StopBGMAmbientSound() {
}

void ATekkenGameMode::StopAmbientSounds() {
}

void ATekkenGameMode::SetSecretlySwitchingStageFlag(bool bRequest) {
}

void ATekkenGameMode::SetReinitCharCompletedFlag(bool bCompleted) {
}

void ATekkenGameMode::SetLevelVisiblingFlag(bool bVisibling) {
}

void ATekkenGameMode::SetLevelReLoadCompletedFlag(bool bCompleted) {
}

void ATekkenGameMode::SetLevelLoadCompletedFlag(bool bCompleted) {
}

void ATekkenGameMode::SetLevelLoadCancelWaitFlag(bool bWait) {
}

void ATekkenGameMode::SetLevelLoadCancelFlag(bool bRequest) {
}

void ATekkenGameMode::SetDebugKey(int32 nPadNo, int32 nKey) {
}

void ATekkenGameMode::SetCharacterCustomizeLoadWaitFlag(bool bWait) {
}

void ATekkenGameMode::PlayBGMAmbientSound() {
}

void ATekkenGameMode::PlayAmbientSounds() {
}

void ATekkenGameMode::MotheadActorRePickupSound() {
}

bool ATekkenGameMode::IsMotheadStarted() {
    return false;
}

bool ATekkenGameMode::IsBowlingMode() const {
    return false;
}

bool ATekkenGameMode::GetSecretlySwitchingStageFlag() {
    return false;
}

bool ATekkenGameMode::GetLevelLoadCompletedFlag() {
    return false;
}

bool ATekkenGameMode::GetLevelLoadCancelWaitFlag() {
    return false;
}

bool ATekkenGameMode::GetLevelLoadCancelFlag() {
    return false;
}

bool ATekkenGameMode::GetCharacterCustomizeLoadWaitFlag() {
    return false;
}

void ATekkenGameMode::CleanUpItemsInLevel() {
}

ATekkenGameMode::ATekkenGameMode() {
    this->PracticeSwitch = NULL;
    this->MRXRageArtsBG = NULL;
    this->LevelTransition = NULL;
    this->EventDispatcher = NULL;
}

