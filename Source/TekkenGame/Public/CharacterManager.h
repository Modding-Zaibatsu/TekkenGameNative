#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharacterAsyncLoadDynamicDelegateDelegate.h"
#include "CharacterItemEditor.h"
#include "ECostumeType.h"
#include "GameFramework/Actor.h"
#include "CharacterManager.generated.h"

class APostProcessVolume;
class ATekkenCharacterLoadHelper;
class UCharacterItemSet;
class UObject;

UCLASS(Blueprintable)
class ACharacterManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAsyncLoadComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAsyncLoadCanceled;
    
    ACharacterManager();
    UFUNCTION(BlueprintCallable, Category="Other")
    void UnloadAsyncLoadItemSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetCustomizeVisible(const TArray<FString>& names, bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetCustomizeOutline(APostProcessVolume* ppv, float Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetCustomizeBlur(APostProcessVolume* ppv, float Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void SetAsyncLoadItemSet(UCharacterItemSet* item_set, int32 fighter_id, int32 player_number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReceiveEquipItemPostCharacterLoad(UObject* Item, int32 PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReceiveCharactersBeginUnload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReceiveCharactersBeginReinitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void ReceiveCharactersBeginLoad(int32 itemSetNumber);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PreAsynLoadCustomizeDataSetup();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void PostAsynLoadCustomizeDataTerminate();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemSet* LoadItemSetFromXML(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemSet* LoadItemSetFromCustomizeData(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FString GetUniqueCostumePath(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    int32 GetPlayerSide();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ECostumeType> GetDesiredCostumeType(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Category="Other")
    ATekkenCharacterLoadHelper* GetCharacterLoadHelper();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemSet* Find2PColorItemSet(UCharacterItemSet* Player1ItemSet);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UCharacterItemSet* FillItemSet(UCharacterItemSet* DefaultSet, UCharacterItemSet* CustomizedSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void CleanUpCharacterSpawnedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Other")
    void CallClearOldData();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    void AsyncLoadItemSetFromCustomizeData(int32 selectedSetIndex, TEnumAsByte<CharacterItemEditor::Type> FighterId, int32 PlayerID, FCharacterAsyncLoadDynamicDelegate Delegate);
    
};

