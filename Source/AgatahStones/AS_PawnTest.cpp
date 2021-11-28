// Fill out your copyright notice in the Description page of Project Settings.


#include "AS_PawnTest.h"

// Sets default values
AAS_PawnTest::AAS_PawnTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAS_PawnTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAS_PawnTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAS_PawnTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

