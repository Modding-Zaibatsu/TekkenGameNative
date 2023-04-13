#include "TekkenGameModule.h"
#include "AuraCharacterItem.h"

UAuraCharacterItem::UAuraCharacterItem() {
    this->InstanceName = TEXT("No name");
    this->ReleaseVer = ItemFirstRelease;
    this->Character = CharacterItemEditor::ID_LAST;
    this->bTestItem = false;
    this->bAllowSales = true;
    this->CommonGroup = cmn_aur;
    this->CaptureBankID = 0;
}

