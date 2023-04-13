#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECustomizeCharacterManager.h"
#include "EDebugCostumeType.h"
#include "EItemReleaseVer.h"
#include "GameFramework/Actor.h"
#include "ItemPerformanceManager.generated.h"

class ACustomizeCharacterManager;
class UItemManagerComponent;

UCLASS(Blueprintable)
class TEKKENGAME_API AItemPerformanceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizeCharacterManager::Type> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDebugCostumeType> CostumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExclusiveLoadReleaseVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EItemReleaseVer> DebugReleaseVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleUpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleLowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleFullBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleFacialHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleFullHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleGlasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleHairAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleUpperAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleLowerAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleMakeup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSampleAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestAllCombinations;
    
    AItemPerformanceManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void WriteWorstCasesToLog();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void WriteCurrentStatsToLog();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void UpdateLogName();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool UpdateItemStats();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void SetEquippedItemNames(UItemManagerComponent* ItemManagerComponent);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitItemStats();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void InitCCM(ACustomizeCharacterManager* CCM);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void CallRound1();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    bool CalculateItemStats();
    
};

