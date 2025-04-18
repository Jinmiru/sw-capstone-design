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
	int32 Save_Physical;   // ��ü�ɷ�
	UPROPERTY()
	int32 Save_Sensory;    // ���� �ɷ�
	UPROPERTY()
	int32 Save_Logic;             // ����
	UPROPERTY()
	int32 Save_Linguistic;        // ����
	UPROPERTY()
	int32 Save_SocialSkill;       // ��ȸ��
	UPROPERTY()
	int32 Save_MentalStrength;    // ���ŷ�
	UPROPERTY()
	int32 Save_money;             // ��

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

	//	������ �ε� and ���̺�
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
	UStaticMeshComponent* MeshComponent;// ���� �Ž�

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Age;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 HP_Player=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 iniitialHP = 100;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent(); // �⺻ ���� �̺�Ʈ

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent2(); // ��ų ���� �̺�Ʈ

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* HitEffect; // ���� ����Ʈ

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* AttackMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	UAnimMontage* DashMontage;

	UPROPERTY()
	AActor* EquippedWeaponActor = nullptr;//���� ���� �ʱ�ȭ
	
	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* NiagaraComp;


	int32 Physical;   // ��ü�ɷ�
	int32 Sensory;    // ���� �ɷ�
	int32 Logic;             // ����
	int32 Linguistic;        // ����
	int32 SocialSkill;       // ��ȸ��
	int32 MentalStrength;    // ���ŷ�
	int32 money;             // ��

	int32 Power; // ���ݷ�

	float AttackRange; // ����	����

	FTimerHandle MoneyTimerHandle;  // Ÿ�̸� �ڵ�

	bool middle;
	bool high;

	int32 jobskill = 0; // ���� ��ų �ʱ�ȭ

	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* NiagaraSystem; // �뽬����Ʈ �����
	

	int32 GetHighestStatName();// �ɷ�ġ �� ���� ���� �ɷ�ġ ���õ� ��ȯ

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UStatusWidget> BP_StatusWidget; //�⺻ UI ���� Ŭ����

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UHPWidget> BP_HPWidget; //HP ���� Ŭ����

	
	UFUNCTION()
	void DisablePlayerMovement();//���Ͻ���

	UFUNCTION()
	void EnablePlayerMovement();//���� ��

	UFUNCTION()
	void Stun();//����

	UFUNCTION()
	void Skill_DashStun(float DashPower = 500.f); //�뽬 ����

	UFUNCTION()
	void DashStun_CheckHit(); //�뽬 ����

	UFUNCTION()
	void UnfreezeMovement(); //��ų ���� ����




protected:

	virtual void BeginPlay();
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	void Attack(const FInputActionValue& Value);	//�⺻ ����

	void PlusAge(const FInputActionValue& Value);		//���̸Ա�

	void Print(const FInputActionValue& Value);		// �ɷ�ġ ���

	void Inventory(const FInputActionValue& Value);	// �κ��丮

	void ChangeJobSkill1();// ���� ����
	void ChangeJobSkill2();// ���� ����
	void ChangeJobSkill3();// ���� ����
	void ChangeJobSkill4();// ���� ����
	void ChangeJobSkill5();// ���� ����

	void SkillAttack1();// ���� ����
	void SkillAttack2();// ���� ����
	void SkillAttack3();// ���� ����
	void SkillAttack4();// ���� ����
	void SkillAttack5();// ���� ����

	void SkillAttack();

	float DashChargeStartTime = 0.f;// ��¡ �ð�

	void StartDashCharge();   // ���� ����
	void ReleaseDashCharge(); // ��¡ �߻�

	void IncreaseMoney();  // �� ���� �Լ�

	void SpawnNiagara(const FString& NiagaraPath, const FVector& Direction, const FVector& Scale, float Duration); // ���̾ư��� ����Ʈ ����
	void HealEffect(); // �� ����Ʈ

	void Dash(); // �뽬
	void StopDash(); // �뽬 ���߱�
	
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
	FTimerHandle DashTimerHandle; // ��� Ÿ�̸�
	FTimerHandle DashCooldownTimerHandle; // ��ٿ� Ÿ�̸�

	FTimerHandle ConeDamageTimerHandle;//ȭ����� ����� Ÿ�̸�

	FTimerHandle ChargeEffectTimerHandle;//��¡ ����Ʈ Ÿ�̸�

	int32 CurrentTick = 0;
	void ApplyConeDamageTick(); //ȭ����� �����

	void SpawnChargeEffect(); // ���� ��¡ ����Ʈ

	// �� ��ų-------------------------------------
	FTimerHandle Skill2TimerHandle;
	int32 Skill2SpawnCount = 0;
	FTimerHandle PaintTimerHandle;


	UFUNCTION(BlueprintCallable)
	void SkillOn(const FString& NiagaraPath);

	void EquipWeaponWithEffect(const FString& NiagaraPath, const FString& SkiilEffectPath); //���� ���� �뽬����Ʈ & ���� ����

	void StartCooldown(float CooldownTime);
	void UpdateCooldownProgress();

	float SkillCooldownDuration;
	float SkillCooldownElapsed;

	FTimerHandle CooldownTimerHandle;//��ų ��Ÿ��

	bool bCanUseSkill = true; //��ų ���� ����

	void SwapToNewCharacter(const FString& BlueprintPath);
	

	//��Ƽ �÷��� ���� �߰�
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SwapToNewCharacter(const FString& BlueprintPath);

	void Server_SwapToNewCharacter_Implementation(const FString& BlueprintPath);
	bool Server_SwapToNewCharacter_Validate(const FString& BlueprintPath) { return true; }


};

