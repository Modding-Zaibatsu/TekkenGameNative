#include "TekkenGameModule.h"
#include "TkTracePartsSetting.h"

FTkTracePartsSetting::FTkTracePartsSetting() {
    this->ScaleType = ETraceScaleType::FromFirstSocket;
    this->Width = 0;
    this->FrameScale = NULL;
    this->KindDataAssetList = NULL;
}

