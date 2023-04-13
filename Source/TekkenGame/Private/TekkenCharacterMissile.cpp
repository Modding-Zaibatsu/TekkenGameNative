#include "TekkenGameModule.h"
#include "TekkenCharacterMissile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

void ATekkenCharacterMissile::TerminateMissile() {
}

void ATekkenCharacterMissile::SetNextEffectQueued(TEnumAsByte<EMissileHitType> EffectType) {
}

void ATekkenCharacterMissile::PlaySound(TEnumAsByte<EMissileSoundEventType> EventType) {
}

void ATekkenCharacterMissile::MissileHit(const FVector SpawnLocation, FRotator SpawnRotation, FHitResult HitResult, TEnumAsByte<EMissileHitType> HitType) {
}

TEnumAsByte<EMissileHitType> ATekkenCharacterMissile::GetNextEffectQueued() {
    return MissileHitTypeEffect_Unassigned;
}

ATekkenCharacterMissile::ATekkenCharacterMissile() {
    this->Handle = 0;
    this->ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->NextEffectQueued = MissileHitTypeEffect_Unassigned;
    this->MissileHitEffectTemplate = NULL;
}

