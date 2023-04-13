#include "TekkenGameModule.h"
#include "CustomizeCharacterManager.h"

class UCharacterItem;
class UCharacterItemSet;
class UCharacterItemVariation;
class UCustomizeCharacterItem;

FString ACustomizeCharacterManager::StringToLower(const FString& inString) {
    return TEXT("");
}

void ACustomizeCharacterManager::ShowEquippedItemNames(bool bShow) {
}

void ACustomizeCharacterManager::ShowColorIndexDebugHelp(bool bShow) {
}

void ACustomizeCharacterManager::SetLoadEvent(TEnumAsByte<EAssetLoadEvent> LoadEvent, TEnumAsByte<EAssetLoadEvent> NewValue) {
}

void ACustomizeCharacterManager::ScreenshotToLocation(const FString& FilePath) {
}

void ACustomizeCharacterManager::ResetExtraItems() {
}

TEnumAsByte<CCItemRequestResult> ACustomizeCharacterManager::RequestNextItem() {
    return ITEM_FOUND;
}

TEnumAsByte<CCItemRequestResult> ACustomizeCharacterManager::RequestCharacterItem(TEnumAsByte<ItemSlotPosition> Cat, int32 Index) {
    return ITEM_FOUND;
}

bool ACustomizeCharacterManager::RecursiveItemCall() {
    return false;
}

bool ACustomizeCharacterManager::RecursiveItemBackCall() {
    return false;
}

bool ACustomizeCharacterManager::PreviousItemCall(bool fauxFlag) {
    return false;
}

bool ACustomizeCharacterManager::NextItemCall(bool fauxFlag) {
    return false;
}

bool ACustomizeCharacterManager::NeedsHeadCamera() {
    return false;
}

UCharacterItemSet* ACustomizeCharacterManager::LoadCostumeSet(TEnumAsByte<EDebugCostumeType> Costume) {
    return NULL;
}

void ACustomizeCharacterManager::LoadCCIAssetsFromFile(const FString& FilePath, const FString& LoadErrorFile, TEnumAsByte<ECustomizeCharacterManager::Type> TekkenCharacter, const int32 itemNameIndex, const int32 expDependencyIndex, bool bLoadOnlyUnique) {
}

void ACustomizeCharacterManager::LoadAllCCIAssets(const FString& LoadErrorFile, TEnumAsByte<ECustomizeCharacterManager::Type> TekkenCharacter, bool bLoadOnlyUnique) {
}

bool ACustomizeCharacterManager::InitializeColorIndices(UCustomizeCharacterItem* CCI, TArray<FColorCustomizeGUI>& CustomizeColors, TArray<FLinearColor>& IndexColors) {
    return false;
}

void ACustomizeCharacterManager::InitializeColorDebugLog(const FString& DebugLogFile) {
}

bool ACustomizeCharacterManager::IncrementItemList() {
    return false;
}

FString ACustomizeCharacterManager::GetNewItemSetPath() {
    return TEXT("");
}

FString ACustomizeCharacterManager::GetNewItemSetName() {
    return TEXT("");
}

int32 ACustomizeCharacterManager::GetLoadedCCICategoryAssetSize(TEnumAsByte<ItemSlotPosition> Pos) {
    return 0;
}

FString ACustomizeCharacterManager::GetItemThumbnailName() {
    return TEXT("");
}

FString ACustomizeCharacterManager::GetItemPosAsString(FThumbnailSettings ThumbSettings) {
    return TEXT("");
}

FLinearColor ACustomizeCharacterManager::GetIndexLinearColor(const TArray<FColorCustomizeGUI>& CustomizeColors, const TArray<FLinearColor>& IndexColors, int32 miIndex, FName ParameterName) {
    return FLinearColor{};
}

FString ACustomizeCharacterManager::GetDateTime() {
    return TEXT("");
}

FString ACustomizeCharacterManager::GenerateNewItemOffsetVariationName(UCharacterItem* TargetBaseItem, FItemOffsetVariationsGUI VariationData, bool InnerPath) {
    return TEXT("");
}

UCustomizeCharacterItem* ACustomizeCharacterManager::FindReferencedCCI(UCharacterItem* CharacterItem) {
    return NULL;
}

UCharacterItemVariation* ACustomizeCharacterManager::FindItemVariation(UCharacterItem* CharacterItem) {
    return NULL;
}

void ACustomizeCharacterManager::EquipItemSet(UCharacterItemSet* ItemSet) {
}

void ACustomizeCharacterManager::DisplayItemDebugMode(TEnumAsByte<ItemDebugModes> currentMode) {
}

bool ACustomizeCharacterManager::DecrementItemList() {
    return false;
}

void ACustomizeCharacterManager::ClearEquippedItems() {
}

void ACustomizeCharacterManager::BuildNewCostumeSet(UCharacterItemSet* ItemSet) {
}

