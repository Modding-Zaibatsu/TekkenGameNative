#include "TekkenGameModule.h"
#include "ItemPerformanceManager.h"

class ACustomizeCharacterManager;
class UItemManagerComponent;

void AItemPerformanceManager::WriteWorstCasesToLog() {
}

void AItemPerformanceManager::WriteCurrentStatsToLog() {
}

void AItemPerformanceManager::UpdateLogName() {
}

bool AItemPerformanceManager::UpdateItemStats() {
    return false;
}

void AItemPerformanceManager::SetEquippedItemNames(UItemManagerComponent* ItemManagerComponent) {
}

void AItemPerformanceManager::InitItemStats() {
}

void AItemPerformanceManager::InitCCM(ACustomizeCharacterManager* CCM) {
}

void AItemPerformanceManager::CallRound1() {
}

bool AItemPerformanceManager::CalculateItemStats() {
    return false;
}

AItemPerformanceManager::AItemPerformanceManager() {
    this->Character = ECustomizeCharacterManager::PAU;
    this->CostumeType = DefaultDebug;
    this->SampleCount = 0;
    this->StatTimeThreshold = 0;
    this->bExclusiveLoadReleaseVer = false;
    this->DebugReleaseVer = ItemVersionUnset;
    this->bSampleUpperBody = true;
    this->bSampleLowerBody = false;
    this->bSampleFullBody = false;
    this->bSampleHair = false;
    this->bSampleFacialHair = false;
    this->bSampleHead = false;
    this->bSampleFullHead = false;
    this->bSampleGlasses = false;
    this->bSampleHairAccessory = false;
    this->bSampleUpperAccessory = true;
    this->bSampleLowerAccessory = false;
    this->bSampleMakeup = false;
    this->bSampleAura = false;
    this->bTestAllCombinations = false;
}

