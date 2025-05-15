#include "RedZoneCube.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/WidgetComponent.h"
#include "RedZoneUI.h"
#include "MyProject/MyProjectCharacter.h"

ARedZoneCube::ARedZoneCube()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);	// 충돌을 QueryOnly로 설정 (Overlap만 감지, 물리 반응 없음)
	Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);	// 모든 채널에 대해 Overlap 반응으로 설정

}

void ARedZoneCube::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("DynamicMaterial Created1"));

	if (Mesh)
	{
		//UE_LOG(LogTemp, Warning, TEXT("DynamicMaterial Created2"));

		DynamicMaterial = Mesh->CreateAndSetMaterialInstanceDynamic(0);		// 머티리얼 인스턴스를 동적으로 생성
		if (DynamicMaterial)
		{
			// 머티리얼의 OpacityLevel 파라미터를 0으로 설정 (완전 투명)
			//UE_LOG(LogTemp, Warning, TEXT("DynamicMaterial Created3"));
			DynamicMaterial->SetScalarParameterValue(TEXT("OpacityLevel"), 0.0f);
		}
	}
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ARedZoneCube::OnPlayerOverlapBegin);
	Mesh->OnComponentEndOverlap.AddDynamic(this, &ARedZoneCube::OnPlayerOverlapEnd);
	redzoneStart = false; // RedZone 시작 여부 초기화	
	isBlock = false;

}

void ARedZoneCube::UpdateOpacityFromManager(float Alpha)
{
	if (!DynamicMaterial || bHasBlocked) return;
	// 머티리얼이 유효하지 않거나 이미 Block 상태면 리턴

	DynamicMaterial->SetScalarParameterValue(TEXT("OpacityLevel"), Alpha);
	// 머티리얼의 OpacityLevel 파라미터를 설정 (0 ~ 1 사이 값)

}

void ARedZoneCube::ForceBlock(float Duration)
{
	if (bHasBlocked) return;

	FadeDuration = Duration;
	ElapsedFadeTime = 0.0f;
	redzoneStart = true;
	// Tick 활성화
	GetWorld()->GetTimerManager().SetTimer(FadeTimerHandle, this, &ARedZoneCube::UpdateFade, 0.05f, true);
}
void ARedZoneCube::UpdateFade()
{
	if (!DynamicMaterial || bHasBlocked || FadeDuration <= 0.0f)
	{
		GetWorld()->GetTimerManager().ClearTimer(FadeTimerHandle);
		return;
	}

	ElapsedFadeTime += 0.05f;

	float Alpha = FMath::Clamp(ElapsedFadeTime / FadeDuration, 0.0f, 1.0f);
	DynamicMaterial->SetScalarParameterValue(TEXT("OpacityLevel"), Alpha);

	if (Alpha >= 1.0f)
	{
		// 충돌 Block 전환
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
		bHasBlocked = true;

		// 타이머 정지
		GetWorld()->GetTimerManager().ClearTimer(FadeTimerHandle);
		isBlock = true;
	}
}

void ARedZoneCube::OnPlayerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (!redzoneStart || bWidgetShown || !WarningWidgetClass || isBlock) return;

	if (Cast<AMyProjectCharacter>(OtherActor))
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			SpawnedWidget = CreateWidget<UUserWidget>(PC, WarningWidgetClass);
			if (SpawnedWidget)
			{
				SpawnedWidget->AddToViewport();
				bWidgetShown = true;
			}
		}
	}
}

void ARedZoneCube::OnPlayerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!redzoneStart || !bWidgetShown || !SpawnedWidget || isBlock) return;

	if (Cast<AMyProjectCharacter>(OtherActor))
	{
		SpawnedWidget->RemoveFromParent();
		SpawnedWidget = nullptr;
		bWidgetShown = false;
	}
}
