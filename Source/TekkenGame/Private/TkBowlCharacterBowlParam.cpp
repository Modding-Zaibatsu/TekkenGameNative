#include "TekkenGameModule.h"
#include "TkBowlCharacterBowlParam.h"

FTkBowlCharacterBowlParam::FTkBowlCharacterBowlParam() {
    this->Fighter = ID_PAU;
    this->DominantHand = TkBowl_DominantHand_RightHand;
    this->SpinRange_Min = 0;
    this->SpinRange_Max = 0;
    this->Spin_Modifier = 0;
    this->SpinGauge_Speed = 0;
    this->SpinRank = TkBowl_CharacterParamRank_SPlus;
    this->BallThrowPower_Amplitude = 0;
    this->BallThrowPower_Base = 0;
    this->BallThrowGauge_Speed = 0;
    this->PowerRank = TkBowl_CharacterParamRank_SPlus;
    this->ThrowMovementSpeed = 0;
    this->ThrowLineScale = 0;
    this->Overcharge_Chance = 0;
    this->Striker_BallCount = 0;
    this->Striker_BallSpawnTime = 0;
}

