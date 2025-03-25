// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorLoaderAdapter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionEditorLoaderAdapter_generated_h
#error "WorldPartitionEditorLoaderAdapter.generated.h already included, missing '#pragma once' in WorldPartitionEditorLoaderAdapter.h"
#endif
#define ENGINE_WorldPartitionEditorLoaderAdapter_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorLoaderAdapter(); \
	friend struct Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionEditorLoaderAdapter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionEditorLoaderAdapter) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldPartitionEditorLoaderAdapter*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionEditorLoaderAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorLoaderAdapter(UWorldPartitionEditorLoaderAdapter&&); \
	UWorldPartitionEditorLoaderAdapter(const UWorldPartitionEditorLoaderAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionEditorLoaderAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorLoaderAdapter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorLoaderAdapter) \
	ENGINE_API virtual ~UWorldPartitionEditorLoaderAdapter();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionEditorLoaderAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
