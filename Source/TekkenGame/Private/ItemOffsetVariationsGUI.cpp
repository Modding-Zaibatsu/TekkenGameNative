#include "TekkenGameModule.h"
#include "ItemOffsetVariationsGUI.h"

FItemOffsetVariationsGUI::FItemOffsetVariationsGUI() {
    this->OffsetVariationItem = NULL;
    this->bPreviewOffset = false;
    this->bAllowOverwrite = false;
    this->CreateOption = CreateSingle;
    this->DirtyData = false;
    this->LoadedVariationData = NULL;
}

