// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BookActor.generated.h"

UCLASS()
class MYPROJECT_API ABookActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	UPROPERTY()
	AActor* OwningGameBox;
	
public:	
	// Sets default values for this actor's properties
	ABookActor();

	void SetOwningGameBox(AActor* GameBoxActor);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void Pickup();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
