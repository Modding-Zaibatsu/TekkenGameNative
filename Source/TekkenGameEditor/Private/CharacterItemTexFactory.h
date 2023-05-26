// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharacterItemTexFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterItemTexFactory : public UFactory
{
	GENERATED_BODY()

	UCharacterItemTexFactory();
	
	// Begin UFactory Interface
	virtual uint32 GetMenuCategories() const override;

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};
