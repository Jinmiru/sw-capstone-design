// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESServiceGameBox.generated.h"

UCLASS()
class LIFEGAMEPROJECT_API AESServiceGameBox : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GameState, meta = (AllowPrivateAccess = "true"))
	bool bIsGameRunning;		// 게임 진행 상태에 대한 변수

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	TSubclassOf<AActor> TrashActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	int32 NumTrashToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	float SpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	int32 CollectedTrashCount;      // 남은 쓰레기 개수

public:	
	// Sets default values for this actor's properties
	AESServiceGameBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 쓰레기 생성 함수
	UFUNCTION()
	void SpawnTrashActors();

	// 쓰레기 주웠을 때 호출되는 함수
	UFUNCTION()
	void TrashPickedUp();

	UFUNCTION()
	void CancelGame();

private:
	class UESServiceGameUI* GetServiceGameUI();

};
