// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataLayerInstance;
class UObject;
class UWorld;
struct FActorInstanceHandle;
#ifdef ENGINE_LightWeightInstanceBlueprintFunctionLibrary_generated_h
#error "LightWeightInstanceBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in LightWeightInstanceBlueprintFunctionLibrary.h"
#endif
#define ENGINE_LightWeightInstanceBlueprintFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertActorToLightWeightInstance); \
	DECLARE_FUNCTION(execCreateNewLightWeightInstance);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(ULightWeightInstanceBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightWeightInstanceBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightWeightInstanceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightWeightInstanceBlueprintFunctionLibrary(ULightWeightInstanceBlueprintFunctionLibrary&&); \
	ULightWeightInstanceBlueprintFunctionLibrary(const ULightWeightInstanceBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightWeightInstanceBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightWeightInstanceBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightWeightInstanceBlueprintFunctionLibrary) \
	ENGINE_API virtual ~ULightWeightInstanceBlueprintFunctionLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightWeightInstanceBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
