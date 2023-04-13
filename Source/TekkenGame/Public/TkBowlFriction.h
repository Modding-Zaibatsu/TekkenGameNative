#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TkBowlFriction.generated.h"

class UBoxComponent;
class UPhysicalMaterial;
class UStaticMeshComponent;
class UTexture2D;
class UTkBowlFrictionData;

UCLASS(Blueprintable)
class ATkBowlFriction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFriction;
    
    ATkBowlFriction();
    UFUNCTION(BlueprintCallable, Category="Other")
    float UpdateFriction(FVector Location);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTexture(UTexture2D* SourceTexture);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTargetPhysicalMaterial(UPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetFrictionData(UTkBowlFrictionData* pData);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetArea(UBoxComponent* Box);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void EnableUpdateFriction(UStaticMeshComponent* Bowl, bool enable);
    
};

