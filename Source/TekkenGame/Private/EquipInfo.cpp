#include "TekkenGameModule.h"
#include "EquipInfo.h"

FEquipInfo::FEquipInfo() {
    this->EquipItem = NULL;
    this->bIsBlueprintClass = false;
    this->ItemPosition = HEAD;
    this->ParentPosition = HEAD;
    this->ItemActor = NULL;
    this->ItemHeight = 0;
    this->bIsFurItem = false;
}

