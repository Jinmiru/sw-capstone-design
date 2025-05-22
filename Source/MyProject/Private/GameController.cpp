// Fill out your copyright notice in the Description page of Project Settings.


#include "GameController.h"
#include "Net/UnrealNetwork.h"
#include "ESServiceGameUI.h"
#include "DoctorUI.h"
#include "CookUI.h"
#include "JobCenterUI.h"
#include "GameFramework/SpectatorPawn.h"
#include "Kismet/KismetSystemLibrary.h"


void AGameController::BeginPlay()
{
	Super::BeginPlay();
	JobSuccess = true;
}

bool AGameController::IsPlayingMiniGame() const
{
	return bIsPlayingMiniGame;
}

void AGameController::SetIsPlayingMiniGame(bool bPlaying) // 미니게임 상태를 설정
{
	//UE_LOG(LogTemp, Warning, TEXT("SetIsPlayingMiniGame: %s"), bPlaying ? TEXT("true") : TEXT("false"));
	bIsPlayingMiniGame = bPlaying;
}

void AGameController::Server_SetIsPlayingMiniGame_Implementation(bool bPlaying)
{
	SetIsPlayingMiniGame(bPlaying);
}
bool AGameController::Server_SetIsPlayingMiniGame_Validate(bool bPlaying)
{
	return true;
}
void AGameController::ShowGameUI(EGameUIType UIType)
{
	if (!IsLocalController())
	{
		UE_LOG(LogTemp, Warning, TEXT("ShowGameUI called on non-local controller."));
		return;
	}

	if (GameUIInstances.Contains(UIType) && GameUIInstances[UIType] != nullptr)
	{
		GameUIInstances[UIType]->AddToViewport();
		return;
	}

	if (TSubclassOf<UUserWidget>* FoundClass = GameUIClasses.Find(UIType))
	{
		if (*FoundClass != nullptr)
		{
			UUserWidget* Widget = CreateWidget<UUserWidget>(this, *FoundClass);
			if (Widget)
			{
				GameUIInstances.Add(UIType, Widget);
				Widget->AddToViewport();

				// 추가된 캐스팅 및 디버그 로그
				if (UIType == EGameUIType::JobCenter)
				{
					if (UJobCenterUI* JobUI = Cast<UJobCenterUI>(Widget))
					{
						UE_LOG(LogTemp, Warning, TEXT("UJobCenterUI Initialized and Cast Succeeded"));
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to cast to UJobCenterUI"));
					}
				}
			}
		}
		else
		{
			LogMissingBlueprint(UIType);
		}
	}

}


void AGameController::HideGameUI(EGameUIType UIType)
{
	if (UUserWidget** WidgetPtr = GameUIInstances.Find(UIType))
	{
		if (UUserWidget* Widget = *WidgetPtr)
		{
			Widget->RemoveFromParent();
			//Widget->Destruct();
			//GameUIInstances[UIType] = nullptr;
		}
	}
}

void AGameController::LogMissingBlueprint(EGameUIType UIType)
{
	FString UIName = StaticEnum<EGameUIType>()->GetNameStringByValue(static_cast<int64>(UIType));
	FString Msg = FString::Printf(TEXT("[%s] 블루프린트가 설정되지 않았습니다."), *UIName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Msg);
}

UUserWidget* AGameController::GetGameUIInstance(EGameUIType UIType)
{
	if (UUserWidget** FoundWidget = GameUIInstances.Find(UIType))
	{
		return *FoundWidget;
	}
	return nullptr;
}

void AGameController::Client_ShowGameUI_Implementation(EGameUIType Type)
{
	ShowGameUI(Type); // 
}

void AGameController::Server_StartMiniGame_Implementation(EGameUIType Type)
{
	if (!IsPlayingMiniGame())
	{
		if (Type != EGameUIType::Shop)
		{
			SetIsPlayingMiniGame(true); // 서버에서 상태 설정
		}
		Client_ShowGameUI(Type); // 클라에서 UI 띄움
	}
	else
	{
		if (Type == EGameUIType::Shop)
		{
			Client_ShowGameUI(Type); // 클라에서 UI 띄움
		}
		
	}
}

void AGameController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGameController, bIsPlayingMiniGame);
}

void AGameController::Client_UpdateServiceUI_Implementation(int32 Current, int32 Max)
{
	if (UESServiceGameUI* UI = Cast<UESServiceGameUI>(GetGameUIInstance(EGameUIType::ES_Service)))
	{
		UI->UpdateQuestionText(Current, Max);
	}
}

void AGameController::Client_EndServiceGame_Implementation(bool bWin)
{
	if (UESServiceGameUI* UI = Cast<UESServiceGameUI>(GetGameUIInstance(EGameUIType::ES_Service)))
	{
		UI->EndGame(bWin);
	}
}


void AGameController::Client_UpdateDoctorUI_Implementation(int32 Current)
{
	if (UDoctorUI* UI = Cast<UDoctorUI>(GetGameUIInstance(EGameUIType::JC_Doctor)))
	{
		UI->UpdateQuestionText(Current);
	}
}

void AGameController::Client_EndDoctorGame_Implementation(bool bWin)
{
	if (UDoctorUI* UI = Cast<UDoctorUI>(GetGameUIInstance(EGameUIType::JC_Doctor)))
	{
		UI->EndGame(bWin);
	}
}


void AGameController::Client_UpdateCookUI_Implementation(const TArray<FName>& Recipe)
{
	if (UCookUI* UI = Cast<UCookUI>(GetGameUIInstance(EGameUIType::JC_Cook)))
	{
		UI->UpdateQuestionText(Recipe);
	}
}

void AGameController::Client_EndCookGame_Implementation(bool bWin)
{
	if (UCookUI* UI = Cast<UCookUI>(GetGameUIInstance(EGameUIType::JC_Cook)))
	{
		UI->EndGame(bWin);
	}
}



void AGameController::Server_RequestSpectator_Implementation()
{
	if (!HasAuthority()) return;

	APawn* _OldPawn = GetPawn();
	FVector SpawnLoc = _OldPawn ? _OldPawn->GetActorLocation() : FVector::ZeroVector;

	if (_OldPawn)
	{
		_OldPawn->DetachFromControllerPendingDestroy();
		UnPossess();

		_OldPawn->Destroy();
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetPawn();

	ASpectatorPawn* Spectator = GetWorld()->SpawnActor<ASpectatorPawn>(
		ASpectatorPawn::StaticClass(),
		SpawnLoc,
		FRotator::ZeroRotator,
		SpawnParams
	);

	if (Spectator)
	{
		Possess(Spectator); // 서버에서 Possess

		// SpectatorPawn의 입력을 활성화
		Spectator->EnableInput(this);  // this는 AGameController

		// 입력 모드 및 마우스 커서 설정
		FInputModeGameOnly InputMode;
		SetInputMode(InputMode);
		bShowMouseCursor = false;

		UE_LOG(LogTemp, Warning, TEXT("Successfully possessed SpectatorPawn"));
	}
}


void AGameController::Server_RequestQuitGame_Implementation()
{
	// 여기서 서버가 어떤 검사를 할 수도 있음 (예: 죽은 상태인지 확인)
	Client_QuitGame();  // 클라이언트에게 종료 명령
}

void AGameController::Client_QuitGame_Implementation()
{
	UWorld* World = GetWorld();
	UKismetSystemLibrary::QuitGame(World, this, EQuitPreference::Quit, false);
}

