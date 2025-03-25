// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SubsurfaceProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SubsurfaceProfile_generated_h
#error "SubsurfaceProfile.generated.h already included, missing '#pragma once' in SubsurfaceProfile.h"
#endif
#define ENGINE_SubsurfaceProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSubsurfaceProfileStruct>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUSubsurfaceProfile(); \
	friend struct Z_Construct_UClass_USubsurfaceProfile_Statics; \
public: \
	DECLARE_CLASS(USubsurfaceProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubsurfaceProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubsurfaceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsurfaceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsurfaceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsurfaceProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubsurfaceProfile(USubsurfaceProfile&&); \
	USubsurfaceProfile(const USubsurfaceProfile&); \
public: \
	ENGINE_API virtual ~USubsurfaceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_149_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_152_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubsurfaceProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
