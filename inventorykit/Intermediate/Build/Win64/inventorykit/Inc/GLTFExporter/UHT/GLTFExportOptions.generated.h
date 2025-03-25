// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Options/GLTFExportOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GLTFEXPORTER_GLTFExportOptions_generated_h
#error "GLTFExportOptions.generated.h already included, missing '#pragma once' in GLTFExportOptions.h"
#endif
#define GLTFEXPORTER_GLTFExportOptions_generated_h

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUGLTFExportOptions(); \
	friend struct Z_Construct_UClass_UGLTFExportOptions_Statics; \
public: \
	DECLARE_CLASS(UGLTFExportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GLTFExporter"), NO_API) \
	DECLARE_SERIALIZER(UGLTFExportOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLTFExportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFExportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLTFExportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFExportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLTFExportOptions(UGLTFExportOptions&&); \
	UGLTFExportOptions(const UGLTFExportOptions&); \
public: \
	NO_API virtual ~UGLTFExportOptions();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_31_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_INCLASS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFEXPORTER_API UClass* StaticClass<class UGLTFExportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h


#define FOREACH_ENUM_EGLTFTEXTUREIMAGEFORMAT(op) \
	op(EGLTFTextureImageFormat::None) \
	op(EGLTFTextureImageFormat::PNG) \
	op(EGLTFTextureImageFormat::JPEG) 

enum class EGLTFTextureImageFormat : uint8;
template<> struct TIsUEnumClass<EGLTFTextureImageFormat> { enum { Value = true }; };
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFTextureImageFormat>();

#define FOREACH_ENUM_EGLTFMATERIALVARIANTMODE(op) \
	op(EGLTFMaterialVariantMode::None) \
	op(EGLTFMaterialVariantMode::Simple) \
	op(EGLTFMaterialVariantMode::UseMeshData) 

enum class EGLTFMaterialVariantMode : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialVariantMode> { enum { Value = true }; };
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialVariantMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
