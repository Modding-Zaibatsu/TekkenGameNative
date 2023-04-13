#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NeoFurPhysicsParameters.h"
#include "Components/PrimitiveComponent.h"
#include "NeoFurComponent.generated.h"

class UBodySetup;
class UMaterialInterface;
class UNeoFurAsset;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNeoFurComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeoFurAsset* FurAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShellCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShellDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODEndDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODMinimumShellCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleLengthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShellOffsetTextureCoordinateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNeoFurPhysicsParameters FurPhysicsParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveShellCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCPUSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveShellCount;
    
    UNeoFurComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetVisibleLengthScale(float NewVisibleLengthScale);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetShellDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetShellCount(int32 NewShellCount);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetFurPhysicsParameters(const FNeoFurPhysicsParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetFurAsset(UNeoFurAsset* NewFurAsset);
    
    UFUNCTION(BlueprintCallable, Category="Other", meta=(WorldContext="WorldContextObject"))
    static int32 GetTotalActiveShellCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    FNeoFurPhysicsParameters GetFurPhysicsParameters() const;
    
};

