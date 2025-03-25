// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Instances/InstancedPlacementPartitionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InstancedPlacementPartitionActor_generated_h
#error "InstancedPlacementPartitionActor.generated.h already included, missing '#pragma once' in InstancedPlacementPartitionActor.h"
#endif
#define ENGINE_InstancedPlacementPartitionActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedPlacementPartitionActor, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAInstancedPlacementPartitionActor(); \
	friend struct Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics; \
public: \
	DECLARE_CLASS(AInstancedPlacementPartitionActor, AISMPartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AInstancedPlacementPartitionActor) \
	FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AInstancedPlacementPartitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedPlacementPartitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AInstancedPlacementPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedPlacementPartitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInstancedPlacementPartitionActor(AInstancedPlacementPartitionActor&&); \
	AInstancedPlacementPartitionActor(const AInstancedPlacementPartitionActor&); \
public: \
	ENGINE_API virtual ~AInstancedPlacementPartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AInstancedPlacementPartitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
