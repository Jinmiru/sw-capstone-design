// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SlideChain() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SlideChain_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData;
class UScriptStruct* FRigUnit_SlideChain_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChain_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChain_WorkData>()
{
	return FRigUnit_SlideChain_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendedTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendedTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChain_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, ChainLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainLength_MetaData), NewProp_ChainLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_Inner = { "ItemSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments = { "ItemSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, ItemSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSegments_MetaData), NewProp_ItemSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_Inner = { "BlendedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms = { "BlendedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, BlendedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendedTransforms_MetaData), NewProp_BlendedTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_SlideChain_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_SlideChain_WorkData),
	alignof(FRigUnit_SlideChain_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_SlideChain_WorkData

// Begin ScriptStruct FRigUnit_SlideChain
static_assert(std::is_polymorphic<FRigUnit_SlideChain>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChain cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChain;
class UScriptStruct* FRigUnit_SlideChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChain, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChain"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChain_Execute;
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChain::Execute"), &FRigUnit_SlideChain::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton, Arguments_FRigUnit_SlideChain_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChain>()
{
	return FRigUnit_SlideChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The name of the first bone to slide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The name of the last bone to slide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain, StartBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain, EndBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBone_MetaData), NewProp_EndBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain, SlideAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmount_MetaData), NewProp_SlideAmount_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_SlideChain*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SlideChain), &Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChain, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3912932309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_SlideChain",
	Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers),
	sizeof(FRigUnit_SlideChain),
	alignof(FRigUnit_SlideChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton;
}
void FRigUnit_SlideChain::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SlideChain::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SlideChain

// Begin ScriptStruct FRigUnit_SlideChainPerItem
static_assert(std::is_polymorphic<FRigUnit_SlideChainPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChainPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem;
class UScriptStruct* FRigUnit_SlideChainPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChainPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChainPerItem_Execute;
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChainPerItem::Execute"), &FRigUnit_SlideChainPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton, Arguments_FRigUnit_SlideChainPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChainPerItem>()
{
	return FRigUnit_SlideChainPerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The items to slide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChainPerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, SlideAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmount_MetaData), NewProp_SlideAmount_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_SlideChainPerItem*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SlideChainPerItem), &Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3912932309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_SlideChainPerItem",
	Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers),
	sizeof(FRigUnit_SlideChainPerItem),
	alignof(FRigUnit_SlideChainPerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton;
}
void FRigUnit_SlideChainPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SlideChainPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SlideChainPerItem

// Begin ScriptStruct FRigUnit_SlideChainItemArray
static_assert(std::is_polymorphic<FRigUnit_SlideChainItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChainItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray;
class UScriptStruct* FRigUnit_SlideChainItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChainItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChainItemArray_Execute;
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChainItemArray::Execute"), &FRigUnit_SlideChainItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton, Arguments_FRigUnit_SlideChainItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChainItemArray>()
{
	return FRigUnit_SlideChainItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The items to slide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChainItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, SlideAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmount_MetaData), NewProp_SlideAmount_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_SlideChainItemArray*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SlideChainItemArray), &Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3912932309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_SlideChainItemArray",
	Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers),
	sizeof(FRigUnit_SlideChainItemArray),
	alignof(FRigUnit_SlideChainItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton;
}
void FRigUnit_SlideChainItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SlideChainItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SlideChainItemArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SlideChain_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewStructOps, TEXT("RigUnit_SlideChain_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChain_WorkData), 3912932309U) },
		{ FRigUnit_SlideChain::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewStructOps, TEXT("RigUnit_SlideChain"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChain), 1684517066U) },
		{ FRigUnit_SlideChainPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewStructOps, TEXT("RigUnit_SlideChainPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChainPerItem), 1994679388U) },
		{ FRigUnit_SlideChainItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewStructOps, TEXT("RigUnit_SlideChainItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChainItemArray), 821417025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_1896770115(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
