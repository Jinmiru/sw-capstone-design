// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CachedAnimDataLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FCachedAnimStateData;
#ifdef ENGINE_CachedAnimDataLibrary_generated_h
#error "CachedAnimDataLibrary.generated.h already included, missing '#pragma once' in CachedAnimDataLibrary.h"
#endif
#define ENGINE_CachedAnimDataLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStateMachine_GetGlobalWeight); \
	DECLARE_FUNCTION(execStateMachine_GetLocalWeight); \
	DECLARE_FUNCTION(execStateMachine_IsStateRelevant);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCachedAnimDataLibrary(); \
	friend struct Z_Construct_UClass_UCachedAnimDataLibrary_Statics; \
public: \
	DECLARE_CLASS(UCachedAnimDataLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCachedAnimDataLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCachedAnimDataLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCachedAnimDataLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCachedAnimDataLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCachedAnimDataLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCachedAnimDataLibrary(UCachedAnimDataLibrary&&); \
	UCachedAnimDataLibrary(const UCachedAnimDataLibrary&); \
public: \
	ENGINE_API virtual ~UCachedAnimDataLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCachedAnimDataLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
