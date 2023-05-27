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

UObject* UCharItemOffsetVariationFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemOffsetVariation>(InParent, Class, Name, Flags);
}




