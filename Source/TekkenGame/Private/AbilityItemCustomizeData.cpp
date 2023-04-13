#include "TekkenGameModule.h"
#include "AbilityItemCustomizeData.h"

FAbilityItemCustomizeData::FAbilityItemCustomizeData() {
    this->bIsAbilityItem = false;
    this->bUseAbilityItemOffset = false;
    this->AbilityID = ITEM_NONE;
    this->AbilitySocket = Head_Socket;
}

