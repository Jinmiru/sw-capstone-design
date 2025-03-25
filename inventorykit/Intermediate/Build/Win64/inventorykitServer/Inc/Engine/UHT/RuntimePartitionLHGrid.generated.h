// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimePartitionLHGrid_generated_h
#error "RuntimePartitionLHGrid.generated.h already included, missing '#pragma once' in RuntimePartitionLHGrid.h"
#endif
#define ENGINE_RuntimePartitionLHGrid_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimePartitionLHGrid(); \
	friend struct Z_Construct_UClass_URuntimePartitionLHGrid_Statics; \
public: \
	DECLARE_CLASS(URuntimePartitionLHGrid, URuntimePartition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimePartitionLHGrid)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimePartitionLHGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimePartitionLHGrid(URuntimePartitionLHGrid&&); \
	URuntimePartitionLHGrid(const URuntimePartitionLHGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimePartitionLHGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimePartitionLHGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimePartitionLHGrid) \
	NO_API virtual ~URuntimePartitionLHGrid();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimePartitionLHGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
