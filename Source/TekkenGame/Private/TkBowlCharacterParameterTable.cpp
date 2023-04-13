#include "TekkenGameModule.h"
#include "TkBowlCharacterParameterTable.h"

TEnumAsByte<ETKBowlCharacterParamRanking> UTkBowlCharacterParameterTable::GetSpinRank(TEnumAsByte<FighterId> Fighter) {
    return TkBowl_CharacterParamRank_SPlus;
}

float UTkBowlCharacterParameterTable::GetPowerShootThreshold(TEnumAsByte<FighterId> Fighter) {
    return 0.0f;
}

TEnumAsByte<ETKBowlCharacterParamRanking> UTkBowlCharacterParameterTable::GetPowerRank(TEnumAsByte<FighterId> Fighter) {
    return TkBowl_CharacterParamRank_SPlus;
}

FTkBowlCharacterBowlParam UTkBowlCharacterParameterTable::GetCharacterBowlParams(TEnumAsByte<FighterId> Fighter) {
    return FTkBowlCharacterBowlParam{};
}

UTkBowlCharacterParameterTable::UTkBowlCharacterParameterTable() {
}

