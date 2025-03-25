// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataLayerManager;
class UObject;
struct FActorDesc;
struct FGuid;
#ifdef ENGINE_WorldPartitionBlueprintLibrary_generated_h
#error "WorldPartitionBlueprintLibrary.generated.h already included, missing '#pragma once' in WorldPartitionBlueprintLibrary.h"
#endif
#define ENGINE_WorldPartitionBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorDesc_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorDesc>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDataLayerManager); \
	DECLARE_FUNCTION(execGetActorDescsForActors); \
	DECLARE_FUNCTION(execGetIntersectingActorDescs); \
	DECLARE_FUNCTION(execGetActorDescs); \
	DECLARE_FUNCTION(execUnpinActors); \
	DECLARE_FUNCTION(execPinActors); \
	DECLARE_FUNCTION(execUnloadActors); \
	DECLARE_FUNCTION(execLoadActors); \
	DECLARE_FUNCTION(execGetRuntimeWorldBounds); \
	DECLARE_FUNCTION(execGetEditorWorldBounds);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionBlueprintLibrary(UWorldPartitionBlueprintLibrary&&); \
	UWorldPartitionBlueprintLibrary(const UWorldPartitionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBlueprintLibrary) \
	ENGINE_API virtual ~UWorldPartitionBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_80_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
