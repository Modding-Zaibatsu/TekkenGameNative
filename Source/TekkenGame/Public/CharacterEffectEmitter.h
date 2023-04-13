#pragma once
#include "Particles/Emitter.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Emitter -FallbackName=Emitter
#include "CharacterEffectEmitter.generated.h"

UCLASS(Blueprintable)
class ACharacterEffectEmitter : public AEmitter {
    GENERATED_BODY()
public:
    ACharacterEffectEmitter();
};

