// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSubsystem_generated_h
#error "LandscapeSubsystem.generated.h already included, missing '#pragma once' in LandscapeSubsystem.h"
#endif
#define LANDSCAPE_LandscapeSubsystem_generated_h

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSubsystem(); \
	friend struct Z_Construct_UClass_ULandscapeSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSubsystem)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeSubsystem(ULandscapeSubsystem&&); \
	ULandscapeSubsystem(const ULandscapeSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULandscapeSubsystem)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_55_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
