#include "PainterUI.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameController.h"
#include "MyProject/MyProjectCharacter.h"


void UPainterUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (PaintProgressBar)
		PaintProgressBar->SetPercent(PaintAmount);

	if (BrushColorBlack)
	{
		BrushColorBlack->OnClicked.AddDynamic(this, &UPainterUI::SelectBlackBrush);
	}
	if (BrushColorRed)
	{
		BrushColorRed->OnClicked.AddDynamic(this, &UPainterUI::SelectRedBrush);
	}
	if (BrushColorGreen)
	{
		BrushColorGreen->OnClicked.AddDynamic(this, &UPainterUI::SelectGreenBrush);
	}
	if (BrushColorBlue)
	{
		BrushColorBlue->OnClicked.AddDynamic(this, &UPainterUI::SelectBlueBrush);
	}

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UPainterUI::OnCloseClicked);
	}


}

FReply UPainterUI::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		bIsDrawing = true;
		LastDrawPosition = GetMouseLocalPosition(); 
		SpawnBrushDot(LastDrawPosition);
		ConsumePaint();
		return FReply::Handled();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

FReply UPainterUI::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		bIsDrawing = false;
		return FReply::Handled();
	}
	return Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);
}

void UPainterUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!bIsDrawing || !BrushTexture || !PaintCanvas) return;

	FVector2D CurrentPos = GetMouseLocalPosition();
	if (CurrentPos.IsZero()) return; // 좌표가 유효하지 않으면 그리기 스킵
	if (!IsMouseInsidePaintCanvas())
	{
		return; // 캔버스 밖이면 그리기 무시
	}

	const float Distance = FVector2D::Distance(LastDrawPosition, CurrentPos);
	if (Distance > 1.0f)
	{
		const int NumSteps = FMath::CeilToInt(Distance / 2.0f);
		for (int i = 1; i <= NumSteps; ++i)
		{
			FVector2D StepPos = FMath::Lerp(LastDrawPosition, CurrentPos, i / (float)NumSteps);
			SpawnBrushDot(StepPos);
			ConsumePaint();
		}
		LastDrawPosition = CurrentPos;
	}
}

FVector2D UPainterUI::GetMouseLocalPosition()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (!PC) return FVector2D::ZeroVector;

	float ScreenX, ScreenY;
	if (!PC->GetMousePosition(ScreenX, ScreenY))
		return FVector2D::ZeroVector;

	if (PaintCanvas)
	{
		return PaintCanvas->GetCachedGeometry().AbsoluteToLocal(FVector2D(ScreenX, ScreenY));
	}

	return FVector2D::ZeroVector;
}


void UPainterUI::SpawnBrushDot(const FVector2D& Pos)
{
	if (!BrushTexture || !PaintCanvas) return;

	UImage* Dot = NewObject<UImage>(this);
	const FVector2D BrushSize = FVector2D(16, 16); // 또는 BrushTexture->GetSurfaceWidth/Height

	Dot->SetBrushFromTexture(BrushTexture);
	Dot->SetBrushSize(BrushSize);
	Dot->SetColorAndOpacity(CurrentBrushColor);

	PaintCanvas->AddChild(Dot);
	UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Dot->Slot);
	if (CanvasSlot)
	{
		CanvasSlot->SetAutoSize(true);
		CanvasSlot->SetPosition(Pos + FVector2D(0.f,150.f)); // 정확히 중심 맞춤
	}
}

void UPainterUI::SpawnBrushLine(const FVector2D& From, const FVector2D& To)
{
	// 간단하게 Dot를 쭉 찍어서 선처럼 보이게
	const float StepSize = 8.0f;
	FVector2D Dir = To - From;
	float Length = Dir.Size();
	Dir.Normalize();

	for (float i = 0; i < Length; i += StepSize)
	{
		FVector2D Pos = From + Dir * i;
		SpawnBrushDot(Pos);
	}
}

void UPainterUI::ConsumePaint()
{
	PaintAmount -= PaintUsagePerStroke;
	PaintAmount = FMath::Clamp(PaintAmount, 0.0f, 1.0f);

	if (PaintProgressBar)
		PaintProgressBar->SetPercent(PaintAmount);

	if (PaintAmount <= 0.0f)
	{
		FinishMission();
	}
}

bool UPainterUI::IsMouseInsidePaintCanvas()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (!PC || !PaintCanvas) return false;

	float ScreenX, ScreenY;
	if (!PC->GetMousePosition(ScreenX, ScreenY)) return false;

	FGeometry CanvasGeo = PaintCanvas->GetCachedGeometry();
	FVector2D LocalPos = CanvasGeo.AbsoluteToLocal(FVector2D(ScreenX, ScreenY));
	FVector2D Size = CanvasGeo.GetLocalSize();

	return (LocalPos.X >= 0 && LocalPos.X <= Size.X && LocalPos.Y >= 0 && LocalPos.Y <= Size.Y);
}




void UPainterUI::FinishMission()
{
	AGameController* PC = Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));
	if (PC)
	{
		PC->SetIsPlayingMiniGame(false);
		PC->HideGameUI(EGameUIType::JC_Artist);

		AController* Controller = GetOwningPlayer();
		if (!Controller)
			return;
		AGameController* PlayerController = Cast<AGameController>(Controller);
		PlayerController->Server_SetJobSuccess(true);
	}
}


void UPainterUI::OnCloseClicked()
{
	AGameController* PlayerController =
		Cast<AGameController>(UGameplayStatics::GetPlayerController(this, 0));

	if (PlayerController)
	{
		PlayerController->Server_SetIsPlayingMiniGame(false);
		PlayerController->HideGameUI(EGameUIType::JC_Artist);
	}
}