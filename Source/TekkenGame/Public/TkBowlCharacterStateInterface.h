#pragma once
#include "Interface.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "TkBowlCharacterStateInterface.generated.h"

class ATkBowlCharacter;

UINTERFACE(Blueprintable)
class UTkBowlCharacterStateInterface : public UInterface {
    GENERATED_BODY()
};

class ITkBowlCharacterStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void TickState(ATkBowlCharacter* Character, float delta_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputAxisMoveRight(ATkBowlCharacter* Character, float axis_value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputAxisMoveForward(ATkBowlCharacter* Character, float axis_value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputAxisLookUp(ATkBowlCharacter* Character, float axis_value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputAxisLookRight(ATkBowlCharacter* Character, float axis_value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputActionSwitchHand(ATkBowlCharacter* Character, bool Pressed, bool released, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputActionSkipMovieScene(ATkBowlCharacter* Character, bool Pressed, bool released, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputActionDetermine(ATkBowlCharacter* Character, bool Pressed, bool released, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputActionDebugThrow(ATkBowlCharacter* Character, bool Pressed, bool released, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void InputActionCancel(ATkBowlCharacter* Character, bool Pressed, bool released, FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void EndState(ATkBowlCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void BeginState(ATkBowlCharacter* Character);
    
};

