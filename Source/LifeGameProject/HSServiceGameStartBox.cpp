// Fill out your copyright notice in the Description page of Project Settings.


#include "HSServiceGameStartBox.h"
#include "HSServiceGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "LifeGameProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

AHSServiceGameStartBox::AHSServiceGameStartBox()
{
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AHSServiceGameStartBox::OnBeginOverlap);

}

void AHSServiceGameStartBox::BeginPlay()
{
	Super::BeginPlay();
}

void AHSServiceGameStartBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bIsGameRunning)
		return;

	if (Cast<ALifeGameProjectCharacter>(OtherActor))
	{
		if (ALifeGameProjectPlayerController* PC = Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0)))
		{
			if (PC->IsPlayingMiniGame()) return;

			bIsGameRunning = true;
			bAllTrashCollected = false;
			CollectedTrashCount = 0;

			PC->SetIsPlayingMiniGame(true);
			PC->ShowGameUI(EGameUIType::HS_Service);

			if (UUserWidget* Widget = PC->GetGameUIInstance(EGameUIType::HS_Service))
			{
				if (UHSServiceGameUI* UI = Cast<UHSServiceGameUI>(Widget))
				{
					UI->UpdateQuestionText(0, NumTrashToSpawn);
				}
			}

			SpawnTrashActors();
		}
	}
}
