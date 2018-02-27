// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DumbBitch.generated.h"

UCLASS()
class SHOOTER_API ADumbBitch : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADumbBitch();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:	
	void MoveForward(float Value);

	void MoveRight(float Value);

	void LookUp(float Value);

	void LookRight(float Value);
};
