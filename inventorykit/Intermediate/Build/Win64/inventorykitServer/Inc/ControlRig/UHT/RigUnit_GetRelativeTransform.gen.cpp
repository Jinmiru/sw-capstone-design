// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetRelativeTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetRelativeTransformForItem
static_assert(std::is_polymorphic<FRigUnit_GetRelativeTransformForItem>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetRelativeTransformForItem cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem;
class UScriptStruct* FRigUnit_GetRelativeTransformForItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRelativeTransformForItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRelativeTransformForItem_Execute;
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("bChildInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("bParentInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("RelativeTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_GetRelativeTransformForItem_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRelativeTransformForItem::Execute"), &FRigUnit_GetRelativeTransformForItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.OuterSingleton, Arguments_FRigUnit_GetRelativeTransformForItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRelativeTransformForItem>()
{
	return FRigUnit_GetRelativeTransformForItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * GetRelativeTransform is used to retrieve a single transform from a hierarchy in the space of another transform\n */" },
		{ "DisplayName", "Get Relative Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Offset,Local" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "GetRelativeTransform is used to retrieve a single transform from a hierarchy in the space of another transform" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The child item to retrieve the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "The child item to retrieve the transform for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChildInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the child's transform should be retrieved as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "Defines if the child's transform should be retrieved as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent item to use.\n\x09 * The child transform will be retrieve in the space of the parent.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "The parent item to use.\nThe child transform will be retrieve in the space of the parent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParentInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the parent's transform should be retrieved as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "Defines if the parent's transform should be retrieved as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform of the given child item relative to the provided parent\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform of the given child item relative to the provided parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the child internally\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the child internally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the parent internally\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the parent internally" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
	static void NewProp_bChildInitial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChildInitial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static void NewProp_bParentInitial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentInitial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRelativeTransformForItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRelativeTransformForItem, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Child_MetaData), NewProp_Child_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bChildInitial_SetBit(void* Obj)
{
	((FRigUnit_GetRelativeTransformForItem*)Obj)->bChildInitial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bChildInitial = { "bChildInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetRelativeTransformForItem), &Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bChildInitial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChildInitial_MetaData), NewProp_bChildInitial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRelativeTransformForItem, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bParentInitial_SetBit(void* Obj)
{
	((FRigUnit_GetRelativeTransformForItem*)Obj)->bParentInitial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bParentInitial = { "bParentInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetRelativeTransformForItem), &Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bParentInitial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParentInitial_MetaData), NewProp_bParentInitial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRelativeTransformForItem, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRelativeTransformForItem, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedChild_MetaData), NewProp_CachedChild_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetRelativeTransformForItem, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedParent_MetaData), NewProp_CachedParent_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_Child,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bChildInitial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_bParentInitial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_CachedChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewProp_CachedParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetRelativeTransformForItem",
	Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::PropPointers),
	sizeof(FRigUnit_GetRelativeTransformForItem),
	alignof(FRigUnit_GetRelativeTransformForItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem.InnerSingleton;
}
void FRigUnit_GetRelativeTransformForItem::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetRelativeTransformForItem::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		bChildInitial,
		Parent,
		bParentInitial,
		RelativeTransform,
		CachedChild,
		CachedParent
	);
}
// End ScriptStruct FRigUnit_GetRelativeTransformForItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetRelativeTransformForItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics::NewStructOps, TEXT("RigUnit_GetRelativeTransformForItem"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransformForItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRelativeTransformForItem), 174352579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h_4188872816(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetRelativeTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
