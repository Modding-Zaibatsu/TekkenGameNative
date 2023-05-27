// Fill out your copyright notice in the Description page of Project Settings.

#include "AKAudioEditorModule.h"
#include "AkAudioEventFactory.h"

#include "AkAudioEvent.h"


UAkAudioEventFactory::UAkAudioEventFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UAkAudioEvent::StaticClass();
}

uint32 UAkAudioEventFactory::GetMenuCategories() const
{
	return 1 << 6;
}

UObject* UAkAudioEventFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAkAudioEvent>(InParent, InClass, InName, Flags);
}
