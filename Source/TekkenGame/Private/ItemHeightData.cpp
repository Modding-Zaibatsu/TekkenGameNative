#include "TekkenGameModule.h"
#include "ItemHeightData.h"

FItemHeightData::FItemHeightData() {
    this->bAffectedByHeights = false;
    this->bAffectedBySlopes = false;
    this->bPreviewNewHeights = false;
    this->ItemHeight = 0;
    this->DirtyData = false;
}

