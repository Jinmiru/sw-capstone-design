// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HSImageQuizGameBox.generated.h"

UCLASS()
class MYPROJECT_API AHSImageQuizGameBox : public AActor
{
	GENERATED_BODY()
	

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;


public:	
	// Sets default values for this actor's properties
	AHSImageQuizGameBox();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);
};
