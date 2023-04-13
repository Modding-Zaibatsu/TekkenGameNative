#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MissileInfo.h"
#include "MissileInstanceInfo.h"
#include "Components/ActorComponent.h"
#include "MissileManagerComponent.generated.h"

class ATekkenCharacterMissile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMissileManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissileInfo> MissileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMissileCount;
    
    UMissileManagerComponent();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UpdateMissileInfo(int32 MissileHandle, FVector CurrentLocation, FVector CurrentDirection);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 SpawnMissileRequest(int32 MissileHandle, int32 MissileEffectID, FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    ATekkenCharacterMissile* GetSpawnedMissile(int32 MissileHandle);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FMissileInstanceInfo GetMissileInstanceInfo(int32 MissileHandle);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 CancelMissileRequest(int32 MissileHandle);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CancelAllMissiles();
    
};

