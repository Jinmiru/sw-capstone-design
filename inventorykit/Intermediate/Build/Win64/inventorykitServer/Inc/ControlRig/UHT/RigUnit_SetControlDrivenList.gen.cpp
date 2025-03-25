// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetControlDrivenList() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetControlDrivenList
static_assert(std::is_polymorphic<FRigUnit_GetControlDrivenList>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlDrivenList cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList;
class UScriptStruct* FRigUnit_GetControlDrivenList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlDrivenList"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlDrivenList_Execute;
		Arguments_FRigUnit_GetControlDrivenList_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlDrivenList_Execute.Emplace(TEXT("Driven"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_GetControlDrivenList_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlDrivenList::Execute"), &FRigUnit_GetControlDrivenList::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.OuterSingleton, Arguments_FRigUnit_GetControlDrivenList_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlDrivenList>()
{
	return FRigUnit_GetControlDrivenList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlDrivenList is used to retrieve the list of affected controls of an indirect control\n */" },
		{ "DisplayName", "Get Driven Controls" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlDrivenList,Interaction,Indirect" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "GetControlDrivenList" },
		{ "ToolTip", "GetControlDrivenList is used to retrieve the list of affected controls of an indirect control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to get the list for\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "ToolTip", "The name of the Control to get the list for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driven_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of affected controls\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "Output", "" },
		{ "ToolTip", "The list of affected controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driven_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Driven;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlDrivenList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlDrivenList, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Driven_Inner = { "Driven", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Driven = { "Driven", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlDrivenList, Driven), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driven_MetaData), NewProp_Driven_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlDrivenList, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Driven_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_Driven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlDrivenList",
	Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::PropPointers),
	sizeof(FRigUnit_GetControlDrivenList),
	alignof(FRigUnit_GetControlDrivenList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList.InnerSingleton;
}
void FRigUnit_GetControlDrivenList::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlDrivenList::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Driven,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlDrivenList

// Begin ScriptStruct FRigUnit_SetControlDrivenList
static_assert(std::is_polymorphic<FRigUnit_SetControlDrivenList>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlDrivenList cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList;
class UScriptStruct* FRigUnit_SetControlDrivenList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlDrivenList"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlDrivenList_Execute;
		Arguments_FRigUnit_SetControlDrivenList_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlDrivenList_Execute.Emplace(TEXT("Driven"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_SetControlDrivenList_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlDrivenList::Execute"), &FRigUnit_SetControlDrivenList::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.OuterSingleton, Arguments_FRigUnit_SetControlDrivenList_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlDrivenList>()
{
	return FRigUnit_SetControlDrivenList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlDrivenList is used to change the list of affected controls of an indirect control\n */" },
		{ "DisplayName", "Set Driven Controls" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlDrivenList,Interaction,Indirect" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlDrivenList" },
		{ "ToolTip", "SetControlDrivenList is used to change the list of affected controls of an indirect control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the list for\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "ToolTip", "The name of the Control to set the list for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driven_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of affected controls\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "ToolTip", "The list of affected controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlDrivenList.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driven_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Driven;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlDrivenList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlDrivenList, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Driven_Inner = { "Driven", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Driven = { "Driven", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlDrivenList, Driven), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driven_MetaData), NewProp_Driven_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlDrivenList, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Driven_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_Driven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlDrivenList",
	Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::PropPointers),
	sizeof(FRigUnit_SetControlDrivenList),
	alignof(FRigUnit_SetControlDrivenList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList.InnerSingleton;
}
void FRigUnit_SetControlDrivenList::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlDrivenList::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Driven_1_Array(Driven);
	StaticExecute(
		InExecuteContext,
		Control,
		Driven_1_Array,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlDrivenList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetControlDrivenList::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics::NewStructOps, TEXT("RigUnit_GetControlDrivenList"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlDrivenList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlDrivenList), 4112661626U) },
		{ FRigUnit_SetControlDrivenList::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::NewStructOps, TEXT("RigUnit_SetControlDrivenList"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlDrivenList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlDrivenList), 3380803804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_3897806994(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlDrivenList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
