// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_RigModules.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_RigModules_generated_h
#error "RigUnit_RigModules.generated.h already included, missing '#pragma once' in RigUnit_RigModules.h"
#endif
#define CONTROLRIG_RigUnit_RigModules_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RigModulesBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RigModulesBaseMutable>();


#define FRigUnit_ResolveConnector_Execute() \
	void FRigUnit_ResolveConnector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		FRigElementKey& Result, \
		bool& bIsConnected \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Connector, \
		const bool SkipSocket, \
		FRigElementKey& Result, \
		bool& bIsConnected \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Connector = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool SkipSocket = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKey& Result = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		bool& bIsConnected = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Connector, \
			SkipSocket, \
			Result, \
			bIsConnected \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ResolveConnector>();


#define FRigUnit_GetCurrentNameSpace_Execute() \
	void FRigUnit_GetCurrentNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& NameSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FString& NameSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FString& NameSpace = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetCurrentNameSpace>();


#define FRigUnit_GetItemShortName_Execute() \
	void FRigUnit_GetItemShortName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FName& ShortName \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FName& ShortName \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		FName& ShortName = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			ShortName \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetItemShortName>();


#define FRigUnit_GetItemNameSpace_Execute() \
	void FRigUnit_GetItemNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& HasNameSpace, \
		FString& NameSpace \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& HasNameSpace, \
		FString& NameSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& HasNameSpace = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FString& NameSpace = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			HasNameSpace, \
			NameSpace \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetItemNameSpace>();


#define FRigUnit_IsItemInCurrentNameSpace_Execute() \
	void FRigUnit_IsItemInCurrentNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Result \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_IsItemInCurrentNameSpace>();


#define FRigUnit_GetItemsInNameSpace_Execute() \
	void FRigUnit_GetItemsInNameSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_RigModulesBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetItemsInNameSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
