// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayingCutsceneBox.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "FileMediaSource.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameController.h"

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
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APlayingCutsceneBox::OnBeginOverlap);

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

void APlayingCutsceneBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!MediaPlayer || !MediaSource || !CutsceneWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing MediaPlayer, MediaSource, or WidgetClass"));
		return;
	}

	if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
	{
		AController* Controller = Character->GetController();
		if (Controller)
		{
			AGameController* PlayerController = Cast<AGameController>(Controller);
			if (PlayerController)
			{
				if (MediaPlayer->IsPlaying())
					return;

				// 위젯 생성 및 출력
				if (!CutsceneWidgetInstance)
				{
					CutsceneWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), CutsceneWidgetClass);
					if (CutsceneWidgetInstance)
					{
						CutsceneWidgetInstance->AddToViewport();
					}
				}

				// 영상 재생
				MediaPlayer->OpenSource(MediaSource);

				// 종료 이벤트 바인딩 (한 번만)
				if (!MediaPlayer->OnEndReached.IsAlreadyBound(this, &APlayingCutsceneBox::OnCutsceneFinished))
				{
					MediaPlayer->OnEndReached.AddDynamic(this, &APlayingCutsceneBox::OnCutsceneFinished);
				}
			}
		}
	}
}

void APlayingCutsceneBox::OnCutsceneFinished()
{
	if (CutsceneWidgetInstance)
	{
		CutsceneWidgetInstance->RemoveFromParent();
		CutsceneWidgetInstance = nullptr;
	}

	if (MediaPlayer)
	{
		MediaPlayer->Close();
	}
}
