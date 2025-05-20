// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayingCutsceneBox.generated.h"

UCLASS()
class MYPROJECT_API APlayingCutsceneBox : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	// 영상 출력용 위젯
	UPROPERTY(EditAnywhere, Category = "Cutscene")
	TSubclassOf<class UUserWidget> CutsceneWidgetClass;

	// 사용할 MediaPlayer (MP_LevelIntro)
	UPROPERTY(EditAnywhere, Category = "Cutscene")
	class UMediaPlayer* MediaPlayer;

	// 연결할 영상 파일 (FM_LevelIntro)
	UPROPERTY(EditAnywhere, Category = "Cutscene")
	class UFileMediaSource* MediaSource;

	UPROPERTY()
	class UUserWidget* CutsceneWidgetInstance;
	
public:	
	// Sets default values for this actor's properties
	APlayingCutsceneBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnCutsceneFinished();

};
