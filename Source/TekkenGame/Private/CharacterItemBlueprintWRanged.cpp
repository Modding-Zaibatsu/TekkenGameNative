#include "TekkenGameModule.h"
#include "CharacterItemBlueprintWRanged.h"

class UObject;

void ACharacterItemBlueprintWRanged::ManageDebris(UObject* DebrisObj) {
}

ACharacterItemBlueprintWRanged::ACharacterItemBlueprintWRanged() {
    this->AnimType = EWazaItemAnimType::Unassigned;
    this->UpperAccAnim = ERangedUpperAccAnim::Unassigned;
    this->LowerAccAnim = ERangedLowerAccAnim::Unassigned;
    this->DebrisMax = 0;
}

