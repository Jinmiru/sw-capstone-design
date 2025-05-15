// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Components/AudioComponent.h"
#include "StatusWidget.h"
// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 컴포넌트 생성
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(RootComponent);
	AudioComponent->bAutoActivate = false; // 자동 재생 방지
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


void AGameManager::lobby() //로비 시작
{
	//시네마틱 영상 재생


}

void AGameManager::Start() //초등학생 시작
{
	if (SoundToPlay1)
	{
		AudioComponent->SetSound(SoundToPlay1);
		AudioComponent->Play();
		StatusWidget->changeUI();
	}
}

void AGameManager::middle() //성인 시작
{
	if (SoundToPlay2)
	{
		AudioComponent->SetSound(SoundToPlay2);
		AudioComponent->Play();
		StatusWidget->changeUI();
	}
}

void AGameManager::end() //자기장 시작
{
	if (SoundToPlay3)
	{
		AudioComponent->SetSound(SoundToPlay3);
		AudioComponent->Play();
		StatusWidget->changeUI();
	}
}

