// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBlueprintPipelineBase;
class UInterchangeManager;
class UInterchangePipelineBase;
class UInterchangePythonPipelineBase;
class UInterchangeSourceData;
class UObject;
struct FImportAssetParameters;
#ifdef INTERCHANGEENGINE_InterchangeManager_generated_h
#error "InterchangeManager.generated.h already included, missing '#pragma once' in InterchangeManager.h"
#endif
#define INTERCHANGEENGINE_InterchangeManager_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_40_DELEGATE \
INTERCHANGEENGINE_API void FOnObjectImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnObjectImportDoneDynamic, UObject* Object);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_43_DELEGATE \
INTERCHANGEENGINE_API void FOnImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnImportDoneDynamic, TArray<UObject*> const& Objects);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPipeline); \
	DECLARE_FUNCTION(execAddBlueprintPipeline); \
	DECLARE_FUNCTION(execAddPythonPipeline);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineStackOverride(); \
	friend struct Z_Construct_UClass_UInterchangePipelineStackOverride_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineStackOverride, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangePipelineStackOverride)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangePipelineStackOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePipelineStackOverride(UInterchangePipelineStackOverride&&); \
	UInterchangePipelineStackOverride(const UInterchangePipelineStackOverride&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangePipelineStackOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineStackOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineStackOverride) \
	INTERCHANGEENGINE_API virtual ~UInterchangePipelineStackOverride();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_334_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_337_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangePipelineStackOverride>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_356_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportAssetParameters_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FImportAssetParameters>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegisteredFactoryClass); \
	DECLARE_FUNCTION(execCreateSourceData); \
	DECLARE_FUNCTION(execExportScene); \
	DECLARE_FUNCTION(execExportAsset); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execGetInterchangeManagerScripted);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeManager(); \
	friend struct Z_Construct_UClass_UInterchangeManager_Statics; \
public: \
	DECLARE_CLASS(UInterchangeManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangeManager)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeManager(UInterchangeManager&&); \
	UInterchangeManager(const UInterchangeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeManager) \
	INTERCHANGEENGINE_API virtual ~UInterchangeManager();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_413_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_416_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
