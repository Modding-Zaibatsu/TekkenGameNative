// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "EffectCharacterItemFactory.h"
#include "EffectCharacterItem.h"

UEffectCharacterItemFactory::UEffectCharacterItemFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UEffectCharacterItem::StaticClass();
}

UObject* UEffectCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UEffectCharacterItem>(InParent, Class, Name, Flags);
}




