#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JobCenterUI.h"
#include "JobCenter.generated.h"

UCLASS()
class MYPROJECT_API AJobCenter : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JobCenter, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = JobCenter, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;



public:
	AJobCenter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION()
	//void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	//	int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult);


};
