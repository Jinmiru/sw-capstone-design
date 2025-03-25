// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LODActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_LODActor_generated_h
#error "LODActor.generated.h already included, missing '#pragma once' in LODActor.h"
#endif
#define ENGINE_LODActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHLODInstancingKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHLODInstancingKey>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSubActorEndPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALODActor, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_INCLASS \
private: \
	static void StaticRegisterNativesALODActor(); \
	friend struct Z_Construct_UClass_ALODActor_Statics; \
public: \
	DECLARE_CLASS(ALODActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALODActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALODActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALODActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALODActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALODActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALODActor(ALODActor&&); \
	ALODActor(const ALODActor&); \
public: \
	ENGINE_API virtual ~ALODActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_68_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALODActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
