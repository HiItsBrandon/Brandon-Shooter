// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerCharacter.h"


// Sets default values
AMyPlayerCharacter::AMyPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("Move_Vertical"), this, &AMyPlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(FName("Move_Horizontal"), this, &AMyPlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis(FName("Mouse_Vertical"), this, &AMyPlayerCharacter::LookUp);
	PlayerInputComponent->BindAxis(FName("Mouse_Horizontal"), this, &AMyPlayerCharacter::LookRight);

	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);
}

void AMyPlayerCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void AMyPlayerCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}

void AMyPlayerCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void AMyPlayerCharacter::LookRight(float Value)
{
	AddControllerYawInput(Value);
}