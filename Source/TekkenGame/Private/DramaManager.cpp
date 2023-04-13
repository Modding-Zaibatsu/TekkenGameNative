#include "TekkenGameModule.h"
#include "DramaManager.h"

void ADramaManager::StopCheckRageArts() {
}

void ADramaManager::StopCheckMotHeadName() {
}

void ADramaManager::StartCheckRageArts() {
}

void ADramaManager::StartCheckMotHeadName(int32 player_id) {
}

void ADramaManager::SetRageArtDofEndRate(float Rate) {
}

void ADramaManager::SetDisplayMotHeadFrame(int32 player_id, bool Visible) {
}

void ADramaManager::SetCheckRoundPreKOSlowFlag(bool bCheck) {
}







float ADramaManager::GetRageArtsDofFrame() {
    return 0.0f;
}

FString ADramaManager::GetRageArtsDofDataName(int32 PlayerNumber) {
    return TEXT("");
}

FString ADramaManager::GetDramaName(int32 player_id) {
    return TEXT("");
}

bool ADramaManager::GetDofEnable() {
    return false;
}

FPostProcessSettings ADramaManager::GetAutoDofParam(FPostProcessSettings Settings, int32 player_id, bool CheckWPlayer) {
    return FPostProcessSettings{};
}

FPostProcessSettings ADramaManager::FadeLerp(FPostProcessSettings Settings, float Rate) {
    return FPostProcessSettings{};
}



bool ADramaManager::CheckMotHeadName(int32 player_id) {
    return false;
}


ADramaManager::ADramaManager() {
    this->DOFCurveData = NULL;
}

