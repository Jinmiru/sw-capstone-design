// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerAsset;
class UDataLayerInstance;
enum class EDataLayerRuntimeState : uint8;
#ifdef ENGINE_DataLayerManager_generated_h
#error "DataLayerManager.generated.h already included, missing '#pragma once' in DataLayerManager.h"
#endif
#define ENGINE_DataLayerManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_27_DELEGATE \
ENGINE_API void FOnDataLayerInstanceRuntimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataLayerInstanceRuntimeStateChanged, const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDataLayerInstanceEffectiveRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execSetDataLayerRuntimeState); \
	DECLARE_FUNCTION(execSetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceFromName); \
	DECLARE_FUNCTION(execGetDataLayerInstanceFromAsset); \
	DECLARE_FUNCTION(execGetDataLayerInstances);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerManager(); \
	friend struct Z_Construct_UClass_UDataLayerManager_Statics; \
public: \
	DECLARE_CLASS(UDataLayerManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataLayerManager) \
	DECLARE_WITHIN(UWorldPartition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerManager(UDataLayerManager&&); \
	UDataLayerManager(const UDataLayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataLayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLayerManager) \
	ENGINE_API virtual ~UDataLayerManager();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
