#include "TekkenGameModule.h"
#include "ColorCustomizeGUI.h"

FColorCustomizeGUI::FColorCustomizeGUI() {
    this->Materialnterface = NULL;
    this->MaterialInstanceOverride = NULL;
    this->Pattern = NULL;
    this->PatternAlpha = 0;
    this->PatternHue = 0;
    this->PatternSaturation = 0;
    this->PatternScaleLRV1 = 0;
    this->PatternScaleLRV2 = 0;
    this->PatternScaleULV1 = 0;
    this->PatternScaleULV2 = 0;
    this->PatternTiling = 0;
    this->PatternRotate = 0;
}

