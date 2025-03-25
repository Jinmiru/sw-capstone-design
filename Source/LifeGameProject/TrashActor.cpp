// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashActor.h"
#include "Components/BoxComponent.h"
#include "LifeGameProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "LifeGameProjectPlayerController.h"
#include "ESServiceGameBox.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATrashActor::ATrashActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATrashActor::OnBeginOverlap);

}

// Called when the game starts or when spawned
void ATrashActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrashActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrashActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor);
	if (PlayerCharacter)
	{
		Pickup();
	}
}

void ATrashActor::Pickup()
{
	AESServiceGameBox* GameBox = Cast<AESServiceGameBox>(UGameplayStatics::GetActorOfClass(GetWorld(), AESServiceGameBox::StaticClass()));
	if (GameBox)
	{
		GameBox->TrashPickedUp();
	}
	Destroy();
}