ACustomizeCharacterManager::ACustomizeCharacterManager() {
    this->SendToGame = false;
    this->LocalCharItemSet = NULL;
    this->LocalExtraItemSet = NULL;
    this->MakeItemSetType = TypeTreasureBattle;
    this->FaceCustomizeItem = NULL;
    this->EnableFaceCustomize = false;
    this->FaceColorIndex.AddDefaulted(5);
    this->HeadCustomizeItem = NULL;
    this->EnableHeadCustomize = false;
    this->HeadColorIndex.AddDefaulted(5);
    this->FaceHairCustomizeItem = NULL;
    this->EnableFaceHairCustomize = false;
    this->FaceHairColorIndex.AddDefaulted(5);
    this->HairCustomizeItem = NULL;
    this->EnableHairCustomize = false;
    this->HairColorIndex.AddDefaulted(5);
    this->FullHeadCustomizeItem = NULL;
    this->EnableFullHeadCustomize = false;
    this->FullHeadColorIndex.AddDefaulted(5);
    this->UpperCustomizeItem = NULL;
    this->EnableUpperCustomize = false;
    this->UpperColorIndex.AddDefaulted(5);
    this->LowerCustomizeItem = NULL;
    this->EnableLowerCustomize = false;
    this->LowerColorIndex.AddDefaulted(5);
    this->FullBodyCustomizeItem = NULL;
    this->EnableFullBodyCustomize = false;
    this->FullBodyColorIndex.AddDefaulted(5);
    this->HairAccessoryCustomizeItem = NULL;
    this->EnableHairAccessoryCustomize = false;
    this->HairAccessoryColorIndex.AddDefaulted(5);
    this->bRefreshHairAccessoryItem = true;
    this->GlassesCustomizeItem = NULL;
    this->EnableGlassesCustomize = false;
    this->GlassesColorIndex.AddDefaulted(5);
    this->bRefreshGlassesItem = true;
    this->UpperAccessoryCustomizeItem = NULL;
    this->EnableUpperAccessoryCustomize = false;
    this->UpperAccessoryColorIndex.AddDefaulted(5);
    this->bRefreshUpperAccessoryItem = true;
    this->LowerAccessoryCustomizeItem = NULL;
    this->EnableLowerAccessoryCustomize = false;
    this->LowerAccessoryColorIndex.AddDefaulted(5);
    this->bRefreshLowerAccessoryItem = true;
    this->MakeUpItem = NULL;
    this->ExtraItem_1 = NULL;
    this->EnableExtraParts_1_Customize = false;
    this->ExtraItem_1_ColorIndex.AddDefaulted(5);
    this->bRefreshExtraItem_1 = true;
    this->ExtraItem_2 = NULL;
    this->EnableExtraParts_2_Customize = false;
    this->ExtraItem_2_ColorIndex.AddDefaulted(5);
    this->bRefreshExtraItem_2 = true;
    this->ExtraItem_3 = NULL;
    this->EnableExtraParts_3_Customize = false;
    this->ExtraItem_3_ColorIndex.AddDefaulted(5);
    this->bRefreshExtraItem_3 = true;
    this->ExtraItem_4 = NULL;
    this->EnableExtraParts_4_Customize = false;
    this->ExtraItem_4_ColorIndex.AddDefaulted(5);
    this->bRefreshExtraItem_4 = true;
    this->ExtraItem_5 = NULL;
    this->EnableExtraParts_5_Customize = false;
    this->ExtraItem_5_ColorIndex.AddDefaulted(5);
    this->bRefreshExtraItem_5 = true;
    this->FaceLoadEvent = Load;
    this->HeadLoadEvent = Load;
    this->FaceHairLoadEvent = Load;
    this->HairLoadEvent = Load;
    this->FullHeadLoadEvent = Load;
    this->UpperLoadEvent = Load;
    this->LowerLoadEvent = Load;
    this->FullBodyLoadEvent = Load;
    this->HairAccessoryLoadEvent = Load;
    this->GlassesLoadEvent = Load;
    this->UpperAccessoryLoadEvent = Load;
    this->LowerAccessoryLoadEvent = Load;
    this->ExtraItemLoadEvent_1 = Load;
    this->ExtraItemLoadEvent_2 = Load;
    this->ExtraItemLoadEvent_3 = Load;
    this->ExtraItemLoadEvent_4 = Load;
    this->ExtraItemLoadEvent_5 = Load;
    this->Character = ECustomizeCharacterManager::PAU;
    this->CostumeType = Default;
    this->DebugRank = DEBUG_RANK_NYUMONSEI;
    this->bSkipForcePonytails = false;
    this->bExclusiveLoadReleaseVer = false;
    this->DebugReleaseVer = ItemVersionUnset;
    this->bExcludeItemDuplicates = false;
    this->bHED = false;
    this->bHAR = false;
    this->bBDU = false;
    this->bBDL = false;
    this->bBDF = false;
    this->bGLA = false;
    this->bFAC = false;
    this->bOPH = false;
    this->bOPU = false;
    this->bOPL = false;
    this->bFAH = false;
    this->bFAM = false;
    this->bHEF = false;
    this->bEXP = false;
    this->ColorDebug = false;
    this->ApplySunTan = false;
    this->LoadedItemCatergory = HEAD;
    this->LoadedItemIndex = 0;
    this->ThumbnailPath = Work0;
    this->ThumbnailItemAnimType = PauseFrame;
    this->ThumbnailItemPhysics = false;
    this->ThumbnailBlueprintItemPhysics = false;
    this->ThumbnailTableOverride = NULL;
    this->DefaultItemSet = NULL;
    this->bRefreshDefaultItemSet = true;
    this->LastChangedPosition = UNASSIGNED;
}

