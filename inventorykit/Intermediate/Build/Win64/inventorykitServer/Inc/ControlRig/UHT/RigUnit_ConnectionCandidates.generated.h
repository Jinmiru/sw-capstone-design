// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Modules/RigUnit_ConnectionCandidates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ConnectionCandidates_generated_h
#error "RigUnit_ConnectionCandidates.generated.h already included, missing '#pragma once' in RigUnit_ConnectionCandidates.h"
#endif
#define CONTROLRIG_RigUnit_ConnectionCandidates_generated_h


#define FRigUnit_GetCandidates_Execute() \
	void FRigUnit_GetCandidates::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRigElementKey& Connector, \
		TArray<FRigElementKey>& Candidates \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRigElementKey& Connector, \
		TArray<FRigElementKey>& Candidates \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRigElementKey& Connector = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Candidates = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Connector, \
			Candidates \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetCandidates>();


#define FRigUnit_DiscardMatches_Execute() \
	void FRigUnit_DiscardMatches::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Excluded, \
		const FString& Message \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Excluded, \
		const FString& Message \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Excluded = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Message = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Excluded, \
			Message \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DiscardMatches>();


#define FRigUnit_SetDefaultMatch_Execute() \
	void FRigUnit_SetDefaultMatch::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Default \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Default \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Default = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Default \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetDefaultMatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
