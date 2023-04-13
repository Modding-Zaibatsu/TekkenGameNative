#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FighterId.h"
#include "Components/ActorComponent.h"
#include "DramaDataLoader.generated.h"

class AActor;
class UDramaDOFCurve;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDramaDataLoader : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadFinished;
    
    UDramaDataLoader();
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetUp();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void RequestAsyncLoad(int32 player_id, TEnumAsByte<FighterId> fighter_id);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void RemoveData();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void RemoveBP(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    AActor* GetDramaBP(const FString& DramaName);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UDramaDOFCurve* GetCurveData(const FString& DramaName);
    
};

