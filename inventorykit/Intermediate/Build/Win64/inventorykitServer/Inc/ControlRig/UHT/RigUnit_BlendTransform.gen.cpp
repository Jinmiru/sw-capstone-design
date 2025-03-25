// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Deprecated/RigUnit_BlendTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BlendTransform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FBlendTarget();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BlendTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FBlendTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendTarget;
class UScriptStruct* FBlendTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("BlendTarget"));
	}
	return Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FBlendTarget>()
{
	return FBlendTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendTarget, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"BlendTarget",
	Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers),
	sizeof(FBlendTarget),
	alignof(FBlendTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendTarget()
{
	if (!Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton, Z_Construct_UScriptStruct_FBlendTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton;
}
// End ScriptStruct FBlendTarget

// Begin ScriptStruct FRigUnit_BlendTransform
static_assert(std::is_polymorphic<FRigUnit_BlendTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BlendTransform cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform;
class UScriptStruct* FRigUnit_BlendTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BlendTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BlendTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_BlendTransform_Execute;
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Source"), TEXT("FTransform"));
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FBlendTarget>"));
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BlendTransform::Execute"), &FRigUnit_BlendTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton, Arguments_FRigUnit_BlendTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BlendTransform>()
{
	return FRigUnit_BlendTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Blend" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Blend(Transform)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/RigUnit_BlendTransform.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BlendTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BlendTransform, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlendTarget, METADATA_PARAMS(0, nullptr) }; // 2305449134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BlendTransform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) }; // 2305449134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BlendTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_BlendTransform",
	Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers),
	sizeof(FRigUnit_BlendTransform),
	alignof(FRigUnit_BlendTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BlendTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton;
}
void FRigUnit_BlendTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_BlendTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FBlendTarget> Targets_1_Array(Targets);
	StaticExecute(
		InExecuteContext,
		Source,
		Targets_1_Array,
		Result
	);
}
// End ScriptStruct FRigUnit_BlendTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendTarget::StaticStruct, Z_Construct_UScriptStruct_FBlendTarget_Statics::NewStructOps, TEXT("BlendTarget"), &Z_Registration_Info_UScriptStruct_BlendTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendTarget), 2305449134U) },
		{ FRigUnit_BlendTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewStructOps, TEXT("RigUnit_BlendTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BlendTransform), 1805496966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_4283770924(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
