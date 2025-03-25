// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TimecodeProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETimecodeProviderSynchronizationState : int32;
struct FFrameRate;
struct FQualifiedFrameTime;
struct FTimecode;
#ifdef ENGINE_TimecodeProvider_generated_h
#error "TimecodeProvider.generated.h already included, missing '#pragma once' in TimecodeProvider.h"
#endif
#define ENGINE_TimecodeProvider_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSynchronizationState); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetDelayedTimecode); \
	DECLARE_FUNCTION(execGetTimecode); \
	DECLARE_FUNCTION(execGetDelayedQualifiedFrameTime); \
	DECLARE_FUNCTION(execGetQualifiedFrameTime); \
	DECLARE_FUNCTION(execFetchAndUpdate); \
	DECLARE_FUNCTION(execFetchTimecode);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeProvider(); \
	friend struct Z_Construct_UClass_UTimecodeProvider_Statics; \
public: \
	DECLARE_CLASS(UTimecodeProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimecodeProvider)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTimecodeProvider(UTimecodeProvider&&); \
	UTimecodeProvider(const UTimecodeProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeProvider) \
	ENGINE_API virtual ~UTimecodeProvider();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimecodeProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h


#define FOREACH_ENUM_ETIMECODEPROVIDERSYNCHRONIZATIONSTATE(op) \
	op(ETimecodeProviderSynchronizationState::Closed) \
	op(ETimecodeProviderSynchronizationState::Error) \
	op(ETimecodeProviderSynchronizationState::Synchronized) \
	op(ETimecodeProviderSynchronizationState::Synchronizing) 

enum class ETimecodeProviderSynchronizationState;
template<> struct TIsUEnumClass<ETimecodeProviderSynchronizationState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
