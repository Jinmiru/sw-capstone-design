// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrashActor.generated.h"

UCLASS()
class MYPROJECT_API ATrashActor : public AActor
{
	GENERATED_BODY()
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	UPROPERTY()
	AActor* OwningGameBox;
public:	
	// Sets default values for this actor's properties
	ATrashActor();
	void SetOwningGameBox(AActor* GameBoxActor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// 플레이어와 부딪히는 경우를 구현
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 쓰레기 줍기 구현
	UFUNCTION()
	void Pickup();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
