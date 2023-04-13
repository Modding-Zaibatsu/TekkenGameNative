#include "TekkenGameModule.h"
#include "DramaDOFCurve.h"

FPostProcessSettings UDramaDOFCurve::SetDOFParameter(FPostProcessSettings Settings, float InTime) {
    return FPostProcessSettings{};
}

FDramaDofData UDramaDOFCurve::GetDramaDofData(float InTime) const {
    return FDramaDofData{};
}

UDramaDOFCurve::UDramaDOFCurve() {
}

