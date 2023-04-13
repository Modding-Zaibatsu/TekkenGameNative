#include "TekkenGameModule.h"
#include "TkBowlAGame.h"
#include "TkBowlAGameStateComponent.h"


ATkBowlAGame::ATkBowlAGame() {
    this->AGameStateComponent = CreateDefaultSubobject<UTkBowlAGameStateComponent>(TEXT("AGameStateComponent"));
}

