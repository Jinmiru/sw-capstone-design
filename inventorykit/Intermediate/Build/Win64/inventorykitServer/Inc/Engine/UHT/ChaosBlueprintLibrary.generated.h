// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ChaosBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosEventRelay;
class UObject;
#ifdef ENGINE_ChaosBlueprintLibrary_generated_h
#error "ChaosBlueprintLibrary.generated.h already included, missing '#pragma once' in ChaosBlueprintLibrary.h"
#endif
#define ENGINE_ChaosBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEventRelayFromContext);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChaosBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosBlueprintLibrary(UChaosBlueprintLibrary&&); \
	UChaosBlueprintLibrary(const UChaosBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosBlueprintLibrary) \
	NO_API virtual ~UChaosBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChaosBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
