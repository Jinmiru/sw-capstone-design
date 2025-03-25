// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/DestructibleHLODComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DestructibleHLODComponent_generated_h
#error "DestructibleHLODComponent.generated.h already included, missing '#pragma once' in DestructibleHLODComponent.h"
#endif
#define ENGINE_DestructibleHLODComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionDestructibleHLODComponent(); \
	friend struct Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionDestructibleHLODComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionDestructibleHLODComponent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionDestructibleHLODComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionDestructibleHLODComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionDestructibleHLODComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionDestructibleHLODComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionDestructibleHLODComponent(UWorldPartitionDestructibleHLODComponent&&); \
	UWorldPartitionDestructibleHLODComponent(const UWorldPartitionDestructibleHLODComponent&); \
public: \
	ENGINE_API virtual ~UWorldPartitionDestructibleHLODComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionDestructibleHLODComponent>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionDestructibleHLODDamagedActorState>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FWorldPartitionDestructibleHLODState, DamagedActors, ENGINE_API );


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionDestructibleHLODState>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionDestructibleHLODMeshComponent(); \
	friend struct Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionDestructibleHLODMeshComponent, UWorldPartitionDestructibleHLODComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionDestructibleHLODMeshComponent) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DestructibleHLODState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DestructibleHLODState	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionDestructibleHLODMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionDestructibleHLODMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionDestructibleHLODMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionDestructibleHLODMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionDestructibleHLODMeshComponent(UWorldPartitionDestructibleHLODMeshComponent&&); \
	UWorldPartitionDestructibleHLODMeshComponent(const UWorldPartitionDestructibleHLODMeshComponent&); \
public: \
	ENGINE_API virtual ~UWorldPartitionDestructibleHLODMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_125_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_128_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionDestructibleHLODMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
