#include "TekkenGameModule.h"
#include "TkBowlFrictionData.h"

float UTkBowlFrictionData::GetFrictionRate(int32 X, int32 Y) const {
    return 0.0f;
}

UTkBowlFrictionData::UTkBowlFrictionData() {
    this->TexWidth = 0;
    this->TexHeight = 0;
}

