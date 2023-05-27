// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "TekkenGameActions.h"

#include "AuraCharacterItem.h"
#include "CharacterExtraItems.h"
#include "CharacterItem.h"
#include "CharacterItemOffsetVariation.h"
#include "CharacterItemSet.h"
#include "CharacterItemSocket.h"
#include "CharacterItemTex.h"
#include "CharacterItemVariation.h"
#include "CustomizeCharacterItem.h"
#include "EffectCharacterItem.h"

#define LOCTEXT_NAMESPACE "TekkenAssetTypeActions"

FColor MainColor = FColor(129, 196, 115);

// AURA CHARACTER ITEM ASSET TYPE

FAuraCharacterItemAssetTypeActions::FAuraCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FAuraCharacterItemAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FAuraCharacterItemAssetTypeActions::GetSupportedClass() const
{
	return UAuraCharacterItem::StaticClass();
}

FText FAuraCharacterItemAssetTypeActions::GetName() const
{
	return LOCTEXT("FAuraCharacterItemAssetTypeActions", "Aura Character Item");
}

FColor FAuraCharacterItemAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FAuraCharacterItemAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CHARACTER EXTRAS ITEMS ASSET TYPE

FCharacterExtraItemsAssetTypeActions::FCharacterExtraItemsAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterExtraItemsAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterExtraItemsAssetTypeActions::GetSupportedClass() const
{
	return UCharacterExtraItems::StaticClass();
}

FText FCharacterExtraItemsAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterExtraItemsAssetTypeActions", "Character Extra Items");
}

FColor FCharacterExtraItemsAssetTypeActions::GetTypeColor() const
{
	return FColor::Orange;
}

uint32 FCharacterExtraItemsAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// AURA CHARACTER ITEM ASSET TYPE

FCharacterItemSocketAssetTypeActions::FCharacterItemSocketAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemSocketAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemSocketAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItemSocket::StaticClass();
}

FText FCharacterItemSocketAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemSocketAssetTypeName", "Character Item Socket");
}

FColor FCharacterItemSocketAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemSocketAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CHARACTER ITEM TEX ASSET TYPE

FCharacterItemTexAssetTypeActions::FCharacterItemTexAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemTexAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemTexAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItemTex::StaticClass();
}

FText FCharacterItemTexAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemTexAssetTypeName", "Character Item Texture");
}

FColor FCharacterItemTexAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemTexAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CHARACTER ITEM TEX ASSET TYPE

FCharacterItemVariationAssetTypeActions::FCharacterItemVariationAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemVariationAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemVariationAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItemVariation::StaticClass();
}

FText FCharacterItemVariationAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemVariationAssetTypeName", "Character Item Variation");
}

FColor FCharacterItemVariationAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemVariationAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CHARACTER ITEM ASSET TYPE

FCharacterItemAssetTypeActions::FCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItem::StaticClass();
}

FText FCharacterItemAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemAssetTypeName", "Character Item");
}

FColor FCharacterItemAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

// CHARACTER ITEM SET ASSET TYPE

FCharacterItemSetAssetTypeActions::FCharacterItemSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemSetAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemSetAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItemSet::StaticClass();
}

FText FCharacterItemSetAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemSetAssetTypeName", "Character Item Set");
}

FColor FCharacterItemSetAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemSetAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CHARACTER ITEM OFFSET VARIATION ASSET TYPE

FCharacterItemOffsetVariationAssetTypeActions::FCharacterItemOffsetVariationAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterItemOffsetVariationAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterItemOffsetVariationAssetTypeActions::GetSupportedClass() const
{
	return UCharacterItemOffsetVariation::StaticClass();
}

FText FCharacterItemOffsetVariationAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterItemOffsetVariationAssetTypeName", "Character Item Offset Variation");
}

FColor FCharacterItemOffsetVariationAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterItemOffsetVariationAssetTypeActions::GetCategories()
{
	return MyAssetCategory;
}

// CUSTOMIZE CHARACTER ITEM ASSET TYPE

FCustomizeCharacterItemAssetTypeActions::FCustomizeCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCustomizeCharacterItemAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCustomizeCharacterItemAssetTypeActions::GetSupportedClass() const
{
	return UCustomizeCharacterItem::StaticClass();
}

FText FCustomizeCharacterItemAssetTypeActions::GetName() const
{
	return LOCTEXT("FCustomizeCharacterItemAssetTypeName", "Customize Character Item");
}

FColor FCustomizeCharacterItemAssetTypeActions::GetTypeColor() const
{
	return FColor::Purple;
}

uint32 FCustomizeCharacterItemAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

// EFFECT CHARACTER ITEM ASSET TYPE

FEffectCharacterItemAssetTypeActions::FEffectCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FEffectCharacterItemAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FEffectCharacterItemAssetTypeActions::GetSupportedClass() const
{
	return UEffectCharacterItem::StaticClass();
}

FText FEffectCharacterItemAssetTypeActions::GetName() const
{
	return LOCTEXT("FEffectCharacterItemAssetTypeActions", "Effect Character Item");
}

FColor FEffectCharacterItemAssetTypeActions::GetTypeColor() const
{
	return FColor::Red;
}

uint32 FEffectCharacterItemAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

#undef LOCTEXT_NAMESPACE
