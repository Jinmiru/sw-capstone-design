// Fill out your copyright notice in the Description page of Project Settings.


#include "ESServiceGameBox.h"
#include "Components/BoxComponent.h"
#include "LifeGameProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "LifeGameProjectPlayerController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AESServiceGameBox::AESServiceGameBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AESServiceGameBox::OnBeginOverlap);

    NumTrashToSpawn = 10;                       // 기본값 설정, 쓰레기 생성 개수
    SpawnRadius = 500.0f;                       // 기본값 설정, 쓰레기 스폰 범위
    RemainingTrashCount = 0;                    // 남은 쓰레기 개수 초기화

    bIsGameRunning = false;                     // 게임 진행 상태 초기화

}

// Called when the game starts or when spawned
void AESServiceGameBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AESServiceGameBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AESServiceGameBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // 게임이 이미 진행 중이면 무시
    if (bIsGameRunning)
        return;

    if (ALifeGameProjectCharacter* Character = Cast<ALifeGameProjectCharacter>(OtherActor))
    {
        AController* Controller = Character->GetController();
        if (Controller)
        {
            ALifeGameProjectPlayerController* PlayerController = Cast<ALifeGameProjectPlayerController>(Controller);
            if (PlayerController)
            {
                PlayerController->ShowESServiceGameUI();

                SpawnTrashActors();

                // 게임 시작 상태로 설정
                bIsGameRunning = true;

                // 쓰레기 개수를 초기화(기본값: 10개)
                RemainingTrashCount = NumTrashToSpawn;
            }
        }
    }
}


void AESServiceGameBox::SpawnTrashActors()
{
	if (TrashActorClass)
	{
		ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (PlayerCharacter)
		{
			FVector PlayerLocation = PlayerCharacter->GetActorLocation();
			FVector PlayerFloorLocation = FVector(PlayerLocation.X, PlayerLocation.Y, 0.0f);

			for (int32 i = 0; i < NumTrashToSpawn; ++i)
			{
				// 🔹 0도 ~ 360도 중 랜덤한 방향 각도
				float RandAngleDeg = UKismetMathLibrary::RandomFloatInRange(0.0f, 360.0f);

				// 🔹 200cm ~ SpawnRadius 사이 랜덤 거리
				float RandDistance = UKismetMathLibrary::RandomFloatInRange(200.0f, SpawnRadius);

				// 🔹 방향 벡터 계산
				float Rad = FMath::DegreesToRadians(RandAngleDeg);
				float X = FMath::Cos(Rad) * RandDistance;
				float Y = FMath::Sin(Rad) * RandDistance;

				FVector Offset = FVector(X, Y, 0.0f);
				FVector SpawnLocation = PlayerFloorLocation + Offset;

				GetWorld()->SpawnActor<AActor>(TrashActorClass.Get(), SpawnLocation, FRotator::ZeroRotator);
			}
		}
	}
}


void AESServiceGameBox::TrashPickedUp()
{
    RemainingTrashCount--;
    if (RemainingTrashCount <= 0)
    {
        // 게임 종료 로직
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("모든 쓰레기를 주웠습니다!"));

        // 게임 종료 상태로 변경
        bIsGameRunning = false;
    }
}
