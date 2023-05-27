// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterItemSetFactory.h"
#include "CharacterItemSet.h"

UCharacterItemSetFactory::UCharacterItemSetFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItemSet::StaticClass();
}

UObject* UCharacterItemSetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemSet>(InParent, Class, Name, Flags);
}
