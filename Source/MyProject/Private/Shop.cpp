// Fill out your copyright notice in the Description page of Project Settings.


#include "Shop.h"
#include "Components/BoxComponent.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameController.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AShop::AShop()
{
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AShop::OnBeginOverlap);
}

// Called when the game starts or when spawned
void AShop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//void AShop::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (!HasAuthority()) return;  // 서버만 처리
//
//
//	if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
//	{
//		AController* Controller = Character->GetController();
//		AGameController* PlayerController = Cast<AGameController>(Controller);
//
//
//		if (PlayerController)
//		{
//			PlayerController->Client_ShowGameUI(EGameUIType::Shop); // 클라에서 UI 띄움
//		}
//	}
//}

