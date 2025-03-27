// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HSServiceGameBoxBase.h"
#include "HSServiceGameGoalBox.generated.h"

class UBoxComponent;
class AHSServiceGameStartBox;

UCLASS()
class LIFEGAMEPROJECT_API AHSServiceGameGoalBox : public AHSServiceGameBoxBase
{
	GENERATED_BODY()

public:
    AHSServiceGameGoalBox();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GoalBox, meta = (AllowPrivateAccess = "true"))
    USceneComponent* RootScene;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GoalBox, meta = (AllowPrivateAccess = "true"))
    UBoxComponent* CollisionBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GoalBox, meta = (AllowPrivateAccess = "true"))
    AHSServiceGameStartBox* LinkedStartBox;
	
};
