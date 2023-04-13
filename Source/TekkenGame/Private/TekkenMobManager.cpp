#include "TekkenGameModule.h"
#include "TekkenMobManager.h"

class ATekkenMobActor;
class ATekkenWallActor;

void ATekkenMobManager::MapMobWallDependencies(TArray<ATekkenMobActor*> StageMobs) {
}

TArray<ATekkenMobActor*> ATekkenMobManager::GetWallDependentMobActors(ATekkenWallActor* Wall) {
    return TArray<ATekkenMobActor*>();
}

ATekkenMobManager::ATekkenMobManager() {
}

