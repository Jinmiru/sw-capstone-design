// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMDebugInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMDebugInfo_generated_h
#error "RigVMDebugInfo.generated.h already included, missing '#pragma once' in RigVMDebugInfo.h"
#endif
#define RIGVM_RigVMDebugInfo_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMBreakpoint>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMDebugInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDebugInfo_h


#define FOREACH_ENUM_ERIGVMBREAKPOINTACTION(op) \
	op(ERigVMBreakpointAction::None) \
	op(ERigVMBreakpointAction::Resume) \
	op(ERigVMBreakpointAction::StepOver) \
	op(ERigVMBreakpointAction::StepInto) \
	op(ERigVMBreakpointAction::StepOut) \
	op(ERigVMBreakpointAction::Max) 

enum class ERigVMBreakpointAction : uint8;
template<> struct TIsUEnumClass<ERigVMBreakpointAction> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMBreakpointAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
