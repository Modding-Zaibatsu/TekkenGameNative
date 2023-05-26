// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "AuraCharacterItemFactory.h"

#include "AuraCharacterItem.h"

UAuraCharacterItemFactory::UAuraCharacterItemFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UAuraCharacterItem::StaticClass();
}

uint32 UAuraCharacterItemFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UAuraCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAuraCharacterItem>(InParent, Class, Name, Flags);
}
