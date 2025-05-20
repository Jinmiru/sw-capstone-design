// Fill out your copyright notice in the Description page of Project Settings.


#include "ChangeJobBox.h"
#include "Components/BoxComponent.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AChangeJobBox::AChangeJobBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
}

// Called when the game starts or when spawned
void AChangeJobBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChangeJobBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

