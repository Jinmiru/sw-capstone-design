// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExternalDataLayerAsset_generated_h
#error "ExternalDataLayerAsset.generated.h already included, missing '#pragma once' in ExternalDataLayerAsset.h"
#endif
#define ENGINE_ExternalDataLayerAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUExternalDataLayerAsset(); \
	friend struct Z_Construct_UClass_UExternalDataLayerAsset_Statics; \
public: \
	DECLARE_CLASS(UExternalDataLayerAsset, UDataLayerAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UExternalDataLayerAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalDataLayerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalDataLayerAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalDataLayerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExternalDataLayerAsset(UExternalDataLayerAsset&&); \
	UExternalDataLayerAsset(const UExternalDataLayerAsset&); \
public: \
	NO_API virtual ~UExternalDataLayerAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExternalDataLayerAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
