// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserData/GLTFMaterialUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GLTFEXPORTER_GLTFMaterialUserData_generated_h
#error "GLTFMaterialUserData.generated.h already included, missing '#pragma once' in GLTFMaterialUserData.h"
#endif
#define GLTFEXPORTER_GLTFMaterialUserData_generated_h

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLTFMaterialBakeSize_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<struct FGLTFMaterialBakeSize>();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<struct FGLTFOverrideMaterialBakeSettings>();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFMaterialExportOptions(); \
	friend struct Z_Construct_UClass_UGLTFMaterialExportOptions_Statics; \
public: \
	DECLARE_CLASS(UGLTFMaterialExportOptions, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GLTFExporter"), NO_API) \
	DECLARE_SERIALIZER(UGLTFMaterialExportOptions)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGLTFMaterialExportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGLTFMaterialExportOptions(UGLTFMaterialExportOptions&&); \
	UGLTFMaterialExportOptions(const UGLTFMaterialExportOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGLTFMaterialExportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFMaterialExportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFMaterialExportOptions) \
	NO_API virtual ~UGLTFMaterialExportOptions();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_87_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFEXPORTER_API UClass* StaticClass<class UGLTFMaterialExportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h


#define FOREACH_ENUM_EGLTFMATERIALBAKEMODE(op) \
	op(EGLTFMaterialBakeMode::Disabled) \
	op(EGLTFMaterialBakeMode::Simple) \
	op(EGLTFMaterialBakeMode::UseMeshData) 

enum class EGLTFMaterialBakeMode : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialBakeMode> { enum { Value = true }; };
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialBakeMode>();

#define FOREACH_ENUM_EGLTFMATERIALPROPERTYGROUP(op) \
	op(EGLTFMaterialPropertyGroup::None) \
	op(EGLTFMaterialPropertyGroup::BaseColorOpacity) \
	op(EGLTFMaterialPropertyGroup::MetallicRoughness) \
	op(EGLTFMaterialPropertyGroup::EmissiveColor) \
	op(EGLTFMaterialPropertyGroup::Normal) \
	op(EGLTFMaterialPropertyGroup::AmbientOcclusion) \
	op(EGLTFMaterialPropertyGroup::ClearCoatRoughness) \
	op(EGLTFMaterialPropertyGroup::ClearCoatBottomNormal) 

enum class EGLTFMaterialPropertyGroup : uint8;
template<> struct TIsUEnumClass<EGLTFMaterialPropertyGroup> { enum { Value = true }; };
template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialPropertyGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
