// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharacterItemSocketFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterItemSocketFactory : public UFactory
{
	GENERATED_BODY()
	
	UCharacterItemSocketFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};
