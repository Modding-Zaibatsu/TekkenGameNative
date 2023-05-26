// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "AuraCharacterItemFactory.generated.h"

/**
 * 
 */
UCLASS()
class UAuraCharacterItemFactory : public UFactory
{
	GENERATED_BODY()

	UAuraCharacterItemFactory();
	
	// Begin UFactory Interface
	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};
