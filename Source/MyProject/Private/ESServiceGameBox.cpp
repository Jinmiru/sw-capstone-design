// Fill out your copyright notice in the Description page of Project Settings.


#include "ESServiceGameBox.h"
#include "ESServiceGameUI.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"
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
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AESServiceGameBox::OnBeginOverlap);

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


//void AESServiceGameBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//    int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//    if (!HasAuthority()) return; // 서버만 처리
//
//    if (bIsGameRunning)
//        return;
//
//    if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
//    {
//        AController* Controller = Character->GetController();
//        if (Controller)
//        {
//            AGameController* PlayerController = Cast<AGameController>(Controller);
//            if (PlayerController)
//            {
//                if (PlayerController->IsPlayingMiniGame()) return;
//
//                bIsGameRunning = true;
//                CollectedTrashCount = 0;
//
//                PlayerController->Client_ShowGameUI(EGameUIType::ES_Service);
//                PlayerController->Client_UpdateServiceUI(CollectedTrashCount, NumTrashToSpawn); // 추가
//
//
//                SpawnTrashActors();
//                PlayerController->SetIsPlayingMiniGame(true);
//
//            }
//        }
//    }
//}


void AESServiceGameBox::SpawnTrashActors()
{
    if (!TrashActorClass) return;
	//UE_LOG(LogTemp, Warning, TEXT("쓰레기 생성"));
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (!PlayerCharacter) return;
    //UE_LOG(LogTemp, Warning, TEXT("쓰레기 생성2"));

    FVector PlayerLocation = PlayerCharacter->GetActorLocation();
    FVector FloorLocation = FVector(PlayerLocation.X, PlayerLocation.Y, 0.f);
   // UE_LOG(LogTemp, Warning, TEXT("쓰레기 생성3"));

    for (int32 i = 0; i < NumTrashToSpawn+1; ++i)
    {
        float AngleRad = FMath::DegreesToRadians(FMath::FRandRange(0.f, 360.f));
        float Dist = FMath::FRandRange(200.f, SpawnRadius);
        FVector Offset = FVector(FMath::Cos(AngleRad) * Dist, FMath::Sin(AngleRad) * Dist, 0.f);
        FVector SpawnLocation = FloorLocation + Offset + FVector(0.f, 0.f, 200.f);;

        ATrashActor* Trash = Cast<ATrashActor>(
            GetWorld()->SpawnActor<AActor>(TrashActorClass, SpawnLocation, FRotator::ZeroRotator)
        );

        if (Trash)
        {
            UE_LOG(LogTemp, Warning, TEXT("쓰레기 생성 성공 : % d"), i);
            Trash->SetOwningGameBox(this);
        }
    }
}


void AESServiceGameBox::TrashPickedUp()
{
    CollectedTrashCount++;

    UESServiceGameUI* GameUI = nullptr;
    APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (AGameController* PlayerController = Cast<AGameController>(Controller))
    {
        PlayerController->Client_UpdateServiceUI(CollectedTrashCount, NumTrashToSpawn);

    }

    if (CollectedTrashCount >= NumTrashToSpawn)
    {
        UE_LOG(LogTemp, Warning, TEXT("쓰레기 다 주웠음"));

        // 클라이언트에게 UI 종료 요청
        if (AGameController* PlayerController = Cast<AGameController>(UGameplayStatics::GetPlayerController(GetWorld(), 0)))
        {
            PlayerController->Client_EndServiceGame(true);
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
    if (AGameController* PlayerController = Cast<AGameController>(Controller))
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

