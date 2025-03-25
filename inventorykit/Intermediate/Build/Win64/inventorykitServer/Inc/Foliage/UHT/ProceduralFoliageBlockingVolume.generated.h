// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageBlockingVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageBlockingVolume_generated_h
#error "ProceduralFoliageBlockingVolume.generated.h already included, missing '#pragma once' in ProceduralFoliageBlockingVolume.h"
#endif
#define FOLIAGE_ProceduralFoliageBlockingVolume_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralFoliageBlockingVolume(); \
	friend struct Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics; \
public: \
	DECLARE_CLASS(AProceduralFoliageBlockingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AProceduralFoliageBlockingVolume)


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AProceduralFoliageBlockingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralFoliageBlockingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AProceduralFoliageBlockingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralFoliageBlockingVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProceduralFoliageBlockingVolume(AProceduralFoliageBlockingVolume&&); \
	AProceduralFoliageBlockingVolume(const AProceduralFoliageBlockingVolume&); \
public: \
	FOLIAGE_API virtual ~AProceduralFoliageBlockingVolume();


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_15_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_18_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AProceduralFoliageBlockingVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageBlockingVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
