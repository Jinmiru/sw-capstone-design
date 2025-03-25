// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedFoliageActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFoliageType;
class UObject;
#ifdef FOLIAGE_InstancedFoliageActor_generated_h
#error "InstancedFoliageActor.generated.h already included, missing '#pragma once' in InstancedFoliageActor.h"
#endif
#define FOLIAGE_InstancedFoliageActor_generated_h

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execRemoveAllInstances); \
	DECLARE_FUNCTION(execAddInstances);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedFoliageActor, FOLIAGE_API)


#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAInstancedFoliageActor(); \
	friend struct Z_Construct_UClass_AInstancedFoliageActor_Statics; \
public: \
	DECLARE_CLASS(AInstancedFoliageActor, AISMPartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AInstancedFoliageActor) \
	FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AInstancedFoliageActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedFoliageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AInstancedFoliageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedFoliageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInstancedFoliageActor(AInstancedFoliageActor&&); \
	AInstancedFoliageActor(const AInstancedFoliageActor&); \
public: \
	FOLIAGE_API virtual ~AInstancedFoliageActor();


#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_27_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AInstancedFoliageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
