// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugPrimitives.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugPrimitives_generated_h
#error "RigUnit_DebugPrimitives.generated.h already included, missing '#pragma once' in RigUnit_DebugPrimitives.h"
#endif
#define CONTROLRIG_RigUnit_DebugPrimitives_generated_h


#define FRigUnit_DebugRectangle_Execute() \
	void FRigUnit_DebugRectangle::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugRectangle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugRectangle>();


#define FRigUnit_DebugRectangleItemSpace_Execute() \
	void FRigUnit_DebugRectangleItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugRectangleItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugRectangleItemSpace>();


#define FRigUnit_DebugArc_Execute() \
	void FRigUnit_DebugArc::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugArc_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[7].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[8].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugArc>();


#define FRigUnit_DebugArcItemSpace_Execute() \
	void FRigUnit_DebugArcItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugArcItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[7].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[8].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugArcItemSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
