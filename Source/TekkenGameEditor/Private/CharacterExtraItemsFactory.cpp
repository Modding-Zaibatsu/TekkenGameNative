// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterExtraItemsFactory.h"
#include "CharacterExtraItems.h"


UCharacterExtraItemsFactory::UCharacterExtraItemsFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterExtraItems::StaticClass();
}

UObject* UCharacterExtraItemsFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterExtraItems>(InParent, Class, Name, Flags);
}
