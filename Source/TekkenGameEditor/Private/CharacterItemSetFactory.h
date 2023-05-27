// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharacterItemSetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterItemSetFactory : public UFactory
{
	GENERATED_BODY()
	
	UCharacterItemSetFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
