#include "TekkenGameModule.h"
#include "TkBowlItemManagerComponent.h"

class ACharacterItemBlueprint;
class UMeshComponent;

bool UTkBowlItemManagerComponent::HasValidBoundMesh(TEnumAsByte<ItemSlotPosition> Position) {
    return false;
}

TArray<UMeshComponent*> UTkBowlItemManagerComponent::GetBoundMeshes(TEnumAsByte<ItemSlotPosition> Position) {
    return TArray<UMeshComponent*>();
}


void UTkBowlItemManagerComponent::BindMeshComponent(UMeshComponent* BindComponent, TEnumAsByte<ItemSlotPosition> Position) {
}

void UTkBowlItemManagerComponent::BindItemBlueprint(ACharacterItemBlueprint* BindItemBP, TEnumAsByte<ItemSlotPosition> Position) {
}

UTkBowlItemManagerComponent::UTkBowlItemManagerComponent() {
}

