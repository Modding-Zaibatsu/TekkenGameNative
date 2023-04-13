#include "TekkenGameModule.h"
#include "TkBowlStrikerFrameParam.h"

FTkBowlStrikerFrameParam::FTkBowlStrikerFrameParam() {
    this->FrameNumber = 0;
    this->PinType = TkBowl_PinType_Normal;
    this->bShowReplayOnSuccess = false;
}

