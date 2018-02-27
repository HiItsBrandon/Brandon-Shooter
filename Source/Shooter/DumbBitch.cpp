// Fill out your copyright notice in the Description page of Project Settings.

#include "DumbBitch.h"


// Sets default values
ADumbBitch::ADumbBitch()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADumbBitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADumbBitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADumbBitch::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("Move_Vertical"), this, &ADumbBitch::MoveForward);
	PlayerInputComponent->BindAxis(FName("Move_Horizontal"), this, &ADumbBitch::MoveRight);

	PlayerInputComponent->BindAxis(FName("Mouse_Vertical"), this, &ADumbBitch::LookUp);
	PlayerInputComponent->BindAxis(FName("Mouse_Horizontal"), this, &ADumbBitch::LookRight);

	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);
}

void ADumbBitch::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void ADumbBitch::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}

void ADumbBitch::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ADumbBitch::LookRight(float Value)
{
	AddControllerYawInput(Value);
}
