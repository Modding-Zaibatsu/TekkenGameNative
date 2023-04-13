#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BowlAGameStateNewStateDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "TkBowlAGameStateComponent.generated.h"

class UObject;
class UTkBowlAGameState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlAGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkBowlAGameState* game_state_;
    
public:
    UTkBowlAGameStateComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool IsInState(UClass* state_class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    UTkBowlAGameState* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlAGameState* CreateState(UObject* Outer, UClass* state_class);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlAGameState* ChangeStateClassWithCallback(UClass* state_class, FBowlAGameStateNewStateDelegate cb_post_new_state);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlAGameState* ChangeStateClass(UClass* state_class);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool ChangeState(UTkBowlAGameState* State);
    
};

