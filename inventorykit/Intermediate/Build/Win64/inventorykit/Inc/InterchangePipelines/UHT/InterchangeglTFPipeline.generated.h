// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeglTFPipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEPIPELINES_InterchangeglTFPipeline_generated_h
#error "InterchangeglTFPipeline.generated.h already included, missing '#pragma once' in InterchangeglTFPipeline.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeglTFPipeline_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFPipelineSettings(); \
	friend struct Z_Construct_UClass_UGLTFPipelineSettings_Statics; \
public: \
	DECLARE_CLASS(UGLTFPipelineSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UGLTFPipelineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Interchange");} \



#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLTFPipelineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLTFPipelineSettings(UGLTFPipelineSettings&&); \
	UGLTFPipelineSettings(const UGLTFPipelineSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLTFPipelineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFPipelineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFPipelineSettings) \
	NO_API virtual ~UGLTFPipelineSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_19_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UGLTFPipelineSettings>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGLTFPipeline(); \
	friend struct Z_Construct_UClass_UInterchangeGLTFPipeline_Statics; \
public: \
	DECLARE_CLASS(UInterchangeGLTFPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeGLTFPipeline)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeGLTFPipeline(UInterchangeGLTFPipeline&&); \
	UInterchangeGLTFPipeline(const UInterchangeGLTFPipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGLTFPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGLTFPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGLTFPipeline) \
	NO_API virtual ~UInterchangeGLTFPipeline();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_46_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangeGLTFPipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
