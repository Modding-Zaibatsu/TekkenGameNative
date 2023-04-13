#include "NeoFurModule.h"
#include "NeoFurAsset.h"

UNeoFurAsset::UNeoFurAsset() {
    this->SkeletalMesh = NULL;
    this->StaticMesh = NULL;
    this->MaterialId = 0;
    this->Version = 0;
    this->MorphTargetName = TEXT("NeoFur_OuterLayer");
}

