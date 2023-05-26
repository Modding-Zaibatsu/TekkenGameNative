// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CustomizeCharacterItemFactory.h"
#include "CustomizeCharacterItem.h"

UCustomizeCharacterItemFactory::UCustomizeCharacterItemFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCustomizeCharacterItem::StaticClass();
}

uint32 UCustomizeCharacterItemFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UCustomizeCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCustomizeCharacterItem>(InParent, Class, Name, Flags);
}