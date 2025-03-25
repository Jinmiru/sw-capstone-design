// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetSpaceInitialTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SetSpaceInitialTransform
static_assert(std::is_polymorphic<FRigUnit_SetSpaceInitialTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetSpaceInitialTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform;
class UScriptStruct* FRigUnit_SetSpaceInitialTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetSpaceInitialTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetSpaceInitialTransform_Execute;
		Arguments_FRigUnit_SetSpaceInitialTransform_Execute.Emplace(TEXT("SpaceName"), TEXT("FName"));
		Arguments_FRigUnit_SetSpaceInitialTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_SetSpaceInitialTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_SetSpaceInitialTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetSpaceInitialTransform_Execute.Emplace(TEXT("CachedSpaceIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetSpaceInitialTransform::Execute"), &FRigUnit_SetSpaceInitialTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.OuterSingleton, Arguments_FRigUnit_SetSpaceInitialTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetSpaceInitialTransform>()
{
	return FRigUnit_SetSpaceInitialTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n * SetSpaceInitialTransform is used to perform a change in the hierarchy by setting a single space's initial transform.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Set Initial Space Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetSpaceInitialTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "ToolTip", "SetSpaceInitialTransform is used to perform a change in the hierarchy by setting a single space's initial transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Space to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "ToolTip", "The name of the Space to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "ToolTip", "The transform value to set for the given space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value result (after weighting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value result (after weighting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpaceIndex_MetaData[] = {
		{ "Comment", "// user to internally cache the index of the bone\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h" },
		{ "ToolTip", "user to internally cache the index of the bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpaceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSpaceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetSpaceInitialTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_SpaceName = { "SpaceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceInitialTransform, SpaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceName_MetaData), NewProp_SpaceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceInitialTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceInitialTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceInitialTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_CachedSpaceIndex = { "CachedSpaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSpaceIndex_MetaData), NewProp_CachedSpaceIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_SpaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewProp_CachedSpaceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetSpaceInitialTransform",
	Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::PropPointers),
	sizeof(FRigUnit_SetSpaceInitialTransform),
	alignof(FRigUnit_SetSpaceInitialTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform.InnerSingleton;
}
void FRigUnit_SetSpaceInitialTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetSpaceInitialTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		SpaceName,
		Transform,
		Result,
		Space,
		CachedSpaceIndex
	);
}
// End ScriptStruct FRigUnit_SetSpaceInitialTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SetSpaceInitialTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics::NewStructOps, TEXT("RigUnit_SetSpaceInitialTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceInitialTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetSpaceInitialTransform), 1739013010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_2357153764(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
