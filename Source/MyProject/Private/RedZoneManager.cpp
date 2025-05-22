// Fill out your copyright notice in the Description page of Project Settings.


#include "RedZoneManager.h"

// Sets default values
ARedZoneManager::ARedZoneManager()

{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ARedZoneManager::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("RedZoneManager BeginPlay"));
	//StartRedZone();

}

// Called every frame
void ARedZoneManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARedZoneManager::StartRedZone()
{
	// 가능한 번호를 구함 (1 ~ 16 중, 아직 안 쓰인 것만)
	TArray<int32> AvailableIndices;
	for (int i = 1; i <= 16; ++i)
	{
		if (!UsedRedZoneIndices.Contains(i))
		{
			AvailableIndices.Add(i);
		}
	}

	// 모든 RedZone이 이미 선택되었으면 더 이상 생성하지 않음
	if (AvailableIndices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("모든 RedZone이 이미 사용되었습니다."));
		return;
	}

	// 사용 가능한 인덱스 중 하나 무작위 선택
	int32 RandomIndex = FMath::RandRange(0, AvailableIndices.Num() - 1);
	int32 RedZoneCount = AvailableIndices[RandomIndex];

	// 선택된 인덱스 저장
	UsedRedZoneIndices.Add(RedZoneCount);

	UE_LOG(LogTemp, Warning, TEXT("RedZoneCount: %d"), RedZoneCount);

	// 타이머 설정
	FTimerDelegate TimerDel;
	TimerDel.BindUFunction(this, FName("closeRedZone"), RedZoneCount);

	GetWorld()->GetTimerManager().SetTimer(
		RedZoneTimerHandle,
		TimerDel,
		time,
		false
	);
}


void ARedZoneManager::closeRedZone(int RedZoneCount)
{
	if (RedZoneActors.IsValidIndex(RedZoneCount) && RedZoneActors[RedZoneCount])
	{
		// RedZoneCube 타입으로 캐스팅
		ARedZoneCube* Cube = Cast<ARedZoneCube>(RedZoneActors[RedZoneCount]);
		if (Cube)
		{
			Cube->ForceBlock(safeTime); // Block 상태로 전환
			UE_LOG(LogTemp, Warning, TEXT("RedZone %d is now blocking"), RedZoneCount);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("RedZoneActor %d is not of type ARedZoneCube!"), RedZoneCount);
		}
	}
	StartRedZone();
}

