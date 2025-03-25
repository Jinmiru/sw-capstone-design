// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODLayer_generated_h
#error "HLODLayer.generated.h already included, missing '#pragma once' in HLODLayer.h"
#endif
#define ENGINE_HLODLayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHLODLayer(); \
	friend struct Z_Construct_UClass_UHLODLayer_Statics; \
public: \
	DECLARE_CLASS(UHLODLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHLODLayer)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODLayer(UHLODLayer&&); \
	UHLODLayer(const UHLODLayer&); \
public: \
	ENGINE_API virtual ~UHLODLayer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h


#define FOREACH_ENUM_EHLODLAYERTYPE(op) \
	op(EHLODLayerType::Instancing) \
	op(EHLODLayerType::MeshMerge) \
	op(EHLODLayerType::MeshSimplify) \
	op(EHLODLayerType::MeshApproximate) \
	op(EHLODLayerType::Custom) 

enum class EHLODLayerType : uint8;
template<> struct TIsUEnumClass<EHLODLayerType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EHLODLayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
