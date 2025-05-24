// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Components/AudioComponent.h"
#include "StatusWidget.h"
#include "RedZoneManager.h"
#include "Kismet/GameplayStatics.h" // Sets default values
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ������Ʈ ����
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(RootComponent);
	AudioComponent->bAutoActivate = false; // �ڵ� ��� ����

#if WITH_EDITORONLY_DATA
	bIsSpatiallyLoaded = false; // 월드 파티션에서 공간 추적 하지 않음
#endif

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	if (SoundToPlay1)
	{
		AudioComponent->SetSound(SoundToPlay1);
		AudioComponent->Play();
	}
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AGameManager::lobby() //�κ� ����
{
	//�ó׸�ƽ ���� ���


}

void AGameManager::Start() //�ʵ��л� ����
{
	if (SoundToPlay1)
	{
		AudioComponent->SetSound(SoundToPlay1);
		AudioComponent->Play();
		StatusWidget->changeUI();
	}
}

void AGameManager::middle() //���� ����
{
	if (SoundToPlay2)
	{
		AudioComponent->SetSound(SoundToPlay2);
		AudioComponent->Play();
		StatusWidget->changeUI();
	}
}

void AGameManager::end() //�ڱ��� ����
{
	if (SoundToPlay3)
	{
		AudioComponent->SetSound(SoundToPlay3);
		AudioComponent->Play();
		StatusWidget->changeUI();

		// RedZoneManager ã��
		TArray<AActor*> FoundManagers;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARedZoneManager::StaticClass(), FoundManagers);

		if (FoundManagers.Num() > 0)
		{
			ARedZoneManager* redmanager = Cast<ARedZoneManager>(FoundManagers[0]);
			if (redmanager)
			{
				redmanager->StartRedZone();
			}
		}
	}
}

void AGameManager::SetBGM(bool play)
{
	AudioComponent->SetPaused(play);
}

void AGameManager::win() //승리
{
	/*if (VictoryWidgetClass)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
		if (PC)
		{
			VictoryWidgetInstance = CreateWidget<UUserWidget>(PC, VictoryWidgetClass);
			if (VictoryWidgetInstance)
			{
				VictoryWidgetInstance->AddToViewport();

				FInputModeUIOnly InputMode;
				InputMode.SetWidgetToFocus(VictoryWidgetInstance->TakeWidget());
				InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
				PC->SetInputMode(InputMode);
				PC->bShowMouseCursor = true;
			}
		}
	}*/



	/*UE_LOG(LogTemp, Warning, TEXT("🏆 GameManager::win() 함수 호출됨."));

	if (VictoryWidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("🏆 VictoryWidgetClass 유효함."));

		APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
		if (PC)
		{
			UE_LOG(LogTemp, Warning, TEXT("🏆 PlayerController 찾음. 위젯 생성 시도."));

			VictoryWidgetInstance = CreateWidget<UUserWidget>(PC, VictoryWidgetClass);
			if (VictoryWidgetInstance)
			{
				UE_LOG(LogTemp, Warning, TEXT("🏆 Victory 위젯 생성 성공. 화면에 추가합니다."));

				VictoryWidgetInstance->AddToViewport();

				FInputModeUIOnly InputMode;
				InputMode.SetWidgetToFocus(VictoryWidgetInstance->TakeWidget());
				InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
				PC->SetInputMode(InputMode);
				PC->bShowMouseCursor = true;
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("⛔ Victory 위젯 생성 실패."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("⛔ PlayerController 찾기 실패."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("⛔ VictoryWidgetClass가 설정되지 않았습니다."));
	}*/
}
