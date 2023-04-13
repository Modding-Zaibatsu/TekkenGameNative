#include "TekkenGameModule.h"
#include "TkTraceInfinitySetting.h"

FTkTraceInfinitySetting::FTkTraceInfinitySetting() {
    this->Life = 0;
    this->Length = 0;
    this->PartsId = ETkTracePartsId::TRC_PT_ARMS0;
    this->KindId = ETkTraceKindId::TRC_KIND_NORMAL;
    this->ClutId = ETkEffectVertexClutId::TK_OEF_CL_RED;
}

