#include "TekkenGameModule.h"
#include "TkBowlCharacter.h"
#include "TkBowlCharacterSequenceComponent.h"
#include "TkBowlCharacterStateComponent.h"

class UObject;
class USceneComponent;

void ATkBowlCharacter::SwitchHand() {
}


void ATkBowlCharacter::SetPlayerNo(int32 player_no) {
}



void ATkBowlCharacter::SetCharacterInfo(const FTkBowlCharacterLoadParam& LoadedInfo) {
}



void ATkBowlCharacter::SetBowlParameters(const FTkBowlCharacterBowlParam& BowlParameters) {
}














bool ATkBowlCharacter::IsSlotAnimPlaying(FName SlotNodeName) {
    return false;
}

bool ATkBowlCharacter::IsPlayerState(UClass* State) const {
    return false;
}

UObject* ATkBowlCharacter::GetPlayerState() const {
    return NULL;
}

int32 ATkBowlCharacter::GetPlayerNo() const {
    return 0;
}

FVector ATkBowlCharacter::GetLocationOfComponent(USceneComponent* Component, const FVector& world_location) {
    return FVector{};
}

FVector ATkBowlCharacter::GetLocalLocation(const FVector& world_location) {
    return FVector{};
}

TEnumAsByte<FighterId> ATkBowlCharacter::GetFighterId() {
    return ID_PAU;
}

FTkBowlCharacterBowlParam ATkBowlCharacter::GetBowlParameters() {
    return FTkBowlCharacterBowlParam{};
}

bool ATkBowlCharacter::ChangePlayerState(UObject* State) {
    return false;
}

void ATkBowlCharacter::AddCurrentFrameHistory() {
}

ATkBowlCharacter::ATkBowlCharacter() {
    this->SequenceComponent = CreateDefaultSubobject<UTkBowlCharacterSequenceComponent>(TEXT("SequenceComponent"));
    this->CharacterStateComponent = CreateDefaultSubobject<UTkBowlCharacterStateComponent>(TEXT("CharacterStateComponent"));
    this->bUsingRightHand = true;
    this->player_state_ = NULL;
    this->player_no_ = 0;
}

