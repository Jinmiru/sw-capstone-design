// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionVolume_generated_h
#error "WorldPartitionVolume.generated.h already included, missing '#pragma once' in WorldPartitionVolume.h"
#endif
#define ENGINE_WorldPartitionVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADEPRECATED_WorldPartitionVolume(); \
	friend struct Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics; \
public: \
	DECLARE_CLASS(ADEPRECATED_WorldPartitionVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADEPRECATED_WorldPartitionVolume)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADEPRECATED_WorldPartitionVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_WorldPartitionVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADEPRECATED_WorldPartitionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_WorldPartitionVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADEPRECATED_WorldPartitionVolume(ADEPRECATED_WorldPartitionVolume&&); \
	ADEPRECATED_WorldPartitionVolume(const ADEPRECATED_WorldPartitionVolume&); \
public: \
	ENGINE_API virtual ~ADEPRECATED_WorldPartitionVolume();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADEPRECATED_WorldPartitionVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
