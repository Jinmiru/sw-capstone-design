// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationDataChunk.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationDataChunk_generated_h
#error "NavigationDataChunk.generated.h already included, missing '#pragma once' in NavigationDataChunk.h"
#endif
#define ENGINE_NavigationDataChunk_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationDataChunk(); \
	friend struct Z_Construct_UClass_UNavigationDataChunk_Statics; \
public: \
	DECLARE_CLASS(UNavigationDataChunk, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavigationDataChunk)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavigationDataChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationDataChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationDataChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationDataChunk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationDataChunk(UNavigationDataChunk&&); \
	UNavigationDataChunk(const UNavigationDataChunk&); \
public: \
	ENGINE_API virtual ~UNavigationDataChunk();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationDataChunk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
