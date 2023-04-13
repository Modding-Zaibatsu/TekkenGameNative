#include "TekkenGameModule.h"
#include "TekkenCharacterLoadHelper.h"

class ATekkenPlayer;

void ATekkenCharacterLoadHelper::UpdateStatusForCharacters() {
}

void ATekkenCharacterLoadHelper::UpdateSavedCustomizedColors(int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SwapPlayerNumbers(int32 PlayerA, int32 PlayerB) {
}

void ATekkenCharacterLoadHelper::SetPendingLoad(FPendingCharacterLoadInfo PendingLoadInfo, int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SetLoadedInfoStatus(TEnumAsByte<ECharacterLoadedInfoStatus> NewLoadStatus, int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SetLoadedCharacterInfo(FCharacterLoadedInfo NewLoadedInfo, int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SetLoadedCharacterId(TEnumAsByte<FighterId> NewCharacterId, int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SetLoadedCharacter(int32 NewCharacterId, int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::SetCostumeType(TEnumAsByte<ECostumeType> NewCostumeType, int32 PlayerNumber, const FString& UniquePath) {
}

FString ATekkenCharacterLoadHelper::GetNextPathToReload(int32 PlayerNumber) {
    return TEXT("");
}

TEnumAsByte<ECharacterLoadedInfoStatus> ATekkenCharacterLoadHelper::GetLoadedStatus(int32 PlayerNumber) {
    return Status_Requires_CharacterClass_Load;
}

TEnumAsByte<ECostumeType> ATekkenCharacterLoadHelper::GetCostumeType(int32 PlayerNumber) {
    return Color_1P_FR;
}

ATekkenPlayer* ATekkenCharacterLoadHelper::GetCharacterActor(int32 PlayerNumber) {
    return NULL;
}

int32 ATekkenCharacterLoadHelper::CollectItemPathsToReload(int32 PlayerNumber) {
    return 0;
}

void ATekkenCharacterLoadHelper::ClearReloadedItemPaths(int32 PlayerNumber) {
}

void ATekkenCharacterLoadHelper::ClearLoadHelper(bool bDestroyActors) {
}

ATekkenCharacterLoadHelper::ATekkenCharacterLoadHelper() {
    this->bDeterminedLoadStatus = false;
    this->bRequiresPlayerBufferSwap = false;
    this->LoadedCharacters.AddDefaulted(2);
}

