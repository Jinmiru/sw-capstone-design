// Fill out your copyright notice in the Description page of Project Settings.


#include "MSServiceGameStartBox.h"
#include "MSServiceGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "LifeGameProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

AMSServiceGameStartBox::AMSServiceGameStartBox()
{
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMSServiceGameStartBox::OnBeginOverlap);

}

void AMSServiceGameStartBox::BeginPlay()
{
    Super::BeginPlay();
}

void AMSServiceGameStartBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
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
			PC->ShowGameUI(EGameUIType::MS_Service);

			if (UUserWidget* Widget = PC->GetGameUIInstance(EGameUIType::MS_Service))
			{
				if (UMSServiceGameUI* UI = Cast<UMSServiceGameUI>(Widget))
				{
					UI->UpdateQuestionText(0, NumTrashToSpawn);
				}
			}

			SpawnTrashActors();
		}
	}
}
