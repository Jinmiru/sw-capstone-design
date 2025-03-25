// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRigController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
struct FRigElementKey;
struct FRigVMMirrorSettings;
#ifdef CONTROLRIG_ModularRigController_generated_h
#error "ModularRigController.generated.h already included, missing '#pragma once' in ModularRigController.h"
#endif
#define CONTROLRIG_ModularRigController_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetModuleShortName); \
	DECLARE_FUNCTION(execMirrorModule); \
	DECLARE_FUNCTION(execReparentModule); \
	DECLARE_FUNCTION(execRenameModule); \
	DECLARE_FUNCTION(execDeleteModule); \
	DECLARE_FUNCTION(execUnBindModuleVariable); \
	DECLARE_FUNCTION(execBindModuleVariable); \
	DECLARE_FUNCTION(execSetConfigValueInModule); \
	DECLARE_FUNCTION(execAutoConnectModules); \
	DECLARE_FUNCTION(execAutoConnectSecondaryConnectors); \
	DECLARE_FUNCTION(execDisconnectCyclicConnectors); \
	DECLARE_FUNCTION(execDisconnectConnector); \
	DECLARE_FUNCTION(execConnectConnectorToElement); \
	DECLARE_FUNCTION(execCanConnectConnectorToElement); \
	DECLARE_FUNCTION(execAddModule);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUModularRigController(); \
	friend struct Z_Construct_UClass_UModularRigController_Statics; \
public: \
	DECLARE_CLASS(UModularRigController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UModularRigController)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularRigController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularRigController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularRigController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularRigController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularRigController(UModularRigController&&); \
	UModularRigController(const UModularRigController&); \
public: \
	NO_API virtual ~UModularRigController();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UModularRigController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
