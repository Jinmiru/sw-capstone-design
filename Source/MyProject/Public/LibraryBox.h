// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LibraryBox.generated.h"

UCLASS()
class MYPROJECT_API ALibraryBox : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LibraryBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LibraryBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = GameState, meta = (AllowPrivateAccess = "true"))
	bool bIsGameRunning;		// ���� ���� ���¿� ���� ����
public:
	// Sets default values for this actor's properties
	ALibraryBox();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	TSubclassOf<AActor> BookActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	int32 NumBookToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	float SpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawning)
	int32 CollectedBookCount;      // ���� ������ ����

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ������ ���� �Լ�
	UFUNCTION(BlueprintCallable)
	void SpawnBookActors();

	// ������ �ֿ��� �� ȣ��Ǵ� �Լ�
	UFUNCTION()
	void BookPickedUp();

	UFUNCTION()
	void CancelGame();

private:
	class ULibraryUI* GetLibraryUI();

};
