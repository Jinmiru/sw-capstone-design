// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageSpawner_generated_h
#error "ProceduralFoliageSpawner.generated.h already included, missing '#pragma once' in ProceduralFoliageSpawner.h"
#endif
#define FOLIAGE_ProceduralFoliageSpawner_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSimulate);


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UProceduralFoliageSpawner, FOLIAGE_API)


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageSpawner(); \
	friend struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(UProceduralFoliageSpawner) \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UProceduralFoliageSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UProceduralFoliageSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProceduralFoliageSpawner(UProceduralFoliageSpawner&&); \
	UProceduralFoliageSpawner(const UProceduralFoliageSpawner&); \
public: \
	FOLIAGE_API virtual ~UProceduralFoliageSpawner();


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_16_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UProceduralFoliageSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
