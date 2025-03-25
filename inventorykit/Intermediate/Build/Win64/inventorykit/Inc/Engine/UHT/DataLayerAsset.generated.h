// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLayerType : uint8;
struct FColor;
#ifdef ENGINE_DataLayerAsset_generated_h
#error "DataLayerAsset.generated.h already included, missing '#pragma once' in DataLayerAsset.h"
#endif
#define ENGINE_DataLayerAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsServerOnly); \
	DECLARE_FUNCTION(execIsClientOnly); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execGetType);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerAsset(); \
	friend struct Z_Construct_UClass_UDataLayerAsset_Statics; \
public: \
	DECLARE_CLASS(UDataLayerAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataLayerAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataLayerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerAsset(UDataLayerAsset&&); \
	UDataLayerAsset(const UDataLayerAsset&); \
public: \
	ENGINE_API virtual ~UDataLayerAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h


#define FOREACH_ENUM_EDATALAYERLOADFILTER(op) \
	op(EDataLayerLoadFilter::None) \
	op(EDataLayerLoadFilter::ClientOnly) \
	op(EDataLayerLoadFilter::ServerOnly) 

enum class EDataLayerLoadFilter : uint8;
template<> struct TIsUEnumClass<EDataLayerLoadFilter> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EDataLayerLoadFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
