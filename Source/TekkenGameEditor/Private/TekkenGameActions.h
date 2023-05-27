// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Developer/AssetTools/Public/AssetTypeActions_Base.h"

// AURA CHARACTER ITEM ASSET

class FAuraCharacterItemAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FAuraCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER EXTRA ITEM ASSET

class FCharacterExtraItemsAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterExtraItemsAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM ASSET

class FCharacterItemAssetTypeActions : public FAssetTypeActions_Base
{
	
	public:

	FCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

	private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM SET ASSET

class FCharacterItemSetAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterItemSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM SOCKET ASSET

class FCharacterItemSocketAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterItemSocketAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM TEX ASSET

class FCharacterItemTexAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterItemTexAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM VARIATION ASSET

class FCharacterItemVariationAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterItemVariationAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CHARACTER ITEM OFFSET VARIATION ASSET

class FCharacterItemOffsetVariationAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterItemOffsetVariationAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// CUSTOMIZE CHARACTER ITEM ASSET

class FCustomizeCharacterItemAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCustomizeCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

class FEffectCharacterItemAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FEffectCharacterItemAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};
