// Fill out your copyright notice in the Description page of Project Settings.


#include "BookActor.h"
#include "LibraryBox.h"
#include "MyProject/MyProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABookActor::ABookActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    bReplicates = true;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f));
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABookActor::OnBeginOverlap);

}

// Called when the game starts or when spawned
void ABookActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABookActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABookActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!HasAuthority()) return; // 서버에서만 동작

    if (Cast<ACharacter>(OtherActor))
    {
        //UE_LOG(LogTemp, Warning, TEXT("catch"));
        Pickup();
    }
}

void ABookActor::Pickup()
{
    if (OwningGameBox)
    {
        if (ALibraryBox* Library = Cast<ALibraryBox>(OwningGameBox))
        {
            UE_LOG(LogTemp, Warning, TEXT("catch"));

            Library->BookPickedUp();
        }

    }

    Destroy();
}

void ABookActor::SetOwningGameBox(AActor* GameBoxActor)
{
    OwningGameBox = GameBoxActor;
}