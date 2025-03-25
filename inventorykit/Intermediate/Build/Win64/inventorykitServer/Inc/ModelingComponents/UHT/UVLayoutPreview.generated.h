// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/UVLayoutPreview.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_UVLayoutPreview_generated_h
#error "UVLayoutPreview.generated.h already included, missing '#pragma once' in UVLayoutPreview.h"
#endif
#define MODELINGCOMPONENTS_UVLayoutPreview_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutPreviewProperties(); \
	friend struct Z_Construct_UClass_UUVLayoutPreviewProperties_Statics; \
public: \
	DECLARE_CLASS(UUVLayoutPreviewProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UUVLayoutPreviewProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVLayoutPreviewProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVLayoutPreviewProperties(UUVLayoutPreviewProperties&&); \
	UUVLayoutPreviewProperties(const UUVLayoutPreviewProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVLayoutPreviewProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutPreviewProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutPreviewProperties) \
	NO_API virtual ~UUVLayoutPreviewProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UUVLayoutPreviewProperties>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutPreview(); \
	friend struct Z_Construct_UClass_UUVLayoutPreview_Statics; \
public: \
	DECLARE_CLASS(UUVLayoutPreview, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UUVLayoutPreview)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVLayoutPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVLayoutPreview(UUVLayoutPreview&&); \
	UUVLayoutPreview(const UUVLayoutPreview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVLayoutPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutPreview)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UUVLayoutPreview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h


#define FOREACH_ENUM_EUVLAYOUTPREVIEWSIDE(op) \
	op(EUVLayoutPreviewSide::Left) \
	op(EUVLayoutPreviewSide::Right) 

enum class EUVLayoutPreviewSide;
template<> struct TIsUEnumClass<EUVLayoutPreviewSide> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EUVLayoutPreviewSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
