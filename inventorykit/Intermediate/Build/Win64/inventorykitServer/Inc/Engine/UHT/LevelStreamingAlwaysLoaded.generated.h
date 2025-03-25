// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreamingAlwaysLoaded.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelStreamingAlwaysLoaded_generated_h
#error "LevelStreamingAlwaysLoaded.generated.h already included, missing '#pragma once' in LevelStreamingAlwaysLoaded.h"
#endif
#define ENGINE_LevelStreamingAlwaysLoaded_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingAlwaysLoaded(); \
	friend struct Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingAlwaysLoaded, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreamingAlwaysLoaded)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingAlwaysLoaded(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingAlwaysLoaded) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingAlwaysLoaded); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingAlwaysLoaded); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelStreamingAlwaysLoaded(ULevelStreamingAlwaysLoaded&&); \
	ULevelStreamingAlwaysLoaded(const ULevelStreamingAlwaysLoaded&); \
public: \
	ENGINE_API virtual ~ULevelStreamingAlwaysLoaded();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreamingAlwaysLoaded>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
