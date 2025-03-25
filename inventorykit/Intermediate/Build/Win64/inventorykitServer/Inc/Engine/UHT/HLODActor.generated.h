// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODActor_generated_h
#error "HLODActor.generated.h already included, missing '#pragma once' in HLODActor.h"
#endif
#define ENGINE_HLODActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldPartitionHLOD, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionHLOD(); \
	friend struct Z_Construct_UClass_AWorldPartitionHLOD_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldPartitionHLOD) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionHLOD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionHLOD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldPartitionHLOD(AWorldPartitionHLOD&&); \
	AWorldPartitionHLOD(const AWorldPartitionHLOD&); \
public: \
	ENGINE_API virtual ~AWorldPartitionHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionHLOD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
