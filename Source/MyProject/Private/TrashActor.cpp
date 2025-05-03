// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashActor.h"
#include "ESServiceGameBox.h"
//#include "MSServiceGameBoxBase.h" //아직 안만듬	
//#include "HSServiceGameBoxBase.h"	//아직 안만듬
#include "MyProject/MyProjectCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATrashActor::ATrashActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootScene;

    bReplicates = true;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
    CollisionBox->SetupAttachment(RootComponent);
    CollisionBox->SetBoxExtent(FVector(60.0f, 60.0f, 60.0f));
    CollisionBox->SetRelativeLocation(FVector(0.0f, 0.0f, 60.0f));
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATrashActor::OnBeginOverlap);
}

// Called when the game starts or when spawned
void ATrashActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrashActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrashActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBoxIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!HasAuthority()) return; // 서버에서만 동작

    if (Cast<ACharacter>(OtherActor))
    {
		//UE_LOG(LogTemp, Warning, TEXT("catch"));
        Pickup();
    }
}

void ATrashActor::Pickup()
{
    if (OwningGameBox)
    {
        // 초등용 박스
        if (AESServiceGameBox* ESBox = Cast<AESServiceGameBox>(OwningGameBox))
        {
            UE_LOG(LogTemp, Warning, TEXT("catchon"));

            ESBox->TrashPickedUp();
        }
        // 중등용 박스
        //else if (AMSServiceGameBoxBase* MSBox = Cast<AMSServiceGameBoxBase>(OwningGameBox))
        //{
        //    MSBox->TrashPickedUp();
        //}
        //// 고등용 박스
        //else if (AHSServiceGameBoxBase* HSBox = Cast<AHSServiceGameBoxBase>(OwningGameBox))
        //{
        //    HSBox->TrashPickedUp();
        //}
    }

    Destroy();
}

void ATrashActor::SetOwningGameBox(AActor* GameBoxActor)
{
    OwningGameBox = GameBoxActor;
}
