// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetControlVisibility.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetControlVisibility() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetControlVisibility
static_assert(std::is_polymorphic<FRigUnit_GetControlVisibility>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlVisibility cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility;
class UScriptStruct* FRigUnit_GetControlVisibility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlVisibility"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlVisibility_Execute;
		Arguments_FRigUnit_GetControlVisibility_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetControlVisibility_Execute.Emplace(TEXT("bVisible"), TEXT("bool"));
		Arguments_FRigUnit_GetControlVisibility_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlVisibility::Execute"), &FRigUnit_GetControlVisibility::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.OuterSingleton, Arguments_FRigUnit_GetControlVisibility_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlVisibility>()
{
	return FRigUnit_GetControlVisibility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlVisibility is used to retrieve the visibility of a control\n */" },
		{ "DisplayName", "Get Control Visibility" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlVisibility,Visibility,Hide,Show,Hidden,Visible,SetGizmoVisibility" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "GetControlVisibility" },
		{ "ToolTip", "GetControlVisibility is used to retrieve the visibility of a control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the visibility for.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "The name of the Control to set the visibility for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The visibility of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "Output", "" },
		{ "ToolTip", "The visibility of the control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "Used to cache the internally used control index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlVisibility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVisibility, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FRigUnit_GetControlVisibility*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetControlVisibility), &Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlVisibility, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlVisibility",
	Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::PropPointers),
	sizeof(FRigUnit_GetControlVisibility),
	alignof(FRigUnit_GetControlVisibility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility.InnerSingleton;
}
void FRigUnit_GetControlVisibility::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlVisibility::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		bVisible,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlVisibility

// Begin ScriptStruct FRigUnit_SetControlVisibility
static_assert(std::is_polymorphic<FRigUnit_SetControlVisibility>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlVisibility cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility;
class UScriptStruct* FRigUnit_SetControlVisibility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlVisibility"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlVisibility_Execute;
		Arguments_FRigUnit_SetControlVisibility_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetControlVisibility_Execute.Emplace(TEXT("Pattern"), TEXT("FString"));
		Arguments_FRigUnit_SetControlVisibility_Execute.Emplace(TEXT("bVisible"), TEXT("bool"));
		Arguments_FRigUnit_SetControlVisibility_Execute.Emplace(TEXT("CachedControlIndices"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlVisibility::Execute"), &FRigUnit_SetControlVisibility::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.OuterSingleton, Arguments_FRigUnit_SetControlVisibility_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlVisibility>()
{
	return FRigUnit_SetControlVisibility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlVisibility is used to change the visibility on a control at runtime\n */" },
		{ "DisplayName", "Set Control Visibility" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlVisibility,Visibility,Hide,Show,Hidden,Visible,SetGizmoVisibility" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "SetControlVisibility" },
		{ "ToolTip", "SetControlVisibility is used to change the visibility on a control at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the visibility for.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "The name of the Control to set the visibility for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If the ControlName is set to None this can be used to look for a series of Controls\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "If the ControlName is set to None this can be used to look for a series of Controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The visibility to set for the control\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "The visibility to set for the control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndices_MetaData[] = {
		{ "Comment", "// Used to cache the internally used control index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlVisibility.h" },
		{ "ToolTip", "Used to cache the internally used control index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedControlIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlVisibility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVisibility, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVisibility, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FRigUnit_SetControlVisibility*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SetControlVisibility), &Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_CachedControlIndices_Inner = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_CachedControlIndices = { "CachedControlIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlVisibility, CachedControlIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndices_MetaData), NewProp_CachedControlIndices_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_Pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_CachedControlIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewProp_CachedControlIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlVisibility",
	Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::PropPointers),
	sizeof(FRigUnit_SetControlVisibility),
	alignof(FRigUnit_SetControlVisibility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility.InnerSingleton;
}
void FRigUnit_SetControlVisibility::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlVisibility::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Pattern,
		bVisible,
		CachedControlIndices
	);
}
// End ScriptStruct FRigUnit_SetControlVisibility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetControlVisibility::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics::NewStructOps, TEXT("RigUnit_GetControlVisibility"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlVisibility), 4224100110U) },
		{ FRigUnit_SetControlVisibility::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics::NewStructOps, TEXT("RigUnit_SetControlVisibility"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlVisibility), 3691084398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_1159953260(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlVisibility_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
