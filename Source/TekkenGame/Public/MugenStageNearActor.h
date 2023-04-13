#pragma once
#include "GameFramework/Actor.h"

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MugenStageNearActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class AMugenStageNearActor : public AActor {
    GENERATED_BODY()
public:
    AMugenStageNearActor();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTileNum(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetTileLocation(UObject* pObj, FVector Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetSize(float X, float Y);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetRadiusOfNearFloor(float R);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetCenterPos(FVector centerPos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void MySetLocation2(TArray<UObject*> tiles);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool IsOutOfBounds(FVector Pos);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CalcTileOffset();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FVector CalcRelativePos(int32 Index, float Z);
    
};

