// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExternalDataLayerManager_generated_h
#error "ExternalDataLayerManager.generated.h already included, missing '#pragma once' in ExternalDataLayerManager.h"
#endif
#define ENGINE_ExternalDataLayerManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UExternalDataLayerManager, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalDataLayerManager(); \
	friend struct Z_Construct_UClass_UExternalDataLayerManager_Statics; \
public: \
	DECLARE_CLASS(UExternalDataLayerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UExternalDataLayerManager) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExternalDataLayerManager(UExternalDataLayerManager&&); \
	UExternalDataLayerManager(const UExternalDataLayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalDataLayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExternalDataLayerManager) \
	NO_API virtual ~UExternalDataLayerManager();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExternalDataLayerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
