#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ENetStorageErrorCode.h"
#include "EnumAsByte.h"
#include "ObjectBase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NetStorageFunctionLibrary.generated.h"

class UNetTitleStorageRequest;
class UNetUserStorageRequest;

UCLASS(Blueprintable)
class TEKKENGAME_API UNetStorageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetStorageFunctionLibrary();
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> UploadToVirtualUserStorage(UNetUserStorageRequest* request, int32 vuser_type, int32 slot_no, int32 incremental_num);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> UploadToUserStorage(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void TickNetDebug(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> MakeByUserStorageDownloadedData(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> MakeByTitleStorageDownloadedData(UNetTitleStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsUserStorageProcessing(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static bool IsTitleStorageProcessing(UNetTitleStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void InitializeNetDebug();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> GetUserStorageErrorCode(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FString GetUserStorageDebugInfo(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> GetTitleStorageErrorCode(UNetTitleStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static FString GetTitleStorageDebugInfo(UNetTitleStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static void FinalizeNetDebug();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> DownloadFromVirtualUserStorage(UNetUserStorageRequest* request, int32 vuser_type, int32 slot_range);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> DownloadFromUserStorage(UNetUserStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> DownloadFromTitleStorage(UNetTitleStorageRequest* request);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UNetUserStorageRequest* CreateUserStorageRequest(TSubclassOf<UNetUserStorageRequest> RequestClasses);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static UNetTitleStorageRequest* CreateTitleStorageRequest(TSubclassOf<UNetTitleStorageRequest> RequestClasses);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    static TEnumAsByte<ENetStorageErrorCode> CancelUserStorageRequest(UNetUserStorageRequest* request);
    
};

