// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashActor.h"
#include "ESServiceGameBox.h"
#include "MSServiceGameBoxBase.h"
#include "HSServiceGameBoxBase.h"
#include "LifeGameProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

ATrashActor::ATrashActor()
{
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f));
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATrashActor::OnBeginOverlap);
}

void ATrashActor::BeginPlay()
{
    Super::BeginPlay();
}

void ATrashActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATrashActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (Cast<ACharacter>(OtherActor))
    {
        Pickup();
    }
}

void ATrashActor::Pickup()
{
    if (OwningGameBox)
    {
        // 초등용 박스
        if (AESServiceGameBox* ESBox = Cast<AESServiceGameBox>(OwningGameBox))
        {
            ESBox->TrashPickedUp();
        }
        // 중등용 박스
        else if (AMSServiceGameBoxBase* MSBox = Cast<AMSServiceGameBoxBase>(OwningGameBox))
        {
            MSBox->TrashPickedUp();
        }
        // 고등용 박스
        else if (AHSServiceGameBoxBase* HSBox = Cast<AHSServiceGameBoxBase>(OwningGameBox))
        {
            HSBox->TrashPickedUp();
        }
    }

    Destroy();
}

void ATrashActor::SetOwningGameBox(AActor* GameBoxActor)
{
    OwningGameBox = GameBoxActor;
}
