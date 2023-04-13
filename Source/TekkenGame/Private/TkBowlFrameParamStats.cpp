#include "TekkenGameModule.h"
#include "TkBowlFrameParamStats.h"

FTkBowlFrameParamStats::FTkBowlFrameParamStats() {
    this->FrameNum = 0;
    this->TryNum = 0;
    this->BallPower = 0;
    this->BallSpin = 0;
    this->CharacterYaw = 0;
    this->CharacterAxisX = 0;
    this->ThrownBallAxisX = 0;
    this->BallSpawnAxisX = 0;
    this->BallSpawnAxisY = 0;
    this->BallSpawnAxisZ = 0;
    this->BallSpawnYaw = 0;
}

