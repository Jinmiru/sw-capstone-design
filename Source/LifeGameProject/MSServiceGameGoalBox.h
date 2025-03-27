// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSServiceGameBoxBase.h"
#include "MSServiceGameGoalBox.generated.h"

class UBoxComponent;
class AMSServiceGameStartBox;

UCLASS()
class LIFEGAMEPROJECT_API AMSServiceGameGoalBox : public AMSServiceGameBoxBase
{
    GENERATED_BODY()

public:
    AMSServiceGameGoalBox();

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
    AMSServiceGameStartBox* LinkedStartBox;
};
