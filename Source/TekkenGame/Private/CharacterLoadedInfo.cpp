#include "TekkenGameModule.h"
#include "CharacterLoadedInfo.h"

FCharacterLoadedInfo::FCharacterLoadedInfo() {
    this->Character = ID_PAU;
    this->CharacterActor = NULL;
    this->CostumeType = Color_1P_FR;
    this->Status = Status_Requires_CharacterClass_Load;
    this->bForceReload = false;
}

