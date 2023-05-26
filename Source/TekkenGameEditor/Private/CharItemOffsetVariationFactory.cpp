// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharItemOffsetVariationFactory.h"
#include "CharacterItemOffsetVariation.h"

UCharItemOffsetVariationFactory::UCharItemOffsetVariationFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItemOffsetVariation::StaticClass();
}

uint32 UCharItemOffsetVariationFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UCharItemOffsetVariationFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemOffsetVariation>(InParent, Class, Name, Flags);
}




