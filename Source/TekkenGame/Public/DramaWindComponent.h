#pragma once
#include "Components/ActorComponent.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DramaWindComponent.generated.h"

class UObject;
class UWindDirectionalSourceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDramaWindComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDramaWindComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetWindParam(float Strength, float Speed, float MinGustAmount, float MaxGustAmount);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetStrength(float val);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetSpeed(float val);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMinGustAmount(float val);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetMaxGustAmount(float val);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    UWindDirectionalSourceComponent* GetWindComponent() const;
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    void DestroyWindDirectionalSource(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    void CreateWindDirectionalSource(UObject* WorldContextObject, bool StartAndEnable);
    
};

