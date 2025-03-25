// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Core/RigUnit_UserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_UserData_generated_h
#error "RigUnit_UserData.generated.h already included, missing '#pragma once' in RigUnit_UserData.h"
#endif
#define CONTROLRIG_RigUnit_UserData_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_GetUserData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_GetUserData>();


#define FRigUnit_SetupShapeLibraryFromUserData_Execute() \
	void FRigUnit_SetupShapeLibraryFromUserData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& NameSpace, \
		const FString& Path, \
		const FString& LibraryName, \
		const bool LogShapeLibraries \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetupShapeLibraryFromUserData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FString& NameSpace, \
		const FString& Path, \
		const FString& LibraryName, \
		const bool LogShapeLibraries \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& NameSpace = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Path = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		const FString& LibraryName = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		const bool LogShapeLibraries = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace, \
			Path, \
			LibraryName, \
			LogShapeLibraries \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetupShapeLibraryFromUserData>();


#define FRigUnit_ShapeExists_Execute() \
	void FRigUnit_ShapeExists::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& ShapeName, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ShapeExists_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& ShapeName, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& ShapeName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ShapeName, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ShapeExists>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Core_RigUnit_UserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
