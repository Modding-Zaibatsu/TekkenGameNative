#include "TekkenGameModule.h"
#include "CharacterItemBlueprintWDrop.h"

class AModularTekkenPlayer;
class UObject;
class USceneComponent;

void ACharacterItemBlueprintWDrop::UnattachAndDropItem(USceneComponent* ObjToDrop, FVector LocationToDrop) {
}



FVector ACharacterItemBlueprintWDrop::GetRandomItemScale() const {
    return FVector{};
}

FTransform ACharacterItemBlueprintWDrop::GetItemDropLocation(AModularTekkenPlayer* PlayerOwner, FName AttachSocket) const {
    return FTransform{};
}

TArray<UObject*> ACharacterItemBlueprintWDrop::GetDropItems() {
    return TArray<UObject*>();
}

void ACharacterItemBlueprintWDrop::AddDropItem(UObject* DropItem) {
}

ACharacterItemBlueprintWDrop::ACharacterItemBlueprintWDrop() {
    this->AnimType = EWazaItemAnimType::Unassigned;
    this->UpperAccAnim = EDropUpperAccAnim::Unassigned;
    this->LowerAccAnim = EDropLowerAccAnim::Unassigned;
    this->ScaleLowerLimit = 140700621893344;
    this->ScaleUpperLimit = 140700621893344;
    this->bScaleFromList = false;
    this->ItemScales.AddDefaulted(1);
    this->ItemDropMax = 140700621893344;
}

