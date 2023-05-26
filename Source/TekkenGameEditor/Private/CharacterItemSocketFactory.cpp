// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGameEditorModule.h"
#include "CharacterItemSocketFactory.h"

#include "CharacterItemSocket.h"

UCharacterItemSocketFactory::UCharacterItemSocketFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItemSocket::StaticClass();
}

uint32 UCharacterItemSocketFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UCharacterItemSocketFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterItemSocket>(InParent, Class, Name, Flags);
}




