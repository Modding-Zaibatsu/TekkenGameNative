#include "TekkenGameModule.h"
#include "CharacterManager.h"

class ATekkenCharacterLoadHelper;
class UCharacterItemSet;

void ACharacterManager::UnloadAsyncLoadItemSet() {
}









void ACharacterManager::PreAsynLoadCustomizeDataSetup() {
}

void ACharacterManager::PostAsynLoadCustomizeDataTerminate() {
}

UCharacterItemSet* ACharacterManager::LoadItemSetFromXML(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID) {
    return NULL;
}

UCharacterItemSet* ACharacterManager::LoadItemSetFromCustomizeData(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID) {
    return NULL;
}

FString ACharacterManager::GetUniqueCostumePath(int32 PlayerID) {
    return TEXT("");
}

int32 ACharacterManager::GetPlayerSide() {
    return 0;
}

TEnumAsByte<ECostumeType> ACharacterManager::GetDesiredCostumeType(int32 PlayerID) {
    return Color_1P_FR;
}

ATekkenCharacterLoadHelper* ACharacterManager::GetCharacterLoadHelper() {
    return NULL;
}

UCharacterItemSet* ACharacterManager::Find2PColorItemSet(UCharacterItemSet* Player1ItemSet) {
    return NULL;
}

UCharacterItemSet* ACharacterManager::FillItemSet(UCharacterItemSet* DefaultSet, UCharacterItemSet* CustomizedSet) {
    return NULL;
}



void ACharacterManager::AsyncLoadItemSetFromCustomizeData(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID, FCharacterAsyncLoadDynamicDelegate Delegate) {
}

ACharacterManager::ACharacterManager() {
    this->bAsyncLoadComplete = false;
    this->bAsyncLoadCanceled = false;
}

