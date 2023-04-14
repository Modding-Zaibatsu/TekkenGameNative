// Fill out your copyright notice in the Description page of Project Settings.

#include "AkAudioEditorModule.h"
#include "AkAudioBankFactory.h"

#include "AkAudioBank.h"


UAkAudioBankFactory::UAkAudioBankFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UAkAudioBank::StaticClass();
}

uint32 UAkAudioBankFactory::GetMenuCategories() const
{
	return 1 << 0 | 1 << 6;
}

UObject* UAkAudioBankFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAkAudioBank>(InParent, InClass, InName, Flags);
}
