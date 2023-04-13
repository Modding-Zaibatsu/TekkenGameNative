#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ETekkenVRHUDType.h"
#include "GameFramework/Actor.h"
#include "TekkenVR.generated.h"

class APawn;
class ATekkenVR;

UCLASS(Blueprintable)
class ATekkenVR : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollideFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VRViewerDbg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* ParentPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewerCharacterBodyScale;
    
    ATekkenVR();
    UFUNCTION(BlueprintCallable, Category="Other")
    static void setHudType(TEnumAsByte<ETekkenVRHUDType> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsPS4NeoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool IsPS4Neo4KMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static bool getPlayerCustomized(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static ATekkenVR* getInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    static TEnumAsByte<ETekkenVRHUDType> getHudType();
    
};

