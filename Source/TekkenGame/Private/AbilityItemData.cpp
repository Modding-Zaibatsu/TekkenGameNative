#include "TekkenGameModule.h"
#include "AbilityItemData.h"

FAbilityItemData::FAbilityItemData() {
    this->isSkelMesh = false;
    this->isItemBlueprint = false;
    this->RegisteredObj = NULL;
    this->CharacterItem = NULL;
    this->ItemLocation = HEAD;
    this->AbilityID = ITEM_NONE;
    this->BPType = NOT_SET;
    this->ItemBlueprintController = NULL;
}

