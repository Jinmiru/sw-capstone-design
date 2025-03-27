// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSServiceGameBoxBase.h"
#include "MSServiceGameStartBox.generated.h"

UCLASS()
class LIFEGAMEPROJECT_API AMSServiceGameStartBox : public AMSServiceGameBoxBase
{
    GENERATED_BODY()

public:
    AMSServiceGameStartBox();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
    class USceneComponent* RootScene;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MathGameBox, meta = (AllowPrivateAccess = "true"))
    class UBoxComponent* CollisionBox;

};

