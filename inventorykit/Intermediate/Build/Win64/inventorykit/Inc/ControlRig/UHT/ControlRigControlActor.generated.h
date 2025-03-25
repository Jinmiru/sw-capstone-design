// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigControlActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigControlActor_generated_h
#error "ControlRigControlActor.generated.h already included, missing '#pragma once' in ControlRigControlActor.h"
#endif
#define CONTROLRIG_ControlRigControlActor_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execResetControlActor);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlRigControlActor(); \
	friend struct Z_Construct_UClass_AControlRigControlActor_Statics; \
public: \
	DECLARE_CLASS(AControlRigControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(AControlRigControlActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AControlRigControlActor(AControlRigControlActor&&); \
	AControlRigControlActor(const AControlRigControlActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlRigControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlRigControlActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlRigControlActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_17_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class AControlRigControlActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
