// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "AkAudioBankFactory.generated.h"

/**
 * 
 */
UCLASS()
class UAkAudioBankFactory : public UFactory
{
	GENERATED_BODY()
	
	UAkAudioBankFactory();

	// Begin UFactory Interface
	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
	
};
