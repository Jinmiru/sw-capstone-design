// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HSServiceGameBoxBase.generated.h"

// 미리 선언
class UHSServiceGameUI;

UCLASS()
class LIFEGAMEPROJECT_API AHSServiceGameBoxBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AHSServiceGameBoxBase();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // 쓰레기 생성
    void SpawnTrashActors();

    // 쓰레기 줍기
    void TrashPickedUp();

    // 게임 취소 처리 함수
    void CancelGame();

    // 게임 상태 확인/제어용
    bool IsAllTrashCollected() const { return bAllTrashCollected; }
    void SetGameRunning(bool bRunning) { bIsGameRunning = bRunning; }

    UHSServiceGameUI* GetServiceGameUI();

protected:
    // 쓰레기 액터 클래스
    UPROPERTY(EditAnywhere, Category = "Game")
    TSubclassOf<AActor> TrashActorClass;

    // 생성할 쓰레기 수
    UPROPERTY(EditAnywhere, Category = "Game")
    int32 NumTrashToSpawn;

    // 스폰 반경
    UPROPERTY(EditAnywhere, Category = "Game")
    float SpawnRadius;

    // 현재까지 주운 쓰레기 수
    UPROPERTY(VisibleAnywhere)
    int32 CollectedTrashCount;

    // 모두 주웠는지 여부
    UPROPERTY(VisibleAnywhere)
    bool bAllTrashCollected;

    // 게임 실행 중인지 여부
    UPROPERTY(VisibleAnywhere)
    bool bIsGameRunning;
};
