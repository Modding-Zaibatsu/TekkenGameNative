#include "TekkenGameModule.h"
#include "TkBowlCharacterSequenceInfo.h"

FTkBowlCharacterSequenceInfo::FTkBowlCharacterSequenceInfo() {
    this->SequenceType = TkBowl_CharacterEmote_Success;
    this->CameraType = TkBowl_SequenceCameraType_LevelSequence;
    this->LevelSequence = NULL;
    this->LevelSequence_LeftHand = NULL;
    this->bUniqueToCharacter = false;
}

