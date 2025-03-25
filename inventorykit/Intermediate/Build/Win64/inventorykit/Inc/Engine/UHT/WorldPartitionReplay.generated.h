// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionReplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionReplay_generated_h
#error "WorldPartitionReplay.generated.h already included, missing '#pragma once' in WorldPartitionReplay.h"
#endif
#define ENGINE_WorldPartitionReplay_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionReplay(); \
	friend struct Z_Construct_UClass_AWorldPartitionReplay_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionReplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldPartitionReplay) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StreamingSourceNames=NETFIELD_REP_START, \
		NETFIELD_REP_END=StreamingSourceNames	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWorldPartitionReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionReplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldPartitionReplay(AWorldPartitionReplay&&); \
	AWorldPartitionReplay(const AWorldPartitionReplay&); \
public: \
	ENGINE_API virtual ~AWorldPartitionReplay();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionReplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
