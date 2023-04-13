#include "TekkenGameModule.h"
#include "DekPracticeModeManager.h"

void ADekPracticeModeManager::SetDekVisibility(bool bIsVisible, bool bToggleCPUVisible) {
}


bool ADekPracticeModeManager::IsInitialized() {
    return false;
}

void ADekPracticeModeManager::InitCompleted() {
}


ADekPracticeModeManager::ADekPracticeModeManager() {
    this->DekActor = NULL;
    this->CPUActor = NULL;
    this->RenderingPlayerNumber = 0;
}

