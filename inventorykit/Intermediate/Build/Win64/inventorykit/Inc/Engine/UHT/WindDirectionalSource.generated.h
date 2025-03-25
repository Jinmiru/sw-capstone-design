// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/WindDirectionalSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WindDirectionalSource_generated_h
#error "WindDirectionalSource.generated.h already included, missing '#pragma once' in WindDirectionalSource.h"
#endif
#define ENGINE_WindDirectionalSource_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWindDirectionalSource(); \
	friend struct Z_Construct_UClass_AWindDirectionalSource_Statics; \
public: \
	DECLARE_CLASS(AWindDirectionalSource, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWindDirectionalSource)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWindDirectionalSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindDirectionalSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWindDirectionalSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindDirectionalSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWindDirectionalSource(AWindDirectionalSource&&); \
	AWindDirectionalSource(const AWindDirectionalSource&); \
public: \
	ENGINE_API virtual ~AWindDirectionalSource();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWindDirectionalSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
