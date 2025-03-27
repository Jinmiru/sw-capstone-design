// Fill out your copyright notice in the Description page of Project Settings.


#include "ESServiceGameBox.h"
#include "ESServiceGameUI.h"
#include "LifeGameProjectPlayerController.h"
#include "LifeGameProjectCharacter.h"
#include "TrashActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AESServiceGameBox::AESServiceGameBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AESServiceGameBox::OnBeginOverlap);

    NumTrashToSpawn = 10;                       // 기본값 설정, 쓰레기 생성 개수
    SpawnRadius = 500.0f;                       // 기본값 설정, 쓰레기 스폰 범위
    CollectedTrashCount = 0;                    // 주운 쓰레기 개수 초기화

    bIsGameRunning = false;                     // 게임 진행 상태 초기화

}

// Called when the game starts or when spawned
void AESServiceGameBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AESServiceGameBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AESServiceGameBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (bIsGameRunning)
        return;

    if (ALifeGameProjectCharacter* Character = Cast<ALifeGameProjectCharacter>(OtherActor))
    {
        AController* Controller = Character->GetController();
        if (Controller)
        {
            ALifeGameProjectPlayerController* PlayerController = Cast<ALifeGameProjectPlayerController>(Controller);
            if (PlayerController)
            {
                if (PlayerController->IsPlayingMiniGame()) return;

                bIsGameRunning = true;
                CollectedTrashCount = 0;

                PlayerController->ShowGameUI(EGameUIType::ES_Service);
                PlayerController->SetIsPlayingMiniGame(true);

                if (UESServiceGameUI* ServiceUI = GetServiceGameUI())
                {
                    ServiceUI->UpdateQuestionText(CollectedTrashCount, NumTrashToSpawn);
                }

                SpawnTrashActors();
            }
        }
    }
}


void AESServiceGameBox::SpawnTrashActors()
{
    if (!TrashActorClass) return;

    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter) return;

    FVector PlayerLocation = PlayerCharacter->GetActorLocation();
    FVector FloorLocation = FVector(PlayerLocation.X, PlayerLocation.Y, 0.f);

    for (int32 i = 0; i < NumTrashToSpawn; ++i)
    {
        float AngleRad = FMath::DegreesToRadians(FMath::FRandRange(0.f, 360.f));
        float Dist = FMath::FRandRange(200.f, SpawnRadius);
        FVector Offset = FVector(FMath::Cos(AngleRad) * Dist, FMath::Sin(AngleRad) * Dist, 0.f);
        FVector SpawnLocation = FloorLocation + Offset;

        ATrashActor* Trash = Cast<ATrashActor>(
            GetWorld()->SpawnActor<AActor>(TrashActorClass, SpawnLocation, FRotator::ZeroRotator)
        );

        if (Trash)
        {
            Trash->SetOwningGameBox(this);
        }
    }
}


void AESServiceGameBox::TrashPickedUp()
{
    CollectedTrashCount++;

    UESServiceGameUI* GameUI = nullptr;
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (ALifeGameProjectPlayerController* PlayerController = Cast<ALifeGameProjectPlayerController>(Controller))
    {
        GameUI = Cast<UESServiceGameUI>(PlayerController->GetGameUIInstance(EGameUIType::ES_Service));
        if (GameUI)
        {
            GameUI->UpdateQuestionText(CollectedTrashCount, NumTrashToSpawn);
        }
    }

    if (CollectedTrashCount >= NumTrashToSpawn)
    {
        if (UESServiceGameUI* ServiceUI = GetServiceGameUI())
        {
            ServiceUI->EndGame(true); // 성공 처리
        }

        FTimerHandle EndGameTimerHandle;
        GetWorld()->GetTimerManager().SetTimer(
            EndGameTimerHandle,
            FTimerDelegate::CreateLambda([this]()
                {
                    bIsGameRunning = false;
                }),
            2.0f,
            false
        );
    }
}

UESServiceGameUI* AESServiceGameBox::GetServiceGameUI()
{
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (ALifeGameProjectPlayerController* PlayerController = Cast<ALifeGameProjectPlayerController>(Controller))
    {
        UUserWidget* Widget = PlayerController->GetGameUIInstance(EGameUIType::ES_Service);
        return Cast<UESServiceGameUI>(Widget);
    }
    return nullptr;
}

void AESServiceGameBox::CancelGame()
{
    // 흩뿌려진 쓰레기 제거
    TArray<AActor*> TrashActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), TrashActorClass, TrashActors);
    for (AActor* Trash : TrashActors)
    {
        Trash->Destroy();
    }

    FTimerHandle ResetStateHandle;
    GetWorld()->GetTimerManager().SetTimer(ResetStateHandle, FTimerDelegate::CreateLambda([this]()
        {
            bIsGameRunning = false;
            CollectedTrashCount = 0;
        }), 2.0f, false);
}
