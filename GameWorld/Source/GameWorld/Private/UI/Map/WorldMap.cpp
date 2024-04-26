// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Map/WorldMap.h"

// Sets default values
AWorldMap::AWorldMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldMap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

