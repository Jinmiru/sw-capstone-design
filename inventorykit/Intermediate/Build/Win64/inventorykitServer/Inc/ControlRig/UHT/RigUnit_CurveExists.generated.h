// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_CurveExists.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_CurveExists_generated_h
#error "RigUnit_CurveExists.generated.h already included, missing '#pragma once' in RigUnit_CurveExists.h"
#endif
#define CONTROLRIG_RigUnit_CurveExists_generated_h


#define FRigUnit_CurveExists_Execute() \
	void FRigUnit_CurveExists::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Exists, \
		FCachedRigElement& CachedCurveIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Exists, \
		FCachedRigElement& CachedCurveIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Curve = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		bool& Exists = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedCurveIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Curve, \
			Exists, \
			CachedCurveIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CurveExists>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
