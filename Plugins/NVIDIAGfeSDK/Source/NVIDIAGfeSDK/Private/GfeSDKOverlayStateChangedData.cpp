#include "NVIDIAGfeSDKModule.h"
#include "GfeSDKOverlayStateChangedData.h"

FGfeSDKOverlayStateChangedData::FGfeSDKOverlayStateChangedData() {
    this->Open = false;
    this->State = EGfeSDKOverlayState::Main;
}

