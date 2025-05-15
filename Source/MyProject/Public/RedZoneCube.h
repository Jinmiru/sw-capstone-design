// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RedZoneCube.generated.h"

UCLASS()
class MYPROJECT_API ARedZoneCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARedZoneCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	void UpdateOpacityFromManager(float Alpha);

	void ForceBlock(float Duration); // 충돌 전환 수동 호출

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;

	UFUNCTION()
	void OnPlayerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlayerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> WarningWidgetClass; // 생성할 위젯 클래스

private:
	UPROPERTY()
	UUserWidget* SpawnedWidget = nullptr; // 생성된 위젯 추적

	bool bWidgetShown = false; // 중복 생성 방지

	UMaterialInstanceDynamic* DynamicMaterial;

	float FadeDuration = 0.0f;        // 전체 흐려짐 시간
	float ElapsedFadeTime = 0.0f;     // 누적 시간
	bool redzoneStart = false; // RedZone 시작 여부
	bool bHasBlocked = false;
	bool isBlock = false;

	FTimerHandle FadeTimerHandle;

	void UpdateFade(); // Opacity 증가 함수

};
