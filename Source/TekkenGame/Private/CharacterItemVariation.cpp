#include "TekkenGameModule.h"
#include "CharacterItemVariation.h"

class UCharacterItem;
class USkeletalMesh;

void UCharacterItemVariation::RewriteAssetMap() {
}

USkeletalMesh* UCharacterItemVariation::CheckForValueInVariationMap(UCharacterItem* Key) {
    return NULL;
}

UCharacterItemVariation::UCharacterItemVariation() {
    this->BaseCharacterItem = NULL;
    this->VariationMeshes.AddDefaulted(3);
}

