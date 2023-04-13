#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BowlCharacterStateNewStateDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "TkBowlCharacterStateComponent.generated.h"

class UTkBowlCharacterState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEKKENGAME_API UTkBowlCharacterStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTkBowlCharacterState* character_state_;
    
public:
    UTkBowlCharacterStateComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    bool IsInState(UClass* state_class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    UTkBowlCharacterState* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlCharacterState* ChangeStateClassWithCallback(UClass* state_class, FBowlCharacterStateNewStateDelegate cb_post_new_state);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlCharacterState* ChangeStateClass(UClass* state_class);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlCharacterState* ChangePlayerStateClassWithCallback(UClass* state_class, FBowlCharacterStateNewStateDelegate cb_post_new_state);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UTkBowlCharacterState* ChangePlayerStateClass(UClass* state_class);
    
};

