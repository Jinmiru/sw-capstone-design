// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RedZoneCube.h"
#include "RedZoneManager.generated.h"

UCLASS()
class MYPROJECT_API ARedZoneManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARedZoneManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float time = 3.0f;
	float safeTime = 10.0f;

	UPROPERTY(EditAnywhere, Category = RedZone)
	TArray<ARedZoneCube*> RedZoneActors;

	TArray<int32> UsedRedZoneIndices;


	FTimerHandle RedZoneTimerHandle;

	void StartRedZone();

	UFUNCTION()
	void closeRedZone(int number);
};
