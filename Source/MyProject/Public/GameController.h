// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"
#include "GameController.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EGameUIType : uint8
{
	ES_Math,
	ES_Dictation,
	ES_ImageQuiz,
	ES_Service,
	ES_Running,
	MS_Math,
	MS_English,
	MS_ImageQuiz,
	MS_Service,
	HS_Math,
	HS_Quiz,
	HS_ImageQuiz,
	HS_Service,
	JobCenter,
	//6개 직업
	Police,
	Cook,
	Boxer,
	Doctor,
	Artist,
	Shop,
	JC_Artist,
	JC_Cook,
	JC_Doctor,

	//취직
	SUCCES,

	
};

USTRUCT(BlueprintType)
struct FGameUIInfo
{
	GENERATED_BODY()

	UPROPERTY()
	UUserWidget* WidgetInstance = nullptr;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass = nullptr;
};

UCLASS()
class MYPROJECT_API AGameController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	// 수업(미니게임) 중복 실행 방지 함수, 현재 미니게임이 실행중인지 여부 확인
	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	bool IsPlayingMiniGame() const;
	

	//서버에서 실행되는 함수              클라이언트가 호출 -> 서버에서 검증 -> SetISPlayingMiniGame 실행
	UFUNCTION(BlueprintCallable, Category = "MiniGame")
	void SetIsPlayingMiniGame(bool bPlaying);

	UFUNCTION(Server, Reliable, WithValidation)  //서버가 클라이언트에게 UI를 표시하도록 요청할	때 사용
	void Server_SetIsPlayingMiniGame(bool bPlaying);

	UFUNCTION(Client, Reliable)		//서버가 클라이언트에게 UI를 표시하도록 요청할 때 사용
	void Client_ShowGameUI(EGameUIType Type);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StartMiniGame(EGameUIType Type);

	//UI 표시 및 숨기 함수
	UFUNCTION(BlueprintCallable)
	void ShowGameUI(EGameUIType UIType);

	//클라이언트용 UI 업데이트 함수
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_UpdateServiceUI(int32 Current, int32 Max);


	UFUNCTION(BlueprintCallable)
	void HideGameUI(EGameUIType UIType);

	UFUNCTION(BlueprintCallable, Category = "UI")	//이미 생성된 UI 인스턴스 반환
	UUserWidget* GetGameUIInstance(EGameUIType UIType);

	// 복제할 변수 등록
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// 쓰레기 줍기 게임 종료시 함수
	UFUNCTION(Client, Reliable)
	void Client_EndServiceGame(bool bWin);


	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_UpdateDoctorUI(int32 Current);

	UFUNCTION(Client, Reliable)
	void Client_EndDoctorGame(bool bWin);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_UpdateCookUI(const TArray<FName>& Recipe);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_EndCookGame(bool bWin);

	UFUNCTION(Server, Reliable)
	void Server_RequestSpectator();

	/// 옵션
	UFUNCTION(Server, Reliable)
	void Server_RequestQuitGame();

	UFUNCTION(Client, Reliable)
	void Client_QuitGame();




protected:
	// UI 종류별로 사용할 위젯 클래스를 저장
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TMap<EGameUIType, TSubclassOf<UUserWidget>> GameUIClasses;



private:
	// 실제 생성된 위젯 인스턴스를 저장
	TMap<EGameUIType, UUserWidget*> GameUIInstances;

	UPROPERTY(Replicated, VisibleAnywhere, Category = "MiniGame")
	bool bIsPlayingMiniGame = false;

	//미등록 UI 블루프린트 로그
	void LogMissingBlueprint(EGameUIType UIType);
};
