#include "TekkenGameModule.h"
#include "TekkenPlayer.h"

class ATekkenCharacterEffectManager;
class ATekkenCharacterSoundManager;

void ATekkenPlayer::SetSoundManager(ATekkenCharacterSoundManager* SoundManager) {
}

void ATekkenPlayer::SetEffectManager(ATekkenCharacterEffectManager* EffectManager) {
}

ATekkenCharacterSoundManager* ATekkenPlayer::GetSoundManager() {
    return NULL;
}

float ATekkenPlayer::GetPlayerControlYaw() {
    return 0.0f;
}

ATekkenCharacterEffectManager* ATekkenPlayer::GetEffectManager() {
    return NULL;
}

ATekkenPlayer::ATekkenPlayer() {
    this->PlayerNumber = 0;
}

