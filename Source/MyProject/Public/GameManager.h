// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatusWidget.h"
#include "GameManager.generated.h"

UCLASS()
class MYPROJECT_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundWave* SoundToPlay1;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundWave* SoundToPlay2;

	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundWave* SoundToPlay3;

	UPROPERTY()
	UAudioComponent* AudioComponent;

	UPROPERTY()
	UStatusWidget* StatusWidget;

	UFUNCTION()
	void lobby();

	UFUNCTION()
	void Start();



	UFUNCTION()
	void middle();

	UFUNCTION()
	void end();
};
