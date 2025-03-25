// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformMeshesTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_TransformMeshesTool_generated_h
#error "TransformMeshesTool.generated.h already included, missing '#pragma once' in TransformMeshesTool.h"
#endif
#define MESHMODELINGTOOLSEXP_TransformMeshesTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformMeshesToolBuilder(); \
	friend struct Z_Construct_UClass_UTransformMeshesToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UTransformMeshesToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransformMeshesToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransformMeshesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformMeshesToolBuilder(UTransformMeshesToolBuilder&&); \
	UTransformMeshesToolBuilder(const UTransformMeshesToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformMeshesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformMeshesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformMeshesToolBuilder) \
	NO_API virtual ~UTransformMeshesToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransformMeshesToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformMeshesToolProperties(); \
	friend struct Z_Construct_UClass_UTransformMeshesToolProperties_Statics; \
public: \
	DECLARE_CLASS(UTransformMeshesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransformMeshesToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransformMeshesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformMeshesToolProperties(UTransformMeshesToolProperties&&); \
	UTransformMeshesToolProperties(const UTransformMeshesToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformMeshesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformMeshesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformMeshesToolProperties) \
	NO_API virtual ~UTransformMeshesToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransformMeshesToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformMeshesTarget_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<struct FTransformMeshesTarget>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformMeshesTool(); \
	friend struct Z_Construct_UClass_UTransformMeshesTool_Statics; \
public: \
	DECLARE_CLASS(UTransformMeshesTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UTransformMeshesTool) \
	virtual UObject* _getUObject() const override { return const_cast<UTransformMeshesTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_153_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformMeshesTool(UTransformMeshesTool&&); \
	UTransformMeshesTool(const UTransformMeshesTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformMeshesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformMeshesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransformMeshesTool) \
	NO_API virtual ~UTransformMeshesTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_150_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UTransformMeshesTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransformMeshesTool_h


#define FOREACH_ENUM_ETRANSFORMMESHESTRANSFORMMODE(op) \
	op(ETransformMeshesTransformMode::SharedGizmo) \
	op(ETransformMeshesTransformMode::SharedGizmoLocal) \
	op(ETransformMeshesTransformMode::PerObjectGizmo) \
	op(ETransformMeshesTransformMode::LastValue) 

enum class ETransformMeshesTransformMode : uint8;
template<> struct TIsUEnumClass<ETransformMeshesTransformMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesTransformMode>();

#define FOREACH_ENUM_ETRANSFORMMESHESSNAPDRAGSOURCE(op) \
	op(ETransformMeshesSnapDragSource::ClickPoint) \
	op(ETransformMeshesSnapDragSource::Pivot) \
	op(ETransformMeshesSnapDragSource::LastValue) 

enum class ETransformMeshesSnapDragSource : uint8;
template<> struct TIsUEnumClass<ETransformMeshesSnapDragSource> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesSnapDragSource>();

#define FOREACH_ENUM_ETRANSFORMMESHESSNAPDRAGROTATIONMODE(op) \
	op(ETransformMeshesSnapDragRotationMode::Ignore) \
	op(ETransformMeshesSnapDragRotationMode::Align) \
	op(ETransformMeshesSnapDragRotationMode::AlignFlipped) \
	op(ETransformMeshesSnapDragRotationMode::LastValue) 

enum class ETransformMeshesSnapDragRotationMode : uint8;
template<> struct TIsUEnumClass<ETransformMeshesSnapDragRotationMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ETransformMeshesSnapDragRotationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
