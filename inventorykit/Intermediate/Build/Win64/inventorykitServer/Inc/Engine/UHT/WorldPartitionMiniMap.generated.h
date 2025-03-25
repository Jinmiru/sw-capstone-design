// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionMiniMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionMiniMap_generated_h
#error "WorldPartitionMiniMap.generated.h already included, missing '#pragma once' in WorldPartitionMiniMap.h"
#endif
#define ENGINE_WorldPartitionMiniMap_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionMiniMap(); \
	friend struct Z_Construct_UClass_AWorldPartitionMiniMap_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionMiniMap, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldPartitionMiniMap)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldPartitionMiniMap(AWorldPartitionMiniMap&&); \
	AWorldPartitionMiniMap(const AWorldPartitionMiniMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldPartitionMiniMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionMiniMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionMiniMap) \
	ENGINE_API virtual ~AWorldPartitionMiniMap();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionMiniMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
