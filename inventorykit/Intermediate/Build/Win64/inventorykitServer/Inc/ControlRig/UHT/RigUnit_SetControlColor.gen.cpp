// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetControlColor.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetControlColor() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlColor();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlColor();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetControlColor
static_assert(std::is_polymorphic<FRigUnit_GetControlColor>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlColor cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor;
class UScriptStruct* FRigUnit_GetControlColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlColor, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlColor"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlColor_Execute;
		Arguments_FRigUnit_GetControlColor_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlColor_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_GetControlColor_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlColor::Execute"), &FRigUnit_GetControlColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.OuterSingleton, Arguments_FRigUnit_GetControlColor_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlColor>()
{
	return FRigUnit_GetControlColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlColor is used to retrieve the color of control\n */" },
		{ "DisplayName", "Get Control Color" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlColor,GetGizmoColor" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "GetControlColor" },
		{ "ToolTip", "GetControlColor is used to retrieve the color of control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to get the color for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "ToolTip", "The name of the Control to get the color for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The color of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "Output", "" },
		{ "ToolTip", "The color of the control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlColor, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlColor, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlColor",
	Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::PropPointers),
	sizeof(FRigUnit_GetControlColor),
	alignof(FRigUnit_GetControlColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlColor()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor.InnerSingleton;
}
void FRigUnit_GetControlColor::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlColor::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Color,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlColor

// Begin ScriptStruct FRigUnit_SetControlColor
static_assert(std::is_polymorphic<FRigUnit_SetControlColor>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlColor cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor;
class UScriptStruct* FRigUnit_SetControlColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlColor, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlColor"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlColor_Execute;
		Arguments_FRigUnit_SetControlColor_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlColor_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_SetControlColor_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlColor::Execute"), &FRigUnit_SetControlColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.OuterSingleton, Arguments_FRigUnit_SetControlColor_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlColor>()
{
	return FRigUnit_SetControlColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlColor is used to change the control's color\n */" },
		{ "DisplayName", "Set Control Color" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlColor,SetGizmoColor" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "TemplateName", "SetControlColor" },
		{ "ToolTip", "SetControlColor is used to change the control's color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the color for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "ToolTip", "The name of the Control to set the color for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The color to set for the control\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "ToolTip", "The color to set for the control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetControlColor.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlColor, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetControlColor, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetControlColor",
	Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::PropPointers),
	sizeof(FRigUnit_SetControlColor),
	alignof(FRigUnit_SetControlColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlColor()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor.InnerSingleton;
}
void FRigUnit_SetControlColor::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetControlColor::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Color,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_SetControlColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlColor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetControlColor::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics::NewStructOps, TEXT("RigUnit_GetControlColor"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlColor), 1264873077U) },
		{ FRigUnit_SetControlColor::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics::NewStructOps, TEXT("RigUnit_SetControlColor"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlColor), 4098517774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlColor_h_1083992815(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetControlColor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
