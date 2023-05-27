// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterItemFactory.h"
#include "CharacterItem.h"

UCharacterItemFactory::UCharacterItemFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItem::StaticClass();
}

UObject* UCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItem>(InParent, Class, Name, Flags);
}


