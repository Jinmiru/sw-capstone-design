// Fill out your copyright notice in the Description page of Project Settings.


#include "MSEnglishGameBox.h"
#include "Components/BoxComponent.h"
#include "LifeGameProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "LifeGameProjectPlayerController.h"

// Sets default values
AMSEnglishGameBox::AMSEnglishGameBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMSEnglishGameBox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void AMSEnglishGameBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMSEnglishGameBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMSEnglishGameBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (ALifeGameProjectCharacter* Character = Cast<ALifeGameProjectCharacter>(OtherActor))
    {
        AController* Controller = Character->GetController();
        if (Controller)
        {
            ALifeGameProjectPlayerController* PlayerController = Cast<ALifeGameProjectPlayerController>(Controller);
            if (PlayerController)
            {
                if (PlayerController->IsPlayingMiniGame()) return;

                PlayerController->ShowGameUI(EGameUIType::MS_English);
                PlayerController->SetIsPlayingMiniGame(true);
            }
        }
    }
}
