#include "TekkenGameModule.h"
#include "TkTraceKindSetting.h"

FTkTraceKindSetting::FTkTraceKindSetting() {
    this->TraceKindId = ETkTraceKindId::TRC_KIND_NORMAL;
    this->KindDataAsset = NULL;
}

