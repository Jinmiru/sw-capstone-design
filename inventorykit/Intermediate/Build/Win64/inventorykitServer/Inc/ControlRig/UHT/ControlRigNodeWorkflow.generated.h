// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/ControlRigNodeWorkflow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRigVMUserWorkflow;
#ifdef CONTROLRIG_ControlRigNodeWorkflow_generated_h
#error "ControlRigNodeWorkflow.generated.h already included, missing '#pragma once' in ControlRigNodeWorkflow.h"
#endif
#define CONTROLRIG_ControlRigNodeWorkflow_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnsureAtLeastOneRigElementSelected);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigWorkflowOptions(); \
	friend struct Z_Construct_UClass_UControlRigWorkflowOptions_Statics; \
public: \
	DECLARE_CLASS(UControlRigWorkflowOptions, URigVMUserWorkflowOptions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigWorkflowOptions)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigWorkflowOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigWorkflowOptions(UControlRigWorkflowOptions&&); \
	UControlRigWorkflowOptions(const UControlRigWorkflowOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigWorkflowOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigWorkflowOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigWorkflowOptions) \
	NO_API virtual ~UControlRigWorkflowOptions();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_9_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigWorkflowOptions>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProvideWorkflows);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigTransformWorkflowOptions(); \
	friend struct Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics; \
public: \
	DECLARE_CLASS(UControlRigTransformWorkflowOptions, UControlRigWorkflowOptions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigTransformWorkflowOptions)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigTransformWorkflowOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigTransformWorkflowOptions(UControlRigTransformWorkflowOptions&&); \
	UControlRigTransformWorkflowOptions(const UControlRigTransformWorkflowOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigTransformWorkflowOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigTransformWorkflowOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigTransformWorkflowOptions) \
	NO_API virtual ~UControlRigTransformWorkflowOptions();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_26_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigTransformWorkflowOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
