// Fill out your copyright notice in the Description page of Project Settings.


#include "WinBox.h"
#include "Components/BoxComponent.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameController.h"
#include "GameManager.h"

// Sets default values
AWinBox::AWinBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AWinBox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void AWinBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWinBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AWinBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
//	{
//		// GameManager 찾기
//		TArray<AActor*> FoundManagers;
//		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGameManager::StaticClass(), FoundManagers);
//
//		if (FoundManagers.Num() > 0)
//		{
//			if (AGameManager* GameManager = Cast<AGameManager>(FoundManagers[0]))
//			{
//				GameManager->win(); // 승리 처리 호출
//			}
//		}
//	}
//}