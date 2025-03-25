// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_FunctionalTestGameMode_generated_h
#error "FunctionalTestGameMode.generated.h already included, missing '#pragma once' in FunctionalTestGameMode.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestGameMode_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTestGameMode(); \
	friend struct Z_Construct_UClass_AFunctionalTestGameMode_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTestGameMode)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalTestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFunctionalTestGameMode(AFunctionalTestGameMode&&); \
	AFunctionalTestGameMode(const AFunctionalTestGameMode&); \
public: \
	NO_API virtual ~AFunctionalTestGameMode();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_10_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalTestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
