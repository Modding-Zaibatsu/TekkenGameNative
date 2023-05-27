// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterItemTexFactory.h"

#include "CharacterItemTex.h"

UCharacterItemTexFactory::UCharacterItemTexFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItemTex::StaticClass();
}

UObject* UCharacterItemTexFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemTex>(InParent, Class, Name, Flags);
}




