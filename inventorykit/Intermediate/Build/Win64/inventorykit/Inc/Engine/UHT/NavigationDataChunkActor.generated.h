// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/NavigationData/NavigationDataChunkActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationDataChunkActor_generated_h
#error "NavigationDataChunkActor.generated.h already included, missing '#pragma once' in NavigationDataChunkActor.h"
#endif
#define ENGINE_NavigationDataChunkActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavigationDataChunkActor(); \
	friend struct Z_Construct_UClass_ANavigationDataChunkActor_Statics; \
public: \
	DECLARE_CLASS(ANavigationDataChunkActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavigationDataChunkActor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavigationDataChunkActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationDataChunkActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavigationDataChunkActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationDataChunkActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavigationDataChunkActor(ANavigationDataChunkActor&&); \
	ANavigationDataChunkActor(const ANavigationDataChunkActor&); \
public: \
	ENGINE_API virtual ~ANavigationDataChunkActor();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ANavigationDataChunkActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_NavigationData_NavigationDataChunkActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
