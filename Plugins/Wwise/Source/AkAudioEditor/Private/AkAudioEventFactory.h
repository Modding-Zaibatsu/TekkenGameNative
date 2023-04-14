// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "AkAudioEventFactory.generated.h"

/**
 * 
 */
UCLASS()
class UAkAudioEventFactory : public UFactory
{
	GENERATED_BODY()
	
	UAkAudioEventFactory();

	// Begin UFactory Interface
	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
	
};
