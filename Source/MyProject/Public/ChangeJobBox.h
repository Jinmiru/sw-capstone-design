// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChangeJobBox.generated.h"


UENUM(BlueprintType)
enum class EJobBoxActionType : uint8
{
	ACTION_One   UMETA(DisplayName = "Action One"),
	ACTION_Two   UMETA(DisplayName = "Action Two"),
	ACTION_Three UMETA(DisplayName = "Action Three"),
	ACTION_Four  UMETA(DisplayName = "Action Four"),
	ACTION_Five  UMETA(DisplayName = "Action Five")
};


UCLASS()
class MYPROJECT_API AChangeJobBox : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

public:	
	// Sets default values for this actor's properties
	AChangeJobBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 블루프린트에서 설정 가능하도록 UPROPERTY 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Job Box Settings")
	EJobBoxActionType ActionType;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);
};
