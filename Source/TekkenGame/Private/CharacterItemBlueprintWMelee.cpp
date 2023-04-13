#include "TekkenGameModule.h"
#include "CharacterItemBlueprintWMelee.h"

class UObject;

void ACharacterItemBlueprintWMelee::ManageDebris(UObject* DebrisObj) {
}

ACharacterItemBlueprintWMelee::ACharacterItemBlueprintWMelee() {
    this->DebrisMax = 0;
    this->AnimType = EWazaItemAnimType::Unassigned;
    this->UpperAccAnim = EMeleeUpperAccAnim::Unassigned;
    this->LowerAccAnim = EMeleeLowerAccAnim::Unassigned;
}

