// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Logging/LogMacros.h"
#include "MyProjectCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

USTRUCT(BlueprintType)
struct FCharacterRuntimeData
{
	GENERATED_BODY()

	UPROPERTY()
	int32 Save_HP;

	UPROPERTY()
	int32 Save_JobSkill;

	UPROPERTY()
	int32 Save_Age;

	UPROPERTY()
	int32 Save_Physical;   // 신체능력
	UPROPERTY()
	int32 Save_Sensory;    // 감각 능력
	UPROPERTY()
	int32 Save_Logic;             // 논리력
	UPROPERTY()
	int32 Save_Linguistic;        // 언어력
	UPROPERTY()
	int32 Save_SocialSkill;       // 사회성
	UPROPERTY()
	int32 Save_MentalStrength;    // 정신력
	UPROPERTY()
	int32 Save_money;             // 돈

};


UCLASS(config=Game)
class AMyProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DashAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill5;



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* levelup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* printAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* inventoryAction;

	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
	TSubclassOf<APawn> BP_PoliceClass;





public:

	//	데이터 로드 and 세이브
	FCharacterRuntimeData SaveCurrentState() const;
	void LoadStateFromStruct(const FCharacterRuntimeData& Data);



	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	AMyProjectCharacter();

	UPROPERTY(EditAnywhere, Category = LevelupEffect)
	class UParticleSystem* LevelupEffect;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshComponent;// 무기 매시

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Age;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 HP_Player=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 iniitialHP = 100;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent(); // 기본 공격 이벤트

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent2(); // 스킬 공격 이벤트

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* HitEffect; // 공격 이펙트

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DashMontage;

	UPROPERTY()
	AActor* EquippedWeaponActor = nullptr;//장착 무기 초기화
	
	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* NiagaraComp;


	int32 Physical;   // 신체능력
	int32 Sensory;    // 감각 능력
	int32 Logic;             // 논리력
	int32 Linguistic;        // 언어력
	int32 SocialSkill;       // 사회성
	int32 MentalStrength;    // 정신력
	int32 money;             // 돈

	int32 Power; // 공격력

	float AttackRange; // 공격	범위

	FTimerHandle MoneyTimerHandle;  // 타이머 핸들

	bool middle;
	bool high;

	int32 jobskill = 0; // 직업 스킬 초기화

	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* NiagaraSystem; // 대쉬이펙트 저장소
	

	int32 GetHighestStatName();// 능력치 중 가장 높은 능력치 수련도 반환

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UStatusWidget> BP_StatusWidget; //기본 UI 위젯 클래스

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHPWidget> BP_HPWidget; //HP 위젯 클래스

	
	UFUNCTION()
	void DisablePlayerMovement();//스턴시작

	UFUNCTION()
	void EnablePlayerMovement();//스턴 끝

	UFUNCTION()
	void Stun();//스턴

	UFUNCTION()
	void Skill_DashStun(float DashPower = 500.f); //대쉬 스턴

	UFUNCTION()
	void DashStun_CheckHit(); //대쉬 스턴

	UFUNCTION()
	void UnfreezeMovement(); //스킬 정지 해제




protected:

	virtual void BeginPlay();
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	void Attack(const FInputActionValue& Value);	//기본 공격

	void PlusAge(const FInputActionValue& Value);		//나이먹기

	void Print(const FInputActionValue& Value);		// 능력치 출력

	void Inventory(const FInputActionValue& Value);	// 인벤토리

	void ChangeJobSkill1();// 직업 변경
	void ChangeJobSkill2();// 직업 변경
	void ChangeJobSkill3();// 직업 변경
	void ChangeJobSkill4();// 직업 변경
	void ChangeJobSkill5();// 직업 변경

	void SkillAttack1();// 직업 변경
	void SkillAttack2();// 직업 변경
	void SkillAttack3();// 직업 변경
	void SkillAttack4();// 직업 변경
	void SkillAttack5();// 직업 변경

	void SkillAttack();

	float DashChargeStartTime = 0.f;// 차징 시간

	void StartDashCharge();   // 차장 시작
	void ReleaseDashCharge(); // 차징 발사

	void IncreaseMoney();  // 돈 증가 함수

	void SpawnNiagara(const FString& NiagaraPath, const FVector& Direction, const FVector& Scale, float Duration); // 나이아가라 이펙트 생성
	void HealEffect(); // 힐 이펙트

	void Dash(); // 대쉬
	void StopDash(); // 대쉬 멈추기
	
	void ChangeProfile(const FString& TextureAssetPath, const FString& name);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Player_Setting();


private:
	UPROPERTY()
	class UStatusWidget* HUDWidget;

	UPROPERTY()
	class UHPWidget* HPWidget;

	void UpdateStatus();

	bool bCanDash = true;
	FTimerHandle DashTimerHandle; // 대시 타이머
	FTimerHandle DashCooldownTimerHandle; // 쿨다운 타이머

	FTimerHandle ConeDamageTimerHandle;//화염방사 대미지 타이머

	FTimerHandle ChargeEffectTimerHandle;//차징 이펙트 타이머

	int32 CurrentTick = 0;
	void ApplyConeDamageTick(); //화염방사 대미지

	void SpawnChargeEffect(); // 복서 차징 이펙트

	// 힐 스킬-------------------------------------
	FTimerHandle Skill2TimerHandle;
	int32 Skill2SpawnCount = 0;
	FTimerHandle PaintTimerHandle;


	UFUNCTION(BlueprintCallable)
	void SkillOn(const FString& NiagaraPath);

	void EquipWeaponWithEffect(const FString& NiagaraPath, const FString& SkiilEffectPath); //직업 전직 대쉬이펙트 & 무기 장착

	void StartCooldown(float CooldownTime);
	void UpdateCooldownProgress();

	float SkillCooldownDuration;
	float SkillCooldownElapsed;

	FTimerHandle CooldownTimerHandle;//스킬 쿨타임

	bool bCanUseSkill = true; //스킬 재사용 금지

	void SwapToNewCharacter(const FString& BlueprintPath);
	

	//멀티 플레이 위한 추가
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SwapToNewCharacter(const FString& BlueprintPath);

	void Server_SwapToNewCharacter_Implementation(const FString& BlueprintPath);
	bool Server_SwapToNewCharacter_Validate(const FString& BlueprintPath) { return true; }


};

