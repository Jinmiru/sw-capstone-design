// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_PBIK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PBIK_RigUnit_PBIK_generated_h
#error "RigUnit_PBIK.generated.h already included, missing '#pragma once' in RigUnit_PBIK.h"
#endif
#define PBIK_RigUnit_PBIK_generated_h

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKDebug_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKDebug>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKEffector_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKEffector>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKWorkData_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKWorkData>();


#define FRigUnit_PBIK_Execute() \
	void FRigUnit_PBIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKWorkData& WorkData \
	)

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Root = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FPBIKEffector>& Effectors = *(TArray<FPBIKEffector>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<int32>& EffectorSolverIndices = *(TArray<int32>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FPBIKBoneSetting>& BoneSettings = *(TArray<FPBIKBoneSetting>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FName>& ExcludedBones = *(TArray<FName>*)RigVMMemoryHandles[4].GetData(false); \
		const FPBIKSolverSettings& Settings = *(FPBIKSolverSettings*)RigVMMemoryHandles[5].GetData(false); \
		const FPBIKDebug& Debug = *(FPBIKDebug*)RigVMMemoryHandles[6].GetData(false); \
		FPBIKWorkData& WorkData = *(FPBIKWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			Effectors, \
			EffectorSolverIndices, \
			BoneSettings, \
			ExcludedBones, \
			Settings, \
			Debug, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> PBIK_API UScriptStruct* StaticStruct<struct FRigUnit_PBIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
