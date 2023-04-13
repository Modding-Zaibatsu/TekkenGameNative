#include "TekkenGameModule.h"
#include "EffectCharacterItem.h"

UEffectCharacterItem::UEffectCharacterItem() {
    this->InstanceName = TEXT("No name");
    this->ReleaseVer = ItemFirstRelease;
    this->Character = CharacterItemEditor::ID_LAST;
    this->bTestItem = false;
    this->bAllowSales = true;
    this->CommonGroup = cmn_eff;
    this->ItemBlueprint = NULL;
    this->CaptureBankID = 0;
}

