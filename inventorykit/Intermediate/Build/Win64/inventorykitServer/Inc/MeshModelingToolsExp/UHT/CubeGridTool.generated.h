// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CubeGridTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_CubeGridTool_generated_h
#error "CubeGridTool.generated.h already included, missing '#pragma once' in CubeGridTool.h"
#endif
#define MESHMODELINGTOOLSEXP_CubeGridTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubeGridToolBuilder(); \
	friend struct Z_Construct_UClass_UCubeGridToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UCubeGridToolBuilder, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UCubeGridToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCubeGridToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCubeGridToolBuilder(UCubeGridToolBuilder&&); \
	UCubeGridToolBuilder(const UCubeGridToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCubeGridToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubeGridToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCubeGridToolBuilder) \
	NO_API virtual ~UCubeGridToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UCubeGridToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubeGridToolProperties(); \
	friend struct Z_Construct_UClass_UCubeGridToolProperties_Statics; \
public: \
	DECLARE_CLASS(UCubeGridToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UCubeGridToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCubeGridToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCubeGridToolProperties(UCubeGridToolProperties&&); \
	UCubeGridToolProperties(const UCubeGridToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCubeGridToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubeGridToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCubeGridToolProperties) \
	NO_API virtual ~UCubeGridToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_75_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UCubeGridToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAcceptAndStartNew); \
	DECLARE_FUNCTION(execResetGridFromActor); \
	DECLARE_FUNCTION(execFlip); \
	DECLARE_FUNCTION(execCornerMode); \
	DECLARE_FUNCTION(execSlideForward); \
	DECLARE_FUNCTION(execSlideBack); \
	DECLARE_FUNCTION(execPush); \
	DECLARE_FUNCTION(execPull);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubeGridToolActions(); \
	friend struct Z_Construct_UClass_UCubeGridToolActions_Statics; \
public: \
	DECLARE_CLASS(UCubeGridToolActions, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UCubeGridToolActions)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCubeGridToolActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCubeGridToolActions(UCubeGridToolActions&&); \
	UCubeGridToolActions(const UCubeGridToolActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCubeGridToolActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubeGridToolActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCubeGridToolActions) \
	NO_API virtual ~UCubeGridToolActions();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_237_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UCubeGridToolActions>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_308_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCubeGridTool(); \
	friend struct Z_Construct_UClass_UCubeGridTool_Statics; \
public: \
	DECLARE_CLASS(UCubeGridTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UCubeGridTool) \
	virtual UObject* _getUObject() const override { return const_cast<UCubeGridTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_308_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCubeGridTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCubeGridTool(UCubeGridTool&&); \
	UCubeGridTool(const UCubeGridTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCubeGridTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCubeGridTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCubeGridTool) \
	NO_API virtual ~UCubeGridTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_301_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_308_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_308_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UCubeGridTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h


#define FOREACH_ENUM_ECUBEGRIDTOOLFACESELECTIONMODE(op) \
	op(ECubeGridToolFaceSelectionMode::OutsideBasedOnNormal) \
	op(ECubeGridToolFaceSelectionMode::InsideBasedOnNormal) \
	op(ECubeGridToolFaceSelectionMode::OutsideBasedOnViewRay) \
	op(ECubeGridToolFaceSelectionMode::InsideBasedOnViewRay) 

enum class ECubeGridToolFaceSelectionMode;
template<> struct TIsUEnumClass<ECubeGridToolFaceSelectionMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECubeGridToolFaceSelectionMode>();

#define FOREACH_ENUM_ECUBEGRIDTOOLACTION(op) \
	op(ECubeGridToolAction::NoAction) \
	op(ECubeGridToolAction::Push) \
	op(ECubeGridToolAction::Pull) \
	op(ECubeGridToolAction::Flip) \
	op(ECubeGridToolAction::SlideForward) \
	op(ECubeGridToolAction::SlideBack) \
	op(ECubeGridToolAction::DecreaseGridPower) \
	op(ECubeGridToolAction::IncreaseGridPower) \
	op(ECubeGridToolAction::CornerMode) \
	op(ECubeGridToolAction::ResetFromActor) \
	op(ECubeGridToolAction::AcceptAndStartNew) 

enum class ECubeGridToolAction;
template<> struct TIsUEnumClass<ECubeGridToolAction> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECubeGridToolAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
