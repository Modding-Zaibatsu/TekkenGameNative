#include "TekkenGameModule.h"
#include "TkBowlAGameStateComponent.h"

class UObject;
class UTkBowlAGameState;

bool UTkBowlAGameStateComponent::IsInState(UClass* state_class) const {
    return false;
}

UTkBowlAGameState* UTkBowlAGameStateComponent::GetCurrentState() const {
    return NULL;
}

UTkBowlAGameState* UTkBowlAGameStateComponent::CreateState(UObject* Outer, UClass* state_class) {
    return NULL;
}

UTkBowlAGameState* UTkBowlAGameStateComponent::ChangeStateClassWithCallback(UClass* state_class, FBowlAGameStateNewStateDelegate cb_post_new_state) {
    return NULL;
}

UTkBowlAGameState* UTkBowlAGameStateComponent::ChangeStateClass(UClass* state_class) {
    return NULL;
}

bool UTkBowlAGameStateComponent::ChangeState(UTkBowlAGameState* State) {
    return false;
}

UTkBowlAGameStateComponent::UTkBowlAGameStateComponent() {
    this->game_state_ = NULL;
}

