// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayingCutsceneBox.generated.h"

class USoundCue;

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

	UPROPERTY()
	class UAudioComponent* audioComponent;

	UPROPERTY(EditAnywhere, Category = "Cutscene")
	USoundBase* CutsceneSound;

	UFUNCTION()
	void OnMediaOpened(FString OpenedUrl);

	bool bPlayersTeleported = false;


public:
	// Sets default values for this actor's properties
	APlayingCutsceneBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable)
	void Server_HandleCutsceneFinished(AGameController* PC);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PlayCutScene();


	UFUNCTION()
	void OnCutsceneFinished();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCutscenePlayed = false;

	UPROPERTY(EditAnywhere, Category = "Cutscene")
	FVector TargetTeleportLocation;

};
