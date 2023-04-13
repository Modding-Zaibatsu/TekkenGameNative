#include "TekkenGameModule.h"
#include "StageParameter.h"
#include "MRZMaterialComponent.h"












AStageParameter::AStageParameter() {
    this->Collection = NULL;
    this->MRZMaterialComponent = CreateDefaultSubobject<UMRZMaterialComponent>(TEXT("MRZMaterialComponent0"));
}

