// Fill out your copyright notice in the Description page of Project Settings.


#include "Restaurant.h"
#include "MyProject/MyProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "GameController.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ARestaurant::ARestaurant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ARestaurant::OnBeginOverlap);

}

// Called when the game starts or when spawned
void ARestaurant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARestaurant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ARestaurant::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
//	{
//		AController* Controller = Character->GetController();
//		AGameController* PlayerController = Cast<AGameController>(Controller);
//
//
//		if (PlayerController && PlayerController->IsPlayingMiniGame())
//		{
//			// 인벤토리에서 재료정보 비교하면서, 성공/실패처리
//			CheckCookMissionComplete(PlayerController);
//				//TODO
//				// 실패시, 그냥 바로 실패시킬껀지
//				// 아니면 부족하다고 뜨면서 그냥 넘길껀지 정해야함
//
//		}
//	}
//}
