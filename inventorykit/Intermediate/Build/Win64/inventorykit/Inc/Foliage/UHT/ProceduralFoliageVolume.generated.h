// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_ProceduralFoliageVolume_generated_h
#error "ProceduralFoliageVolume.generated.h already included, missing '#pragma once' in ProceduralFoliageVolume.h"
#endif
#define FOLIAGE_ProceduralFoliageVolume_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAProceduralFoliageVolume(); \
	friend struct Z_Construct_UClass_AProceduralFoliageVolume_Statics; \
public: \
	DECLARE_CLASS(AProceduralFoliageVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(AProceduralFoliageVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AProceduralFoliageVolume*>(this); }


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API AProceduralFoliageVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProceduralFoliageVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, AProceduralFoliageVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralFoliageVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProceduralFoliageVolume(AProceduralFoliageVolume&&); \
	AProceduralFoliageVolume(const AProceduralFoliageVolume&); \
public: \
	FOLIAGE_API virtual ~AProceduralFoliageVolume();


#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class AProceduralFoliageVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
