// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_Metadata.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Metadata_generated_h
#error "RigUnit_Metadata.generated.h already included, missing '#pragma once' in RigUnit_Metadata.h"
#endif
#define CONTROLRIG_RigUnit_Metadata_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_MetadataBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_GetMetadata>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_SetMetadata>();


#define FRigUnit_RemoveMetadata_Execute() \
	void FRigUnit_RemoveMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_319_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadata>();


#define FRigUnit_RemoveAllMetadata_Execute() \
	void FRigUnit_RemoveAllMetadata::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_365_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveAllMetadata>();


#define FRigUnit_HasMetadata_Execute() \
	void FRigUnit_HasMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_404_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[2].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[3].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Name, \
			Type, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadata>();


#define FRigUnit_FindItemsWithMetadata_Execute() \
	void FRigUnit_FindItemsWithMetadata::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Name, \
			Type, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadata>();


#define FRigUnit_GetMetadataTags_Execute() \
	void FRigUnit_GetMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_498_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetMetadataTags>();


#define FRigUnit_SetMetadataTag_Execute() \
	void FRigUnit_SetMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTag>();


#define FRigUnit_SetMetadataTagArray_Execute() \
	void FRigUnit_SetMetadataTagArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_573_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			NameSpace, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTagArray>();


#define FRigUnit_RemoveMetadataTag_Execute() \
	void FRigUnit_RemoveMetadataTag::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_614_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Removed, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			Removed, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadataTag>();


#define FRigUnit_HasMetadataTag_Execute() \
	void FRigUnit_HasMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_662_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tag, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTag>();


#define FRigUnit_HasMetadataTagArray_Execute() \
	void FRigUnit_HasMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_708_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		bool& Found, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Tags, \
			NameSpace, \
			Found, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTagArray>();


#define FRigUnit_FindItemsWithMetadataTag_Execute() \
	void FRigUnit_FindItemsWithMetadataTag::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_754_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Tag, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Tag = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tag, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTag>();


#define FRigUnit_FindItemsWithMetadataTagArray_Execute() \
	void FRigUnit_FindItemsWithMetadataTagArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_788_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Tags, \
			NameSpace, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTagArray>();


#define FRigUnit_FilterItemsByMetadataTags_Execute() \
	void FRigUnit_FilterItemsByMetadataTags::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_822_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const ERigMetaDataNameSpace NameSpace, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetaDataNameSpace NameSpace = *(ERigMetaDataNameSpace*)RigVMMemoryHandles[2].GetData(false); \
		const bool Inclusive = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FCachedRigElement>& CachedIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Tags, \
			NameSpace, \
			Inclusive, \
			Result, \
			CachedIndices \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FilterItemsByMetadataTags>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_873_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_GetModuleMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_GetMetadata Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_GetModuleMetadata>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h_936_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_SetModuleMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_SetMetadata Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_SetModuleMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_Metadata_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
