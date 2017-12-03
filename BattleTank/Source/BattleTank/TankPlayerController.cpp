// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player posessing: %s"), *(ControlledTank->GetName()))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player is not possessing a controlled tank"))
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Tick"))
		//AimTowardsCrosshair();
}

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair() 
{
	if (!GetControlledTank()) { return; }

	// Get world location if linetrace through crosshair
	// If it hits something
		// Tell the controlled tank to aim at this point
}