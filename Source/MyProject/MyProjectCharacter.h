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
	int32 Save_HP=0;

	UPROPERTY()
	int32 Save_JobSkill=0;

	UPROPERTY()
	int32 Save_Age=0;

	UPROPERTY()
	int32 Save_Physical=0;   //신체능력
	UPROPERTY()
	int32 Save_Sensory=0;    // 감각능력
	UPROPERTY()
	int32 Save_Logic=0;             // 논리력
	UPROPERTY()
	int32 Save_Linguistic=0;        // 언어력
	UPROPERTY()
	int32 Save_SocialSkill=0;       // 사회성
	UPROPERTY()
	int32 Save_MentalStrength=0;    // 정신력
	UPROPERTY()
	int32 Save_money=0;             // 돈

};

UENUM(BlueprintType)	// 미션 클리어시 능력치 상승떄 적용
enum class EPlayerStatType : uint8
{
	PhysicalStatus, //신체능력
	SensoryStatus,	//예술
	LogicStatus,	//수학
	LinguisticStatus,//국어
	SocialSkillStatus,//사회
	MentalStrengthStatus,//정신력
	AgeStatus
};

UCLASS(config = Game)
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
	UInputAction* ChangeJob6;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ChangeJob7;


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


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* UpadateUIAction;


public:

	//	데이터 로드 and 세이브
	FCharacterRuntimeData SaveCurrentState() const;

	UFUNCTION(BlueprintCallable)
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



	UPROPERTY(ReplicatedUsing = OnRep_HPChanged, EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 HP_Player; //동기화할 변수 마킹 작업

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 iniitialHP = 100;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent(); // 멀티 기본공격 이벤트

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent2(); // 멀티X 기본공격 이벤트

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* HitEffect; // 기본 공격 맞을경우 이펙트

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DashMontage;

	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* NiagaraComp;


	//-------------------스텟 멀티 설정-------------------
	UPROPERTY(Replicated)
	int32 Age;
	UPROPERTY(Replicated)
	int32 jobskill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite ,Replicated)
	int32 money;
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Physical;   // 신체능력
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Sensory;    // 감각 능력
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Logic;             // 논리력
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Linguistic;        // 언어력
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 SocialSkill;       // 사회성
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 MentalStrength;    // 정신력
	UPROPERTY(Replicated)
	bool bCanDash;

	UPROPERTY(ReplicatedUsing = OnRep_NiagaraSystem, EditDefaultsOnly)
	UNiagaraSystem* NiagaraSystem; // 대쉬이펙트 저장소
	void UPdateUI();

	//=========레벨업
	FTimerHandle TimerHandle_PlusAge;

	//-------------------스텟 멀티 설정 함수-------------------

	void ServerPlusAge_Implementation();
	bool ServerPlusAge_Validate() {
		return true;
	}
	//-------------------playersetting 멀티 설정 함수-------------------

	void Player_Setting();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Player_Setting();

	//------------------직업 변경--------------------
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerChangeJobSkill(int32 changeJobSkill);
	void ServerChangeJobSkill_Implementation(int32 changeJobSkill);
	bool ServerChangeJobSkill_Validate(int32 changeJobSkill) { return true; }

	UFUNCTION()
	void OnRep_JobSkill();


	//--------------------------------------
	// RPC TEST add
	void RequestAttack();

	void RequestDash();

	void RequestWeaponUpdate();

	void PerformDash();

	void PerformAttack();

	// RPC END
	//--------------skill 멀티------------------------
	UFUNCTION(Server, Reliable)//요리사
		void Server_SkillAttack1();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillAttack1();

	void StartSkill1DamageTick();


	void ApplySkillDamage(float DamageAmount, AMyProjectCharacter* DamageCauser);


	UFUNCTION(Server, Reliable)//의사
		void Server_SkillAttack2();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillAttack2();


	UFUNCTION(Server, Reliable)//경찰
		void Server_SkillAttack3();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillAttack3();

	void ExecuteSkillAttack3(); // 내부 전용 (UFUNCTION 아님)


	UFUNCTION(Server, Reliable) // 화가
		void Server_SkillAttack5();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillAttack5();

	void ExecuteSkillAttack5();
	//============================================================================================스턴 멀티 구현
	UFUNCTION(Server, Reliable)	//광역 스턴
		void Server_Stun();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StunEffect(AMyProjectCharacter* Target);


	UFUNCTION(Server, Reliable)	//대쉬 스턴
		void Server_DashStun(float DashPower);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DashStunEffect(AMyProjectCharacter* Target);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SpawnChargeEffect();

	UFUNCTION(Server, Reliable)
	void Server_StartChargeEffect();


	//------------------skillon 이펙트 멀티 --------------------

	UFUNCTION(Server, Reliable)
	void Server_SkillOn(const FString& NiagaraPath);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SkillOn(const FString& NiagaraPath);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireEffect(AMyProjectCharacter* Enemy, const FString& NiagaraPath);


	//--------------------------------------
	int32 Power; // 공격력

	float AttackRange; // 공격	범위

	FTimerHandle MoneyTimerHandle;  // 돈 증가 타이머 핸들

	bool middle;
	bool high;

	int32 GetHighestStatName();// 능력치 중 가장 높은 능력치 수련도 반환

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UStatusWidget> BP_StatusWidget; //기본 UI 위젯 클래스

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHPWidget> BP_HPWidget; //HP 위젯 클래스


	// BP�� ������ HP �Լ� �ù� ������
	UFUNCTION(BlueprintCallable, Category = "UI")
	float GetHPBarPercent() const
	{
		return FMath::Clamp((float)HP_Player / 100.0f, 0.f, 1.f);
	}



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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Light Control")
	bool isNight = false;

	//============================	========================== 미니게임종료시 능력치 상승


	UFUNCTION(BlueprintCallable)
	void PlusStat(EPlayerStatType Stat);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void ServerPlusStat(EPlayerStatType Stat);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastStatEffect();

	void ApplyStatIncrease(EPlayerStatType Stat);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Cutscene")
	bool bIsMovementLocked = false;

	UFUNCTION(Server, Reliable)
	void Server_NotifyCutsceneFinished();

	void ChangeJobSkill1();// 직업 변경
	void ChangeJobSkill2();// 직업 변경
	void ChangeJobSkill3();// 직업 변경
	void ChangeJobSkill4();// 직업 변경
	void ChangeJobSkill5();// 직업 변경
	void ChangeJobSkill6();// 중학생
	void ChangeJobSkill7();// 고등학생

