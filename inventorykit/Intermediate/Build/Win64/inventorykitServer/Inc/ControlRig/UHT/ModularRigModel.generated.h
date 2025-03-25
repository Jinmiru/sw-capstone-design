// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRigModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ModularRigModel_generated_h
#error "ModularRigModel.generated.h already included, missing '#pragma once' in ModularRigModel.h"
#endif
#define CONTROLRIG_ModularRigModel_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigModuleReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigModuleReference>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularRigSingleConnection_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FModularRigSingleConnection>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularRigConnections_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FModularRigConnections>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularRigModel_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FModularRigModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigModel_h


#define FOREACH_ENUM_EMODULARRIGNOTIFICATION(op) \
	op(EModularRigNotification::ModuleAdded) \
	op(EModularRigNotification::ModuleRenamed) \
	op(EModularRigNotification::ModuleRemoved) \
	op(EModularRigNotification::ModuleReparented) \
	op(EModularRigNotification::ConnectionChanged) \
	op(EModularRigNotification::ModuleConfigValueChanged) \
	op(EModularRigNotification::ModuleShortNameChanged) \
	op(EModularRigNotification::InteractionBracketOpened) \
	op(EModularRigNotification::InteractionBracketClosed) \
	op(EModularRigNotification::InteractionBracketCanceled) \
	op(EModularRigNotification::Max) 

enum class EModularRigNotification : uint8;
template<> struct TIsUEnumClass<EModularRigNotification> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EModularRigNotification>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
