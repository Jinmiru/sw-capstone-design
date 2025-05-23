// Fill out your copyright notice in the Description page of Project Settings.


#include "LibraryBox.h"
#include "LibraryUI.h"
#include "BookActor.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALibraryBox::ALibraryBox()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));

    NumBookToSpawn = 10;                       // 기본값 설정, 쓰레기 생성 개수
    SpawnRadius = 500.0f;                       // 기본값 설정, 쓰레기 스폰 범위
    CollectedBookCount = 0;                    // 주운 쓰레기 개수 초기화

    bIsGameRunning = false;                     // 게임 진행 상태 초기화

}

// Called when the game starts or when spawned
void ALibraryBox::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ALibraryBox::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ALibraryBox::SpawnBookActors()
{
    if (!BookActorClass) return;

    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter) return;

    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (AGameController* PlayerController = Cast<AGameController>(Controller))
    {
        PlayerController->Client_UpdateLibraryUI(CollectedBookCount, NumBookToSpawn);

    }

    FVector PlayerLocation = PlayerCharacter->GetActorLocation();

    for (int32 i = 0; i < NumBookToSpawn + 10; ++i)
    {
        float AngleRad = FMath::DegreesToRadians(FMath::FRandRange(0.f, 360.f));
        float Dist = FMath::FRandRange(200.f, SpawnRadius);
        FVector Offset = FVector(FMath::Cos(AngleRad) * Dist, FMath::Sin(AngleRad) * Dist, 0.f);
        FVector Origin = PlayerLocation + Offset + FVector(0.f, 0.f, 300.f);
        FVector End = Origin - FVector(0.f, 0.f, 1000.f); // 아래로 1000만큼 추적

        FHitResult HitResult;
        FCollisionQueryParams Params;
        Params.AddIgnoredActor(this);

        bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Origin, End, ECC_Visibility, Params);

        if (bHit)
        {
            FVector SpawnLocation = HitResult.Location + FVector(0.f, 0.f, 10.f); // 바닥 위로 살짝 띄우기
            ABookActor* Book = Cast<ABookActor>(
                GetWorld()->SpawnActor<AActor>(BookActorClass, SpawnLocation, FRotator::ZeroRotator)
            );

            if (Book)
            {
                UE_LOG(LogTemp, Warning, TEXT("책 생성 성공 : %d"), i);
                Book->SetOwningGameBox(this);
            }
        }
    }
}


void ALibraryBox::BookPickedUp()
{
    CollectedBookCount++;

    ULibraryUI* GameUI = nullptr;
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (AGameController* PlayerController = Cast<AGameController>(Controller))
    {
        PlayerController->Client_UpdateLibraryUI(CollectedBookCount, NumBookToSpawn);

    }

    if (CollectedBookCount >= NumBookToSpawn)
    {

        TArray<AActor*> BookActors;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), BookActorClass, BookActors);
        for (AActor* Book : BookActors)
        {
            Book->Destroy();
        }

        // 클라이언트에게 UI 종료 요청
        if (AGameController* PlayerController = Cast<AGameController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)))
        {
            PlayerController->Client_EndLibraryGame(true);
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

ULibraryUI* ALibraryBox::GetLibraryUI()
{
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (AGameController* PlayerController = Cast<AGameController>(Controller))
    {
        UUserWidget* Widget = PlayerController->GetGameUIInstance(EGameUIType::ES_Service);
        return Cast<ULibraryUI>(Widget);
    }
    return nullptr;
}

void ALibraryBox::CancelGame()
{
    TArray<AActor*> BookActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), BookActorClass, BookActors);
    for (AActor* Book : BookActors)
    {
        Book->Destroy();
    }

    FTimerHandle ResetStateHandle;
    GetWorld()->GetTimerManager().SetTimer(ResetStateHandle, FTimerDelegate::CreateLambda([this]()
        {
            bIsGameRunning = false;
            CollectedBookCount = 0;
        }), 2.0f, false);
}