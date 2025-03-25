// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetControlInitialTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_GetControlInitialTransform
static_assert(std::is_polymorphic<FRigUnit_GetControlInitialTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetControlInitialTransform cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform;
class UScriptStruct* FRigUnit_GetControlInitialTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetControlInitialTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetControlInitialTransform_Execute;
		Arguments_FRigUnit_GetControlInitialTransform_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetControlInitialTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetControlInitialTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetControlInitialTransform_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetControlInitialTransform::Execute"), &FRigUnit_GetControlInitialTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.OuterSingleton, Arguments_FRigUnit_GetControlInitialTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetControlInitialTransform>()
{
	return FRigUnit_GetControlInitialTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetControlTransform is used to retrieve a single transform from a hierarchy.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Get Control Initial Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlInitialTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h" },
		{ "ToolTip", "GetControlTransform is used to retrieve a single transform from a hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h" },
		{ "ToolTip", "The name of the Control to retrieve the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the Control's transform should be retrieved\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h" },
		{ "ToolTip", "Defines if the Control's transform should be retrieved\nin local or global space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given bone - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given bone - or identity in case it wasn't found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_GetControlInitialTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetControlInitialTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInitialTransform, Control), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInitialTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 780265324
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInitialTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetControlInitialTransform, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedControlIndex_MetaData), NewProp_CachedControlIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewProp_CachedControlIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetControlInitialTransform",
	Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::PropPointers),
	sizeof(FRigUnit_GetControlInitialTransform),
	alignof(FRigUnit_GetControlInitialTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform.InnerSingleton;
}
void FRigUnit_GetControlInitialTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetControlInitialTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Space,
		Transform,
		CachedControlIndex
	);
}
// End ScriptStruct FRigUnit_GetControlInitialTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlInitialTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetControlInitialTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetControlInitialTransform_Statics::NewStructOps, TEXT("RigUnit_GetControlInitialTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetControlInitialTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetControlInitialTransform), 222544548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlInitialTransform_h_1113249764(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlInitialTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetControlInitialTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
