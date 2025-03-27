// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HSServiceGameBoxBase.h"
#include "HSServiceGameStartBox.generated.h"

UCLASS()
class LIFEGAMEPROJECT_API AHSServiceGameStartBox : public AHSServiceGameBoxBase
{
	GENERATED_BODY()

public:
    AHSServiceGameStartBox();

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
