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

//191 ~ 217�� �����Լ� ����

//24�� Ŭ��������� MYPROJECT_API�߰�


UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	None,
	Chain,
	Scythe
};


UCLASS(config=Game)
class MYPROJECT_API AMyProjectCharacter : public ACharacter
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

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* Skill1;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* Skill2;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* Skill3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* Skill4;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* Skill5;



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* levelup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* printAction;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* inventoryAction;



public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	AMyProjectCharacter();

	UPROPERTY(EditAnywhere, Category = LevelupEffect)
	class UParticleSystem* LevelupEffect;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshComponent;// ���� �Ž�

	
	UPROPERTY(ReplicatedUsing = OnRep_Age, EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	int32 Age;

	UPROPERTY(ReplicatedUsing = OnRep_HPChanged, EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 HP_Player=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 iniitialHP = 100;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent(); // �⺻ ���� �̺�Ʈ

	UFUNCTION(BlueprintCallable, Category = "Health")
	void OnHitEvent2(); // ��ų ���� �̺�Ʈ

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* HitEffect; // ���� ����Ʈ

	UPROPERTY()
	AActor* EquippedWeaponActor = nullptr;//���� ���� �ʱ�ȭ
	
	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* NiagaraComp;

	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Physical;   // ��ü�ɷ�
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Sensory;    // ���� �ɷ�
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Logic;             // ����
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 Linguistic;        // ����
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 SocialSkill;       // ��ȸ��
	UPROPERTY(ReplicatedUsing = OnRep_Age)
	int32 MentalStrength;    // ���ŷ�
	int32 money;             // ��

	int32 Power; // ���ݷ�

	float AttackRange; // ����	����

	FTimerHandle MoneyTimerHandle;  // Ÿ�̸� �ڵ�

	bool middle;
	bool high;

	int32 jobskill = 0; // ���� ��ų �ʱ�ȭ

	UPROPERTY(ReplicatedUsing = OnRep_NiagaraSystem, EditDefaultsOnly)
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

	// RPC TEST add
	void RequestAttack();

	void RequestDash();

	void RequestWeaponUpdate();

	void PerformDash();
	
	void PerformAttack();

	// RPC END


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

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnHitEvent();

	UFUNCTION(Server, Reliable)
	void Server_EquipWeaponWithEffect(const FString& NiagaraPath, const FString& WeaponBlueprintPath);

	void EquipWeapon_Internal(const FString& NiagaraPath, const FString& WeaponBlueprintPath);


	UPROPERTY(ReplicatedUsing = OnRep_WeaponChanged)
	EWeaponType EquippedWeaponType;

	UFUNCTION()
	void OnRep_WeaponChanged();

	UFUNCTION()
	void OnRep_Age();

	UFUNCTION(Server, Reliable)
	void Server_RequestWeaponUpdate();

	void ApplyWeaponMesh(EWeaponType WeaponType);

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
			
	void Attack(const FInputActionValue& Value);	//�⺻ ����

	void PlusAge(const FInputActionValue& Value);		//���̸Ա�

	void Print(const FInputActionValue& Value);		// �ɷ�ġ ���

	//void Inventory(const FInputActionValue& Value);	// �κ��丮

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
	
	void ChangeProfile(const FString& TextureAssetPath, const FString& name);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




private:
	UPROPERTY()
	class UStatusWidget* HUDWidget;

	UPROPERTY()
	class UHPWidget* HPWidget;

	void UpdateStatus();

	UPROPERTY(Replicated)
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

	//���� ���� �����
	UPROPERTY()
	TArray<UMaterialInterface*> PuddleMaterials;


	FTimerHandle PaintTimerHandle;


	UFUNCTION(BlueprintCallable)
	void SkillOn(const FString& NiagaraPath);

	void EquipWeaponWithEffect(const FString& NiagaraPath, const FString& WeaponBlueprintPath); //���� ���� �뽬����Ʈ & ���� ����

	void StartCooldown(float CooldownTime);
	void UpdateCooldownProgress();

	float SkillCooldownDuration;
	float SkillCooldownElapsed;

	FTimerHandle CooldownTimerHandle;//��ų ��Ÿ��

	bool bCanUseSkill = true; //��ų ���� ����

};

