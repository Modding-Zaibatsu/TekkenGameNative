#include "TekkenGameModule.h"
#include "CharacterPhatVariation.h"

UCharacterPhatVariation::UCharacterPhatVariation() {
    this->BaseSkeletalMesh = NULL;
    this->VariationPhats.AddDefaulted(3);
}

