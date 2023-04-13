#include "TekkenGameModule.h"
#include "TkBowlCharacterStateComponent.h"

class UTkBowlCharacterState;

bool UTkBowlCharacterStateComponent::IsInState(UClass* state_class) const {
    return false;
}

UTkBowlCharacterState* UTkBowlCharacterStateComponent::GetCurrentState() const {
    return NULL;
}

UTkBowlCharacterState* UTkBowlCharacterStateComponent::ChangeStateClassWithCallback(UClass* state_class, FBowlCharacterStateNewStateDelegate cb_post_new_state) {
    return NULL;
}

UTkBowlCharacterState* UTkBowlCharacterStateComponent::ChangeStateClass(UClass* state_class) {
    return NULL;
}

UTkBowlCharacterState* UTkBowlCharacterStateComponent::ChangePlayerStateClassWithCallback(UClass* state_class, FBowlCharacterStateNewStateDelegate cb_post_new_state) {
    return NULL;
}

UTkBowlCharacterState* UTkBowlCharacterStateComponent::ChangePlayerStateClass(UClass* state_class) {
    return NULL;
}

UTkBowlCharacterStateComponent::UTkBowlCharacterStateComponent() {
    this->character_state_ = NULL;
}

