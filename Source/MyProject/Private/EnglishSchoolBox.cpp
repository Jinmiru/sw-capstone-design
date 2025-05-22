// Fill out your copyright notice in the Description page of Project Settings.


#include "EnglishSchoolBox.h"
#include "Components/BoxComponent.h"
#include "MyProject/MyProjectCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameController.h"

// Sets default values
AEnglishSchoolBox::AEnglishSchoolBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AEnglishSchoolBox::OnBeginOverlap);

}

// Called when the game starts or when spawned
void AEnglishSchoolBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnglishSchoolBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnglishSchoolBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 코드 내용 작성 필요
}