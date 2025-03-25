// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ModularRig_generated_h
#error "ModularRig.generated.h already included, missing '#pragma once' in ModularRig.h"
#endif
#define CONTROLRIG_ModularRig_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigModuleInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigModuleInstance>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigModuleExecutionElement>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UModularRig, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUModularRig(); \
	friend struct Z_Construct_UClass_UModularRig_Statics; \
public: \
	DECLARE_CLASS(UModularRig, UControlRig, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UModularRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularRig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularRig(UModularRig&&); \
	UModularRig(const UModularRig&); \
public: \
	NO_API virtual ~UModularRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_125_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UModularRig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
