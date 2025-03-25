// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GameEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameEngine_generated_h
#error "GameEngine.generated.h already included, missing '#pragma once' in GameEngine.h"
#endif
#define ENGINE_GameEngine_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGameEngine(); \
	friend struct Z_Construct_UClass_UGameEngine_Statics; \
public: \
	DECLARE_CLASS(UGameEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGameEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameEngine(UGameEngine&&); \
	UGameEngine(const UGameEngine&); \
public: \
	ENGINE_API virtual ~UGameEngine();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
