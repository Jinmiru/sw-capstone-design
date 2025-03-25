// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/PrecomputedVisibilityVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PrecomputedVisibilityVolume_generated_h
#error "PrecomputedVisibilityVolume.generated.h already included, missing '#pragma once' in PrecomputedVisibilityVolume.h"
#endif
#define ENGINE_PrecomputedVisibilityVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPrecomputedVisibilityVolume(); \
	friend struct Z_Construct_UClass_APrecomputedVisibilityVolume_Statics; \
public: \
	DECLARE_CLASS(APrecomputedVisibilityVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APrecomputedVisibilityVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APrecomputedVisibilityVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrecomputedVisibilityVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APrecomputedVisibilityVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrecomputedVisibilityVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APrecomputedVisibilityVolume(APrecomputedVisibilityVolume&&); \
	APrecomputedVisibilityVolume(const APrecomputedVisibilityVolume&); \
public: \
	ENGINE_API virtual ~APrecomputedVisibilityVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APrecomputedVisibilityVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_PrecomputedVisibilityVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
