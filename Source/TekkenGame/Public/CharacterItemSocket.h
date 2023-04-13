#pragma once

//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CharacterItemEditor.h"
#include "EnumAsByte.h"
#include "ItemSlotPosition.h"
#include "TKCharacterSocketItemType.h"
#include "UnrealString.h"
#include "UObject.h"
#include "CharacterItemSocket.generated.h"

class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class TEKKENGAME_API UCharacterItemSocket : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<CharacterItemEditor::Type> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TKCharacterSocketItemType> SocketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SourceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SourceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ItemSlotPosition> ItemPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbilityItem;
    
    UCharacterItemSocket();
    UFUNCTION(BlueprintCallable, Category="Other")
    bool InitCharacterItemSocket(const FString& _InstanceName, TEnumAsByte<CharacterItemEditor::Type> _Character, TEnumAsByte<ItemSlotPosition> _ItemPosition, bool _bIsAbilityItem, UStaticMesh* _SourceStaticMesh, USkeletalMesh* _SourceSkeletalMesh);
    
    UFUNCTION(BlueprintCallable, Category="Other")
    UStaticMesh* GetStaticMesh();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    USkeletalMesh* GetSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    TEnumAsByte<ItemSlotPosition> GetItemPosition();
    
    UFUNCTION(BlueprintCallable, Category="Other")
    FTransform GetItemOffsets();
    
};

