// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGenericAssetsPipelineSharedSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEPIPELINES_InterchangeGenericAssetsPipelineSharedSettings_generated_h
#error "InterchangeGenericAssetsPipelineSharedSettings.generated.h already included, missing '#pragma once' in InterchangeGenericAssetsPipelineSharedSettings.h"
#endif
#define INTERCHANGEPIPELINES_InterchangeGenericAssetsPipelineSharedSettings_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericCommonMeshesProperties(); \
	friend struct Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics; \
public: \
	DECLARE_CLASS(UInterchangeGenericCommonMeshesProperties, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeGenericCommonMeshesProperties)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeGenericCommonMeshesProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeGenericCommonMeshesProperties(UInterchangeGenericCommonMeshesProperties&&); \
	UInterchangeGenericCommonMeshesProperties(const UInterchangeGenericCommonMeshesProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGenericCommonMeshesProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericCommonMeshesProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericCommonMeshesProperties) \
	NO_API virtual ~UInterchangeGenericCommonMeshesProperties();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_49_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangeGenericCommonMeshesProperties>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(); \
	friend struct Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics; \
public: \
	DECLARE_CLASS(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangePipelines"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties&&); \
	UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(const UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties) \
	NO_API virtual ~UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_138_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEPIPELINES_API UClass* StaticClass<class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h


#define FOREACH_ENUM_EINTERCHANGEFORCEMESHTYPE(op) \
	op(EInterchangeForceMeshType::IFMT_None) \
	op(EInterchangeForceMeshType::IFMT_StaticMesh) \
	op(EInterchangeForceMeshType::IFMT_SkeletalMesh) 

enum class EInterchangeForceMeshType : uint8;
template<> struct TIsUEnumClass<EInterchangeForceMeshType> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeForceMeshType>();

#define FOREACH_ENUM_EINTERCHANGEVERTEXCOLORIMPORTOPTION(op) \
	op(EInterchangeVertexColorImportOption::IVCIO_Replace) \
	op(EInterchangeVertexColorImportOption::IVCIO_Ignore) \
	op(EInterchangeVertexColorImportOption::IVCIO_Override) 

enum class EInterchangeVertexColorImportOption : uint8;
template<> struct TIsUEnumClass<EInterchangeVertexColorImportOption> { enum { Value = true }; };
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeVertexColorImportOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
