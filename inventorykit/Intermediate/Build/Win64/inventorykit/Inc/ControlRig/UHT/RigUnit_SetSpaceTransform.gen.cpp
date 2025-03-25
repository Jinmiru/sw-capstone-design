// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetSpaceTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_SetSpaceTransform
static_assert(std::is_polymorphic<FRigUnit_SetSpaceTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetSpaceTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform;
class UScriptStruct* FRigUnit_SetSpaceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetSpaceTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetSpaceTransform_Execute;
		Arguments_FRigUnit_SetSpaceTransform_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigUnit_SetSpaceTransform_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetSpaceTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_SetSpaceTransform_Execute.Emplace(TEXT("SpaceType"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetSpaceTransform_Execute.Emplace(TEXT("CachedSpaceIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetSpaceTransform::Execute"), &FRigUnit_SetSpaceTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.OuterSingleton, Arguments_FRigUnit_SetSpaceTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetSpaceTransform>()
{
	return FRigUnit_SetSpaceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SetSpaceTransform is used to perform a change in the hierarchy by setting a single space's transform.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Set Space" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetSpaceTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "ToolTip", "SetSpaceTransform is used to perform a change in the hierarchy by setting a single space's transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Space to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "ToolTip", "The name of the Space to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform value to set for the given Space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpaceIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetSpaceTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpaceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSpaceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetSpaceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceTransform, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceTransform, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_SpaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceTransform, SpaceType), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceType_MetaData), NewProp_SpaceType_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_CachedSpaceIndex = { "CachedSpaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSpaceTransform, CachedSpaceIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSpaceIndex_MetaData), NewProp_CachedSpaceIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_SpaceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_SpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewProp_CachedSpaceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetSpaceTransform",
	Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::PropPointers),
	sizeof(FRigUnit_SetSpaceTransform),
	alignof(FRigUnit_SetSpaceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform.InnerSingleton;
}
void FRigUnit_SetSpaceTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetSpaceTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Space,
		Weight,
		Transform,
		SpaceType,
		CachedSpaceIndex
	);
}
// End ScriptStruct FRigUnit_SetSpaceTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_SetSpaceTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics::NewStructOps, TEXT("RigUnit_SetSpaceTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetSpaceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetSpaceTransform), 964677317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceTransform_h_3748798344(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetSpaceTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
