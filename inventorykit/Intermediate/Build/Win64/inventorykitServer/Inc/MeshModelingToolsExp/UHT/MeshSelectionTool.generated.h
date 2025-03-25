// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshSelectionTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_MeshSelectionTool_generated_h
#error "MeshSelectionTool.generated.h already included, missing '#pragma once' in MeshSelectionTool.h"
#endif
#define MESHMODELINGTOOLSEXP_MeshSelectionTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionToolBuilder(); \
	friend struct Z_Construct_UClass_UMeshSelectionToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionToolBuilder, UMeshSurfacePointMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionToolBuilder(UMeshSelectionToolBuilder&&); \
	UMeshSelectionToolBuilder(const UMeshSelectionToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSelectionToolBuilder) \
	NO_API virtual ~UMeshSelectionToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionToolActionPropertySet(); \
	friend struct Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionToolActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionToolActionPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshSelectionToolActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionToolActionPropertySet(UMeshSelectionToolActionPropertySet&&); \
	UMeshSelectionToolActionPropertySet(const UMeshSelectionToolActionPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionToolActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionToolActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSelectionToolActionPropertySet) \
	NO_API virtual ~UMeshSelectionToolActionPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionToolActionPropertySet>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExpandToMaterials); \
	DECLARE_FUNCTION(execOptimizeBorder); \
	DECLARE_FUNCTION(execLargestAreaPart); \
	DECLARE_FUNCTION(execLargestTriCountPart); \
	DECLARE_FUNCTION(execFloodFill); \
	DECLARE_FUNCTION(execShrink); \
	DECLARE_FUNCTION(execGrow); \
	DECLARE_FUNCTION(execInvert); \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execClear);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionEditActions(); \
	friend struct Z_Construct_UClass_UMeshSelectionEditActions_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionEditActions, UMeshSelectionToolActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionEditActions)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshSelectionEditActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionEditActions(UMeshSelectionEditActions&&); \
	UMeshSelectionEditActions(const UMeshSelectionEditActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionEditActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionEditActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSelectionEditActions) \
	NO_API virtual ~UMeshSelectionEditActions();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_85_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionEditActions>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSmoothBorder); \
	DECLARE_FUNCTION(execDuplicate); \
	DECLARE_FUNCTION(execSeparate); \
	DECLARE_FUNCTION(execCreatePolygroup); \
	DECLARE_FUNCTION(execFlipNormals); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execDelete);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionMeshEditActions(); \
	friend struct Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionMeshEditActions, UMeshSelectionToolActionPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionMeshEditActions)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshSelectionMeshEditActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionMeshEditActions(UMeshSelectionMeshEditActions&&); \
	UMeshSelectionMeshEditActions(const UMeshSelectionMeshEditActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionMeshEditActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionMeshEditActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSelectionMeshEditActions) \
	NO_API virtual ~UMeshSelectionMeshEditActions();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_166_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionMeshEditActions>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionToolProperties(); \
	friend struct Z_Construct_UClass_UMeshSelectionToolProperties_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_281_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionToolProperties(UMeshSelectionToolProperties&&); \
	UMeshSelectionToolProperties(const UMeshSelectionToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshSelectionToolProperties) \
	NO_API virtual ~UMeshSelectionToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_278_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_281_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_281_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_313_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionTool(); \
	friend struct Z_Construct_UClass_UMeshSelectionTool_Statics; \
public: \
	DECLARE_CLASS(UMeshSelectionTool, UDynamicMeshBrushTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UMeshSelectionTool) \
	virtual UObject* _getUObject() const override { return const_cast<UMeshSelectionTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_313_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeshSelectionTool(UMeshSelectionTool&&); \
	UMeshSelectionTool(const UMeshSelectionTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshSelectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshSelectionTool) \
	NO_API virtual ~UMeshSelectionTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_310_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_313_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_313_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_313_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UMeshSelectionTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h


#define FOREACH_ENUM_EMESHSELECTIONTOOLACTIONS(op) \
	op(EMeshSelectionToolActions::NoAction) \
	op(EMeshSelectionToolActions::SelectAll) \
	op(EMeshSelectionToolActions::SelectAllByMaterial) \
	op(EMeshSelectionToolActions::ClearSelection) \
	op(EMeshSelectionToolActions::InvertSelection) \
	op(EMeshSelectionToolActions::GrowSelection) \
	op(EMeshSelectionToolActions::ShrinkSelection) \
	op(EMeshSelectionToolActions::ExpandToConnected) \
	op(EMeshSelectionToolActions::SelectLargestComponentByTriCount) \
	op(EMeshSelectionToolActions::SelectLargestComponentByArea) \
	op(EMeshSelectionToolActions::OptimizeSelection) \
	op(EMeshSelectionToolActions::DeleteSelected) \
	op(EMeshSelectionToolActions::DisconnectSelected) \
	op(EMeshSelectionToolActions::SeparateSelected) \
	op(EMeshSelectionToolActions::DuplicateSelected) \
	op(EMeshSelectionToolActions::FlipSelected) \
	op(EMeshSelectionToolActions::CreateGroup) \
	op(EMeshSelectionToolActions::SmoothBoundary) \
	op(EMeshSelectionToolActions::CycleSelectionMode) \
	op(EMeshSelectionToolActions::CycleViewMode) 

enum class EMeshSelectionToolActions;
template<> struct TIsUEnumClass<EMeshSelectionToolActions> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSelectionToolActions>();

#define FOREACH_ENUM_EMESHSELECTIONTOOLPRIMARYMODE(op) \
	op(EMeshSelectionToolPrimaryMode::Brush) \
	op(EMeshSelectionToolPrimaryMode::VolumetricBrush) \
	op(EMeshSelectionToolPrimaryMode::AngleFiltered) \
	op(EMeshSelectionToolPrimaryMode::Visible) \
	op(EMeshSelectionToolPrimaryMode::AllConnected) \
	op(EMeshSelectionToolPrimaryMode::AllInGroup) \
	op(EMeshSelectionToolPrimaryMode::ByMaterial) \
	op(EMeshSelectionToolPrimaryMode::ByMaterialAll) \
	op(EMeshSelectionToolPrimaryMode::ByUVIsland) \
	op(EMeshSelectionToolPrimaryMode::AllWithinAngle) 

enum class EMeshSelectionToolPrimaryMode;
template<> struct TIsUEnumClass<EMeshSelectionToolPrimaryMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSelectionToolPrimaryMode>();

#define FOREACH_ENUM_EMESHFACESCOLORMODE(op) \
	op(EMeshFacesColorMode::None) \
	op(EMeshFacesColorMode::ByGroup) \
	op(EMeshFacesColorMode::ByMaterialID) \
	op(EMeshFacesColorMode::ByUVIsland) 

enum class EMeshFacesColorMode;
template<> struct TIsUEnumClass<EMeshFacesColorMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshFacesColorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
