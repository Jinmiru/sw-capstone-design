// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODInstancedStaticMeshComponent_generated_h
#error "HLODInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in HLODInstancedStaticMeshComponent.h"
#endif
#define ENGINE_HLODInstancedStaticMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHLODInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UHLODInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHLODInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODInstancedStaticMeshComponent(UHLODInstancedStaticMeshComponent&&); \
	UHLODInstancedStaticMeshComponent(const UHLODInstancedStaticMeshComponent&); \
public: \
	ENGINE_API virtual ~UHLODInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODInstancedStaticMeshComponent>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FISMComponentDescriptor Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHLODISMComponentDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
