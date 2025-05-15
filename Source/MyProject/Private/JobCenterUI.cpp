// Fill out your copyright notice in the Description page of Project Settings.


#include "JobCenterUI.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"

void UJobCenterUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UJobCenterUI::OnCloseClicked);
	}

	if (PoliceButton)
	{
		PoliceButton->OnClicked.AddDynamic(this, &UJobCenterUI::PoliceMission);
	}
	if (CookButton)
	{
		CookButton->OnClicked.AddDynamic(this, &UJobCenterUI::CookMission);
	}
	if (BoxerButton)
	{
		BoxerButton->OnClicked.AddDynamic(this, &UJobCenterUI::BoxerMission);
	}
	if (DoctorButton)
	{
		DoctorButton->OnClicked.AddDynamic(this, &UJobCenterUI::DoctorMission);
	}
	if (ArtistButton)
	{
		ArtistButton->OnClicked.AddDynamic(this, &UJobCenterUI::ArtistMission);
	}


}


void UJobCenterUI::PoliceMission()
{
	//UE_LOG(LogTemp, Warning, TEXT("Police"));

	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	PlayerController->HideGameUI(EGameUIType::JobCenter);


	if (PlayerController)
	{
			if (PlayerController)
			{

				//UE_LOG(LogTemp, Warning, TEXT("Police"));
				PlayerController->SetIsPlayingMiniGame(true);
				PlayerController->Client_ShowGameUI(EGameUIType::Police);
			}
		
	}
}

void UJobCenterUI::CookMission()
{
	job = EJobType::Cook;
	AGameController* PlayerController = Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (!PlayerController) return;

	PlayerController->HideGameUI(EGameUIType::JobCenter);
	PlayerController->ShowGameUI(EGameUIType::JC_Cook);

	// 아이템 데이터 테이블 접근
	if (!ItemDataTable) return;

	TArray<FName> FoodRowNames;

	for (const auto& Row : ItemDataTable->GetRowMap())
	{
		FName RowName = Row.Key;
		FString RowString = RowName.ToString();

		// RowName에 "Food" 포함되어 있으면 추가
		if (RowString.Contains("Food"))
		{
			FoodRowNames.Add(RowName);
		}
	}

	// 랜덤하게 3개 재료 선택
	while (RecipeIngredients.Num() < 3 && FoodRowNames.Num() > 0)
	{
		int32 Index = FMath::RandRange(0, FoodRowNames.Num() - 1);
		RecipeIngredients.Add(FoodRowNames[Index]);
		FoodRowNames.RemoveAt(Index);
	}
	PlayerController->Client_UpdateCookUI(RecipeIngredients);
}
void UJobCenterUI::BoxerMission()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	PlayerController->HideGameUI(EGameUIType::JobCenter);


	if (PlayerController)
	{
		if (PlayerController)
		{

			//UE_LOG(LogTemp, Warning, TEXT("Boxer"));
			PlayerController->SetIsPlayingMiniGame(true);
			PlayerController->Client_ShowGameUI(EGameUIType::Boxer);
		}

	}
}
void UJobCenterUI::DoctorMission()
{
	job = EJobType::Doctor;
	UE_LOG(LogTemp, Warning, TEXT("DoctorMission"));
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	// 1. 플레이어 상태 설정
	PlayerController->SetIsPlayingMiniGame(true);
	PlayerController->HideGameUI(EGameUIType::JobCenter);
	PlayerController->ShowGameUI(EGameUIType::JC_Doctor);



	TArray<AActor*> AllPoints;
	UGameplayStatics::GetAllActorsWithTag(this, FName("PatientSpawn"), AllPoints);

	if (AllPoints.Num() < 3) return;

	// 랜덤으로 3개 선택
	TArray<AActor*> SelectedPoints;
	while (SelectedPoints.Num() < 3)
	{
		int32 Index = FMath::RandRange(0, AllPoints.Num() - 1);
		AActor* Point = AllPoints[Index];
		if (!SelectedPoints.Contains(Point))
		{
			SelectedPoints.Add(Point);
		}
	}
	// NPC 스폰 및 저장
	UWorld* World = GetWorld();
	for (AActor* SpawnPoint : SelectedPoints)
	{
		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();

		AActor* NPC = World->SpawnActor<AActor>(PatientClass, Location, Rotation);
		if (NPC)
		{
			SpawnedPatients.Add(NPC);
		}
	}
	PlayerController->Client_UpdateDoctorUI(SpawnedPatients.Num());

}

void UJobCenterUI::OnPatientInteracted(AActor* Patient)
{
	SpawnedPatients.Remove(Patient);
	Patient->Destroy();

	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	PlayerController->Client_UpdateDoctorUI(SpawnedPatients.Num());

	if (SpawnedPatients.Num() == 0)
	{
		// 미션 완료
		AGameController* PC = Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
		if (PC)
		{
			PC->SetIsPlayingMiniGame(false);
			PC->Client_EndDoctorGame(true);
		}
	}
}


void UJobCenterUI::ArtistMission()
{
	job = EJobType::Artist;
	AGameController* PC =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PC)
	{
		PC->HideGameUI(EGameUIType::JobCenter);
		PC->ShowGameUI(EGameUIType::JC_Artist);
	}
}



void UJobCenterUI::OnCloseClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Close Button Clicked"));
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	if (PlayerController)
	{
		PlayerController->Server_SetIsPlayingMiniGame(false);
		PlayerController->HideGameUI(EGameUIType::JobCenter);
	}
}