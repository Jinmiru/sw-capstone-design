// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Deprecated/Math/RigUnit_Transform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Transform() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_BinaryTransformOp
static_assert(std::is_polymorphic<FRigUnit_BinaryTransformOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryTransformOp cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp;
class UScriptStruct* FRigUnit_BinaryTransformOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryTransformOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryTransformOp>()
{
	return FRigUnit_BinaryTransformOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Transform type */" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Transform type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryTransformOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Argument0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument0_MetaData), NewProp_Argument0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Argument1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument1_MetaData), NewProp_Argument1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryTransformOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Argument1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_BinaryTransformOp",
	Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::PropPointers),
	sizeof(FRigUnit_BinaryTransformOp),
	alignof(FRigUnit_BinaryTransformOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp.InnerSingleton;
}
// End ScriptStruct FRigUnit_BinaryTransformOp

// Begin ScriptStruct FRigUnit_MultiplyTransform
static_assert(std::is_polymorphic<FRigUnit_MultiplyTransform>() == std::is_polymorphic<FRigUnit_BinaryTransformOp>(), "USTRUCT FRigUnit_MultiplyTransform cannot be polymorphic unless super FRigUnit_BinaryTransformOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform;
class UScriptStruct* FRigUnit_MultiplyTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiplyTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MultiplyTransform_Execute;
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Argument0"), TEXT("FTransform"));
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Argument1"), TEXT("FTransform"));
		Arguments_FRigUnit_MultiplyTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MultiplyTransform::Execute"), &FRigUnit_MultiplyTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton, Arguments_FRigUnit_MultiplyTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiplyTransform>()
{
	return FRigUnit_MultiplyTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Transform)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiplyTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp,
	&NewStructOps,
	"RigUnit_MultiplyTransform",
	nullptr,
	0,
	sizeof(FRigUnit_MultiplyTransform),
	alignof(FRigUnit_MultiplyTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform.InnerSingleton;
}
void FRigUnit_MultiplyTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_MultiplyTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}
// End ScriptStruct FRigUnit_MultiplyTransform

// Begin ScriptStruct FRigUnit_GetRelativeTransform
static_assert(std::is_polymorphic<FRigUnit_GetRelativeTransform>() == std::is_polymorphic<FRigUnit_BinaryTransformOp>(), "USTRUCT FRigUnit_GetRelativeTransform cannot be polymorphic unless super FRigUnit_BinaryTransformOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform;
class UScriptStruct* FRigUnit_GetRelativeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRelativeTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRelativeTransform_Execute;
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Argument0"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Argument1"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRelativeTransform::Execute"), &FRigUnit_GetRelativeTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton, Arguments_FRigUnit_GetRelativeTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRelativeTransform>()
{
	return FRigUnit_GetRelativeTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "GetRelativeTransform" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Transform.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRelativeTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp,
	&NewStructOps,
	"RigUnit_GetRelativeTransform",
	nullptr,
	0,
	sizeof(FRigUnit_GetRelativeTransform),
	alignof(FRigUnit_GetRelativeTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform.InnerSingleton;
}
void FRigUnit_GetRelativeTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetRelativeTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}
// End ScriptStruct FRigUnit_GetRelativeTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_BinaryTransformOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics::NewStructOps, TEXT("RigUnit_BinaryTransformOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryTransformOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryTransformOp), 2207825895U) },
		{ FRigUnit_MultiplyTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics::NewStructOps, TEXT("RigUnit_MultiplyTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiplyTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiplyTransform), 2991951468U) },
		{ FRigUnit_GetRelativeTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics::NewStructOps, TEXT("RigUnit_GetRelativeTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRelativeTransform), 2829819654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_1937568689(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
