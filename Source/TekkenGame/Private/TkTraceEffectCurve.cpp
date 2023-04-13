#include "TekkenGameModule.h"
#include "TkTraceEffectCurve.h"

float UTkTraceEffectCurve::GetParamValue(TEnumAsByte<ETkTraceEffectCurveType> CurveType, float InTime) const {
    return 0.0f;
}

UTkTraceEffectCurve::UTkTraceEffectCurve() {
    this->CurveData.AddDefaulted(7);
}

