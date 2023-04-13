#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TekkenBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class TEKKENGAME_API UTekkenBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTekkenBPFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector GetSafeNormal2D(FVector In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float GetHeading2D(const FVector& InVector, const FVector& FrontVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector FlattenVector(FVector In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static float CalcDirectionalScalarFromFrontVec(FVector InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static FVector AbsVector(const FVector& InVector);
    
};

