// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InstancedStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InstancedStaticMeshComponent_generated_h
#error "InstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in InstancedStaticMeshComponent.h"
#endif
#define ENGINE_InstancedStaticMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshMappingInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshRandomSeed>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetInstancesOverlappingBox); \
	DECLARE_FUNCTION(execGetInstancesOverlappingSphere); \
	DECLARE_FUNCTION(execGetCullDistances); \
	DECLARE_FUNCTION(execSetCullDistances); \
	DECLARE_FUNCTION(execIsValidInstance); \
	DECLARE_FUNCTION(execGetInstanceCount); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execRemoveInstances); \
	DECLARE_FUNCTION(execRemoveInstance); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransform); \
	DECLARE_FUNCTION(execBatchUpdateInstancesTransforms); \
	DECLARE_FUNCTION(execUpdateInstanceTransform); \
	DECLARE_FUNCTION(execSetLODDistanceScale); \
	DECLARE_FUNCTION(execGetLODDistanceScale); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execSetNumCustomDataFloats); \
	DECLARE_FUNCTION(execSetCustomDataValue); \
	DECLARE_FUNCTION(execAddInstanceWorldSpace); \
	DECLARE_FUNCTION(execAddInstances); \
	DECLARE_FUNCTION(execAddInstance);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInstancedStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInstancedStaticMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UInstancedStaticMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedStaticMeshComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInstancedStaticMeshComponent(UInstancedStaticMeshComponent&&); \
	UInstancedStaticMeshComponent(const UInstancedStaticMeshComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_97_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInstancedStaticMeshComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_745_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshLightMapInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_760_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInstancedStaticMeshComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
