#include "TekkenGameModule.h"
#include "TkTraceOne.h"

FTkTraceOne::FTkTraceOne() {
    this->Mesh = NULL;
    this->FrameScale = NULL;
    this->EffectCurve = NULL;
    this->EffectDeltaCurve = NULL;
    this->ParticleSystemId = 0;
    this->AttachComponent = NULL;
}

