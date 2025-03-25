// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerStart.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerStart_generated_h
#error "PlayerStart.generated.h already included, missing '#pragma once' in PlayerStart.h"
#endif
#define ENGINE_PlayerStart_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerStart(); \
	friend struct Z_Construct_UClass_APlayerStart_Statics; \
public: \
	DECLARE_CLASS(APlayerStart, ANavigationObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlayerStart)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerStart(APlayerStart&&); \
	APlayerStart(const APlayerStart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlayerStart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerStart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerStart) \
	ENGINE_API virtual ~APlayerStart();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerStart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