protected:

	// RPC Test add
	UFUNCTION(Server, Reliable)
	void ServerPlayAttack();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayAttack();

	UFUNCTION(Server, Reliable)
	void ServerPlayDash();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPlayDash();

	UFUNCTION(Server, Reliable)
	void Server_RequestDash();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayDashEffects();

	UFUNCTION(Server, Reliable)
	void ServerAttack();

	void ExecuteAttack();//멀티 X Ai 일반 공격 적용 코드

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnHitEvent();




	UFUNCTION()
	void OnRep_Age();

	UFUNCTION()
	void OnRep_HPChanged();

	UFUNCTION()
	void OnRep_NiagaraSystem();


	UFUNCTION(Server, Reliable)
	void ServerPlusAge();


	// RPC END

	virtual void BeginPlay();
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void Attack(const FInputActionValue& Value);	//기본 공격

	void PlusAge(const FInputActionValue& Value);		//나이먹기

	void Print(const FInputActionValue& Value);		// 능력치 출력

	void Inventory(const FInputActionValue& Value);	// 인벤토리



	void SkillAttack1();// 
	void SkillAttack2();// 
	void SkillAttack3();// 
	void SkillAttack4();// 
	void SkillAttack5();// 




	void SkillAttack();

	float DashChargeStartTime = 0.f;// 차징 시간

	void StartDashCharge();   // 차장 시작
	void ReleaseDashCharge(); // 차징 발사

	void IncreaseMoney();  // 돈 증가 함수

	UFUNCTION(BlueprintCallable)
	void DecreaseMoney(int32 value);


	void SpawnNiagara(const FString& NiagaraPath, const FVector& Direction, const FVector& Scale, float Duration); // ���̾ư��� ����Ʈ ����
	void HealEffect(); // 힐 이펙트

	void Dash(); // 대쉬
	void StopDash(); // 대쉬 멈추기

	//========================== 프로필 변경 (ui는 멀티에서 처리하면 안대요.,.....)
	void ChangeProfile(const FString& TextureAssetPath, const FString& name, const FString& skillIcon);

	//==========================
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//===========================사망시 위젯
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> DieWidgetClass;

	UUserWidget* DieWidgetInstance;



	//============================
private:
	UPROPERTY()
	class UStatusWidget* HUDWidget;

	UPROPERTY()
	class UHPWidget* HPWidget;

	void UpdateStatus();

	FTimerHandle DashTimerHandle; // 대시 타이머
	FTimerHandle DashCooldownTimerHandle; // 쿨다운 타이머

	FTimerHandle ConeDamageTimerHandle;//화염방사 대미지 타이머

	FTimerHandle ChargeEffectTimerHandle;//차징 이펙트 타이머

	int32 CurrentTick = 0;
	void ApplyConeDamageTick(); //화염방사 대미지

	void SpawnChargeEffect(); // 복서 차징 이펙트

	// �� ��ų-------------------------------------
	FTimerHandle Skill2TimerHandle;
	int32 Skill2SpawnCount = 0;
	FTimerHandle PaintTimerHandle;


	UFUNCTION(BlueprintCallable)
	void SkillOn(const FString& NiagaraPath);

	//void EquipWeaponWithEffect(const FString& NiagaraPath, const FString& SkiilEffectPath, const FString& ProfillPath); //���� ���� �뽬����Ʈ & ��ų������ & ������

	void StartCooldown(float CooldownTime);
	void UpdateCooldownProgress();

	float SkillCooldownDuration;
	float SkillCooldownElapsed;

	FTimerHandle CooldownTimerHandle;// 스킬 쿨타임(대쉬X)

	bool bCanUseSkill = true; //스킬 재사용 금지

	void SwapToNewCharacter(const FString& BlueprintPath);


	//멀티 플레이 위한 추가
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SwapToNewCharacter(const FString& BlueprintPath, AController* OwningController);


	void Server_SwapToNewCharacter_Implementation(const FString& BlueprintPath, AController* OwningController);
	bool Server_SwapToNewCharacter_Validate(const FString& BlueprintPath, AController* OwningController) { return true; }

	void SetupHUDIfNeeded();//멀티 캐릭터 변경시 ui적용



};

