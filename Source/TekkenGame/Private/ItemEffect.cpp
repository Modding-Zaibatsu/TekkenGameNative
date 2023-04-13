#include "TekkenGameModule.h"
#include "ItemEffect.h"

FItemEffect::FItemEffect() {
    this->ItemEffect = NULL;
    this->ItemEffectID = 0;
    this->EffectLocation = Item_Self;
    this->PlayerSocketPosition = Head_Socket;
}

