// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterItemVariationFactory.h"

#include "CharacterItemVariation.h"

UCharacterItemVariationFactory::UCharacterItemVariationFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItemVariation::StaticClass();
}

uint32 UCharacterItemVariationFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UCharacterItemVariationFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemVariation>(InParent, Class, Name, Flags);
}




