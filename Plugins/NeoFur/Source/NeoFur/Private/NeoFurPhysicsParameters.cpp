#include "NeoFurModule.h"
#include "NeoFurPhysicsParameters.h"

FNeoFurPhysicsParameters::FNeoFurPhysicsParameters() {
    this->VelocityInfluence = 0;
    this->SpringLengthStiffness = 0;
    this->SpringAngleStiffness = 0;
    this->SpringDampeningMultiplier = 0;
    this->GravityInfluence = 0;
    this->AirResistanceMultiplier = 0;
    this->MaxStretchDistanceMultiplier = 0;
    this->MaxRotationFromNormal = 0;
    this->RadialForceInfluence = 0;
    this->WindInfluence = 0;
    this->Bendiness = 0;
    this->NormalDirectionBlend = 0;
}

