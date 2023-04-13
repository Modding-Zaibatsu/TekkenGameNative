#include "TekkenGameModule.h"
#include "TkTraceDataAsset.h"

UTkTraceDataAsset::UTkTraceDataAsset() {
    this->TracePartsDataAssetList = NULL;
    this->TraceColorPalletDataAsset = NULL;
    this->TraceInfinityDataAsset = NULL;
    this->bDebugDrawTraceFrame = false;
    this->bDebugDrawTraceKeyFrame = false;
    this->bDebugDrawTraceVelocity = false;
}

