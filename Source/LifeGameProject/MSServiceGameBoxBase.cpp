// Fill out your copyright notice in the Description page of Project Settings.


#include "MSServiceGameBoxBase.h"
#include "MSServiceGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "TrashActor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"

AMSServiceGameBoxBase::AMSServiceGameBoxBase()
{
    PrimaryActorTick.bCanEverTick = true;

    NumTrashToSpawn = 10;
    SpawnRadius = 500.f;
    CollectedTrashCount = 0;
    bAllTrashCollected = false;
    bIsGameRunning = false;
}

void AMSServiceGameBoxBase::BeginPlay()
{
    Super::BeginPlay();
}

void AMSServiceGameBoxBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMSServiceGameBoxBase::SpawnTrashActors()
{
    ACharacter* Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!Player || !TrashActorClass) return;

    FVector PlayerLoc = Player->GetActorLocation();
    FVector Base = FVector(PlayerLoc.X, PlayerLoc.Y, 0.f);

    for (int32 i = 0; i < NumTrashToSpawn; ++i)
    {
        float Angle = FMath::DegreesToRadians(FMath::FRandRange(0.f, 360.f));
        float Dist = FMath::FRandRange(200.f, SpawnRadius);
        FVector Offset = FVector(FMath::Cos(Angle) * Dist, FMath::Sin(Angle) * Dist, 0.f);
        FVector SpawnLoc = Base + Offset;

        ATrashActor* Trash = Cast<ATrashActor>(
            GetWorld()->SpawnActor<AActor>(TrashActorClass, SpawnLoc, FRotator::ZeroRotator)
        );

        if (Trash)
        {
            Trash->SetOwningGameBox(this);
        }
    }
}

void AMSServiceGameBoxBase::TrashPickedUp()
{
    if (!bIsGameRunning || bAllTrashCollected) return;

    CollectedTrashCount++;

    if (UMSServiceGameUI* UI = GetServiceGameUI())
    {
        UI->UpdateQuestionText(CollectedTrashCount, NumTrashToSpawn);
    }

    if (CollectedTrashCount >= NumTrashToSpawn)
    {
        bAllTrashCollected = true;

        if (UMSServiceGameUI* UI = GetServiceGameUI())
        {
            UI->ShowMessage(TEXT("이제 목표 지점으로 이동하세요!"));
        }
    }
}

void AMSServiceGameBoxBase::CancelGame()
{
    TArray<AActor*> TrashActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), TrashActorClass, TrashActors);
    for (AActor* Trash : TrashActors)
    {
        Trash->Destroy();
    }

    FTimerHandle ResetHandle;
    GetWorld()->GetTimerManager().SetTimer(ResetHandle, FTimerDelegate::CreateLambda([this]()
        {
            bIsGameRunning = false;
            bAllTrashCollected = false;
            CollectedTrashCount = 0;
        }), 2.0f, false);
}

UMSServiceGameUI* AMSServiceGameBoxBase::GetServiceGameUI()
{
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (auto* PC = Cast<ALifeGameProjectPlayerController>(Controller))
    {
        UUserWidget* Widget = PC->GetGameUIInstance(EGameUIType::MS_Service);
        return Cast<UMSServiceGameUI>(Widget);
    }
    return nullptr;
}
