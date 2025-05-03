#include "JobCenter.h"
#include "Components/BoxComponent.h"
#include "MyProject/MyProjectCharacter.h"
#include "GameController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "JobCenterUI.h"

AJobCenter::AJobCenter()
{
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->SetBoxExtent(FVector(80.0f, 80.0f, 80.0f));
	CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 120.0f));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AJobCenter::OnBeginOverlap);
}

void AJobCenter::BeginPlay()
{
	Super::BeginPlay();
}

void AJobCenter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AJobCenter::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority()) return;  // 서버만 처리
	//UE_LOG(LogTemp, Warning, TEXT("Overlap with Job Center1")); // 디버깅용 로그 출력


	if (AMyProjectCharacter* Character = Cast<AMyProjectCharacter>(OtherActor))
	{
		AController* Controller = Character->GetController();
		AGameController* PlayerController = Cast<AGameController>(Controller);	
		

		if (PlayerController && !PlayerController->IsPlayingMiniGame())
		{
			//UE_LOG(LogTemp, Warning, TEXT("Overlap with Job Center3")); // 디버깅용 로그 출력
			PlayerController->SetIsPlayingMiniGame(true); // 서버에서 상태 설정
			PlayerController->Client_ShowGameUI(EGameUIType::JobCenter); // 클라에서 UI 띄움
		}
	}
}
