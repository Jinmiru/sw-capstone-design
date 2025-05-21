// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayingCutsceneBox.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "FileMediaSource.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameController.h"
#include "Components/AudioComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
APlayingCutsceneBox::APlayingCutsceneBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));

	audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("CutsceneAudio"));
	audioComponent->bAutoActivate = false;
	audioComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APlayingCutsceneBox::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayingCutsceneBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




void APlayingCutsceneBox::Multicast_PlayCutScene_Implementation()
{
	if (bCutscenePlayed)
		return;

	bCutscenePlayed = true;
	if (!MediaPlayer || !MediaSource || !CutsceneWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing MediaPlayer, MediaSource, or WidgetClass"));
		return;
	}

	AGameController* PlayerController = Cast<AGameController>(GetWorld()->GetFirstPlayerController());
	if (PlayerController && PlayerController->IsLocalController())
	{

		if (MediaPlayer->IsPlaying())
			return;

		// 위젯 생성 및 출력
		if (!CutsceneWidgetInstance)
		{

			CutsceneWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), CutsceneWidgetClass);
			if (CutsceneWidgetInstance)
			{
				CutsceneWidgetInstance->AddToViewport(100);
			}
		}

		// 영상 재생
		MediaPlayer->OnMediaOpened.AddUniqueDynamic(this, &APlayingCutsceneBox::OnMediaOpened);
		MediaPlayer->OpenSource(MediaSource);

		TArray<AActor*> AllCharacters;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllCharacters);

		for (AActor* Actor : AllCharacters)
		{
			AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(Actor);
			if (Character)
			{
				Character->bIsMovementLocked = true;
			}
		}

		// 종료 이벤트 바인딩 (한 번만)
		if (!MediaPlayer->OnEndReached.IsAlreadyBound(this, &APlayingCutsceneBox::OnCutsceneFinished))
		{
			MediaPlayer->OnEndReached.AddDynamic(this, &APlayingCutsceneBox::OnCutsceneFinished);
		}
	}
}

void APlayingCutsceneBox::OnMediaOpened(FString OpenedUrl)
{
	if (audioComponent && CutsceneSound)
	{
		audioComponent->SetSound(CutsceneSound);
		audioComponent->Play();
	}
}

void APlayingCutsceneBox::OnCutsceneFinished()
{
	if (CutsceneWidgetInstance)
	{
		CutsceneWidgetInstance->RemoveFromParent();
		CutsceneWidgetInstance = nullptr;
	}

	if (audioComponent)
		audioComponent->Stop();

	if (MediaPlayer)
	{
		MediaPlayer->Close();
	}

	AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character && Character->IsLocallyControlled())
	{
		Character->Server_NotifyCutsceneFinished();
		Character->bIsMovementLocked = false;

	}
}

void APlayingCutsceneBox::Server_HandleCutsceneFinished_Implementation(AGameController* PC)
{
	if (bPlayersTeleported) return;
	bPlayersTeleported = true;

	// 기준 위치
	FVector BaseLocation = TargetTeleportLocation;

	// 이동 간격
	float Spacing = 200.0f;

	// 플레이어 목록 가져오기
	TArray<AActor*> AllPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyProjectCharacter::StaticClass(), AllPlayers);

	// 전체 인원 수
	int32 PlayerCount = AllPlayers.Num();

	// 인원 수가 짝수인 경우 양옆으로 정중앙 정렬
	int32 CenterIndex = PlayerCount / 2;

	for (int32 i = 0; i < PlayerCount; ++i)
	{
		AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(AllPlayers[i]);
		if (!Character) continue;

		// 가운데를 기준으로 -2, -1, 0, 1, 2 이런 식으로 배치
		int32 RelativeIndex = i - CenterIndex;
		if (PlayerCount % 2 == 0 && i >= CenterIndex)
		{
			RelativeIndex += 1; // 짝수일 경우 중심에 겹침 방지
		}

		FVector Offset = FVector(Spacing * RelativeIndex, 0.f, 0.f); // X축 기준으로 벌림
		FVector NewLocation = BaseLocation + Offset;

		Character->SetActorLocation(NewLocation);
	}
}