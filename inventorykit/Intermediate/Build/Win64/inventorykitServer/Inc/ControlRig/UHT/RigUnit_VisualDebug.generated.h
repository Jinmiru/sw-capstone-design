// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_VisualDebug.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_VisualDebug_generated_h
#error "RigUnit_VisualDebug.generated.h already included, missing '#pragma once' in RigUnit_VisualDebug.h"
#endif
#define CONTROLRIG_RigUnit_VisualDebug_generated_h


#define FRigUnit_VisualDebugVector_Execute() \
	void FRigUnit_VisualDebugVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugVector>();


#define FRigUnit_VisualDebugVectorItemSpace_Execute() \
	void FRigUnit_VisualDebugVectorItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugVectorItemSpace>();


#define FRigUnit_VisualDebugQuat_Execute() \
	void FRigUnit_VisualDebugQuat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugQuat>();


#define FRigUnit_VisualDebugQuatItemSpace_Execute() \
	void FRigUnit_VisualDebugQuatItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			Space \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugQuatItemSpace>();


#define FRigUnit_VisualDebugTransform_Execute() \
	void FRigUnit_VisualDebugTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugTransform>();


#define FRigUnit_VisualDebugTransformItemSpace_Execute() \
	void FRigUnit_VisualDebugTransformItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			Space \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VisualDebugTransformItemSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
