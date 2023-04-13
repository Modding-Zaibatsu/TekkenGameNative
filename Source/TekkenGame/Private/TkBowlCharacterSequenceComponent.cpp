#include "TekkenGameModule.h"
#include "TkBowlCharacterSequenceComponent.h"

class ULevelSequencePlayer;

void UTkBowlCharacterSequenceComponent::StopSequence() {
}

bool UTkBowlCharacterSequenceComponent::PrepareSequence(FName MontageSectionLabel, TEnumAsByte<ETKBowlCharacterSequenceAllowance> Allowance, TEnumAsByte<ETKBowlCharacterSequenceType> SequenceType) {
    return false;
}

ULevelSequencePlayer* UTkBowlCharacterSequenceComponent::PlayPreparedSequence() {
    return NULL;
}

bool UTkBowlCharacterSequenceComponent::IsSequenceUnique() {
    return false;
}

FName UTkBowlCharacterSequenceComponent::GetSequenceMontageSection() {
    return NAME_None;
}

TArray<FName> UTkBowlCharacterSequenceComponent::GetAllSequenceMontageSections(TEnumAsByte<ETKBowlCharacterSequenceType> SequenceType, TEnumAsByte<ETKBowlCharacterSequenceAllowance> Allowance) {
    return TArray<FName>();
}

UTkBowlCharacterSequenceComponent::UTkBowlCharacterSequenceComponent() {
    this->PreparedCameraType = TkBowl_SequenceCameraType_LevelSequence;
}

