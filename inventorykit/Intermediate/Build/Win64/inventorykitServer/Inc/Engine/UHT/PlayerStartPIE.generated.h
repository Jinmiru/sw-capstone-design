// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlayerStartPIE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerStartPIE_generated_h
#error "PlayerStartPIE.generated.h already included, missing '#pragma once' in PlayerStartPIE.h"
#endif
#define ENGINE_PlayerStartPIE_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerStartPIE(); \
	friend struct Z_Construct_UClass_APlayerStartPIE_Statics; \
public: \
	DECLARE_CLASS(APlayerStartPIE, APlayerStart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerStartPIE)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlayerStartPIE(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStartPIE) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerStartPIE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStartPIE); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerStartPIE(APlayerStartPIE&&); \
	APlayerStartPIE(const APlayerStartPIE&); \
public: \
	ENGINE_API virtual ~APlayerStartPIE();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerStartPIE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
