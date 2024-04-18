// Fill out your copyright notice in the Description page of Project Settings.


#include "System/WorldCharacterBase.h"

// Sets default values
AWorldCharacterBase::AWorldCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWorldCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

