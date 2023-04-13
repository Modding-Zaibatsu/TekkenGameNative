#pragma once
#include "Components/ActorComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MRZMaterialComponent.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMRZMaterialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BaseAlphaNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EmissiveAlphaNames;
    
    UMRZMaterialComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnChangeFresnelWeight(int32 PlayerNumber, float TargetValue, float TimeSeconds);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnChangeFresnelExponentScale(int32 PlayerNumber, float TargetValue, float TimeSeconds);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnChangeEmissiveAlpha(int32 PlayerNumber, float TargetValue, float TimeSeconds);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void OnChangeBaseAlpha(int32 PlayerNumber, float TargetValue, float TimeSeconds);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void Initialize();
    
};

