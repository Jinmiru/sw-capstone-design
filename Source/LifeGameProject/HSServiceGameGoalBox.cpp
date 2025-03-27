// Fill out your copyright notice in the Description page of Project Settings.


#include "HSServiceGameGoalBox.h"
#include "HSServiceGameStartBox.h"
#include "HSServiceGameUI.h"
#include "LifeGameProjectCharacter.h"
#include "LifeGameProjectPlayerController.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

AHSServiceGameGoalBox::AHSServiceGameGoalBox()
{
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(80.f, 80.f, 80.f));
    CollisionBox->SetRelativeLocation(FVector(0.f, 0.f, 120.f));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AHSServiceGameGoalBox::OnBeginOverlap);
}

void AHSServiceGameGoalBox::BeginPlay()
{
    Super::BeginPlay();
}

void AHSServiceGameGoalBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!Cast<ALifeGameProjectCharacter>(OtherActor))
        return;

    if (LinkedStartBox && LinkedStartBox->IsAllTrashCollected())
    {
        if (UHSServiceGameUI* UI = GetServiceGameUI())
        {
            UI->EndGame(true);
        }

        LinkedStartBox->SetGameRunning(false);

        if (ALifeGameProjectPlayerController* PC = Cast<ALifeGameProjectPlayerController>(UGameplayStatics::GetPlayerController(this, 0)))
        {
            PC->SetIsPlayingMiniGame(false);
        }
    }
}

