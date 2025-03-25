// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/RuntimePartitionLevelStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimePartitionLevelStreaming_generated_h
#error "RuntimePartitionLevelStreaming.generated.h already included, missing '#pragma once' in RuntimePartitionLevelStreaming.h"
#endif
#define ENGINE_RuntimePartitionLevelStreaming_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimePartitionLevelStreaming(); \
	friend struct Z_Construct_UClass_URuntimePartitionLevelStreaming_Statics; \
public: \
	DECLARE_CLASS(URuntimePartitionLevelStreaming, URuntimePartition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimePartitionLevelStreaming)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimePartitionLevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimePartitionLevelStreaming(URuntimePartitionLevelStreaming&&); \
	URuntimePartitionLevelStreaming(const URuntimePartitionLevelStreaming&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimePartitionLevelStreaming); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimePartitionLevelStreaming); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimePartitionLevelStreaming) \
	NO_API virtual ~URuntimePartitionLevelStreaming();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimePartitionLevelStreaming>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
