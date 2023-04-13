#pragma once
#include "GameFramework/Pawn.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "TekkenPlayer.generated.h"

class ATekkenCharacterEffectManager;
class ATekkenCharacterSoundManager;

UCLASS(Blueprintable)
class ATekkenPlayer : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControlLocation;
    
    ATekkenPlayer();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetSoundManager(ATekkenCharacterSoundManager* SoundManager);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetEffectManager(ATekkenCharacterEffectManager* EffectManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    ATekkenCharacterSoundManager* GetSoundManager();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    float GetPlayerControlYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    ATekkenCharacterEffectManager* GetEffectManager();
    
};

