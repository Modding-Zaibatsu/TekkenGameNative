#include "TekkenGameModule.h"
#include "TkTracePartsDataAsset.h"

UTkTracePartsDataAsset::UTkTracePartsDataAsset() {
    this->TracePartsId = ETkTracePartsId::TRC_PT_ARMS1;
    this->bOverrideEvent = false;
    this->LifeTime = 0;
    this->bLifeStop = false;
    this->MaxKeyFrameNum = 0;
    this->Brightness = 0;
    this->KeyFrameStopFrame = 0;
    this->BrightnessFrame = 0;
    this->RefractionFrame = 0;
}

