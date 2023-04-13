#include "TekkenGameModule.h"
#include "NetStorageFunctionLibrary.h"

class UNetTitleStorageRequest;
class UNetUserStorageRequest;

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::UploadToVirtualUserStorage(UNetUserStorageRequest* request, int32 vuser_type, int32 slot_no, int32 incremental_num) {
    return ENetStorageErrorCode::Error;
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::UploadToUserStorage(UNetUserStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

void UNetStorageFunctionLibrary::TickNetDebug(float DeltaTime) {
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::MakeByUserStorageDownloadedData(UNetUserStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::MakeByTitleStorageDownloadedData(UNetTitleStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

bool UNetStorageFunctionLibrary::IsUserStorageProcessing(UNetUserStorageRequest* request) {
    return false;
}

bool UNetStorageFunctionLibrary::IsTitleStorageProcessing(UNetTitleStorageRequest* request) {
    return false;
}

void UNetStorageFunctionLibrary::InitializeNetDebug() {
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::GetUserStorageErrorCode(UNetUserStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

FString UNetStorageFunctionLibrary::GetUserStorageDebugInfo(UNetUserStorageRequest* request) {
    return TEXT("");
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::GetTitleStorageErrorCode(UNetTitleStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

FString UNetStorageFunctionLibrary::GetTitleStorageDebugInfo(UNetTitleStorageRequest* request) {
    return TEXT("");
}

void UNetStorageFunctionLibrary::FinalizeNetDebug() {
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::DownloadFromVirtualUserStorage(UNetUserStorageRequest* request, int32 vuser_type, int32 slot_range) {
    return ENetStorageErrorCode::Error;
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::DownloadFromUserStorage(UNetUserStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::DownloadFromTitleStorage(UNetTitleStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

UNetUserStorageRequest* UNetStorageFunctionLibrary::CreateUserStorageRequest(TSubclassOf<UNetUserStorageRequest> RequestClasses) {
    return NULL;
}

UNetTitleStorageRequest* UNetStorageFunctionLibrary::CreateTitleStorageRequest(TSubclassOf<UNetTitleStorageRequest> RequestClasses) {
    return NULL;
}

TEnumAsByte<ENetStorageErrorCode> UNetStorageFunctionLibrary::CancelUserStorageRequest(UNetUserStorageRequest* request) {
    return ENetStorageErrorCode::Error;
}

UNetStorageFunctionLibrary::UNetStorageFunctionLibrary() {
}

