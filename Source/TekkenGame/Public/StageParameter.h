#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterPostEffectParameter.h"
#include "GameFramework/Actor.h"
#include "StageParameter.generated.h"

class UMRZMaterialComponent;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class AStageParameter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelColorNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelExponentNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelIntensityNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelDirectivityNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelDirectivitySharpnessNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FresnelDirectivitySuppressionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ArmorWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ExArtsWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PowerModeWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RageAttackWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> NeoAkumaWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMRZMaterialComponent* MRZMaterialComponent;
    
    AStageParameter();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    TArray<int32> GetStageSequenceIDsNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetRageNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetRageAttackNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetPowerModeNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetNeoAkumaNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetMrzNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetKZMTigerNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetExArtsNative(bool isMry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetCharacterPostEffectNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetBS7TigerNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    FCharacterPostEffectParameter GetArmorNative() const;
    
};

