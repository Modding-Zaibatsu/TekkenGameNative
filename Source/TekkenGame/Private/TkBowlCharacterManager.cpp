#include "TekkenGameModule.h"
#include "TkBowlCharacterManager.h"

class ATkBowlCharacter;


ATkBowlCharacter* ATkBowlCharacterManager::GetCharacter(int32 AssignedPlayerNumber) {
    return NULL;
}

bool ATkBowlCharacterManager::AreCharactersLoading() {
    return false;
}

ATkBowlCharacterManager::ATkBowlCharacterManager() {
    this->LoadState = TkBowl_CharacterLoad_Idle;
}

