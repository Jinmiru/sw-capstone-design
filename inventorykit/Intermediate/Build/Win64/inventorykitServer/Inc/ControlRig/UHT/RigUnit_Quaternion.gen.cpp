// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Deprecated/Math/RigUnit_Quaternion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Quaternion() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_BinaryQuaternionOp
static_assert(std::is_polymorphic<FRigUnit_BinaryQuaternionOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryQuaternionOp cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp;
class UScriptStruct* FRigUnit_BinaryQuaternionOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryQuaternionOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryQuaternionOp>()
{
	return FRigUnit_BinaryQuaternionOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Quaternion type */" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Quaternion type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryQuaternionOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Argument0), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument0_MetaData), NewProp_Argument0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Argument1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument1_MetaData), NewProp_Argument1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryQuaternionOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Argument1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_BinaryQuaternionOp",
	Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::PropPointers),
	sizeof(FRigUnit_BinaryQuaternionOp),
	alignof(FRigUnit_BinaryQuaternionOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp.InnerSingleton;
}
// End ScriptStruct FRigUnit_BinaryQuaternionOp

// Begin ScriptStruct FRigUnit_MultiplyQuaternion
static_assert(std::is_polymorphic<FRigUnit_MultiplyQuaternion>() == std::is_polymorphic<FRigUnit_BinaryQuaternionOp>(), "USTRUCT FRigUnit_MultiplyQuaternion cannot be polymorphic unless super FRigUnit_BinaryQuaternionOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion;
class UScriptStruct* FRigUnit_MultiplyQuaternion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiplyQuaternion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MultiplyQuaternion_Execute;
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Argument0"), TEXT("FQuat"));
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Argument1"), TEXT("FQuat"));
		Arguments_FRigUnit_MultiplyQuaternion_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MultiplyQuaternion::Execute"), &FRigUnit_MultiplyQuaternion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton, Arguments_FRigUnit_MultiplyQuaternion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiplyQuaternion>()
{
	return FRigUnit_MultiplyQuaternion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Quaternion)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiplyQuaternion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp,
	&NewStructOps,
	"RigUnit_MultiplyQuaternion",
	nullptr,
	0,
	sizeof(FRigUnit_MultiplyQuaternion),
	alignof(FRigUnit_MultiplyQuaternion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion.InnerSingleton;
}
void FRigUnit_MultiplyQuaternion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_MultiplyQuaternion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}
// End ScriptStruct FRigUnit_MultiplyQuaternion

// Begin ScriptStruct FRigUnit_UnaryQuaternionOp
static_assert(std::is_polymorphic<FRigUnit_UnaryQuaternionOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_UnaryQuaternionOp cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp;
class UScriptStruct* FRigUnit_UnaryQuaternionOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_UnaryQuaternionOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_UnaryQuaternionOp>()
{
	return FRigUnit_UnaryQuaternionOp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Quaternion type */" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Quaternion type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_UnaryQuaternionOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_UnaryQuaternionOp, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument_MetaData), NewProp_Argument_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_UnaryQuaternionOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Argument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_UnaryQuaternionOp",
	Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::PropPointers),
	sizeof(FRigUnit_UnaryQuaternionOp),
	alignof(FRigUnit_UnaryQuaternionOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp.InnerSingleton;
}
// End ScriptStruct FRigUnit_UnaryQuaternionOp

// Begin ScriptStruct FRigUnit_InverseQuaterion
static_assert(std::is_polymorphic<FRigUnit_InverseQuaterion>() == std::is_polymorphic<FRigUnit_UnaryQuaternionOp>(), "USTRUCT FRigUnit_InverseQuaterion cannot be polymorphic unless super FRigUnit_UnaryQuaternionOp is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion;
class UScriptStruct* FRigUnit_InverseQuaterion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_InverseQuaterion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_InverseQuaterion_Execute;
		Arguments_FRigUnit_InverseQuaterion_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_InverseQuaterion_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_InverseQuaterion::Execute"), &FRigUnit_InverseQuaterion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton, Arguments_FRigUnit_InverseQuaterion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_InverseQuaterion>()
{
	return FRigUnit_InverseQuaterion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Inverse(Quaternion)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_InverseQuaterion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp,
	&NewStructOps,
	"RigUnit_InverseQuaterion",
	nullptr,
	0,
	sizeof(FRigUnit_InverseQuaterion),
	alignof(FRigUnit_InverseQuaterion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion.InnerSingleton;
}
void FRigUnit_InverseQuaterion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_InverseQuaterion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument,
		Result
	);
}
// End ScriptStruct FRigUnit_InverseQuaterion

// Begin ScriptStruct FRigUnit_QuaternionToAxisAndAngle
static_assert(std::is_polymorphic<FRigUnit_QuaternionToAxisAndAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionToAxisAndAngle cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle;
class UScriptStruct* FRigUnit_QuaternionToAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionToAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute;
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionToAxisAndAngle::Execute"), &FRigUnit_QuaternionToAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton, Arguments_FRigUnit_QuaternionToAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionToAxisAndAngle>()
{
	return FRigUnit_QuaternionToAxisAndAngle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "To Axis And Angle(Quaternion)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionToAxisAndAngle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument_MetaData), NewProp_Argument_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAxisAndAngle, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Argument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_QuaternionToAxisAndAngle",
	Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::PropPointers),
	sizeof(FRigUnit_QuaternionToAxisAndAngle),
	alignof(FRigUnit_QuaternionToAxisAndAngle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle.InnerSingleton;
}
void FRigUnit_QuaternionToAxisAndAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_QuaternionToAxisAndAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument,
		Axis,
		Angle
	);
}
// End ScriptStruct FRigUnit_QuaternionToAxisAndAngle

// Begin ScriptStruct FRigUnit_QuaternionFromAxisAndAngle
static_assert(std::is_polymorphic<FRigUnit_QuaternionFromAxisAndAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionFromAxisAndAngle cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle;
class UScriptStruct* FRigUnit_QuaternionFromAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionFromAxisAndAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute;
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionFromAxisAndAngle::Execute"), &FRigUnit_QuaternionFromAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton, Arguments_FRigUnit_QuaternionFromAxisAndAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionFromAxisAndAngle>()
{
	return FRigUnit_QuaternionFromAxisAndAngle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "From Axis And Angle(Quaternion)" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionFromAxisAndAngle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionFromAxisAndAngle, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_QuaternionFromAxisAndAngle",
	Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::PropPointers),
	sizeof(FRigUnit_QuaternionFromAxisAndAngle),
	alignof(FRigUnit_QuaternionFromAxisAndAngle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle.InnerSingleton;
}
void FRigUnit_QuaternionFromAxisAndAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_QuaternionFromAxisAndAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Angle,
		Result
	);
}
// End ScriptStruct FRigUnit_QuaternionFromAxisAndAngle

// Begin ScriptStruct FRigUnit_QuaternionToAngle
static_assert(std::is_polymorphic<FRigUnit_QuaternionToAngle>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_QuaternionToAngle cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle;
class UScriptStruct* FRigUnit_QuaternionToAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_QuaternionToAngle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_QuaternionToAngle_Execute;
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Axis"), TEXT("FVector"));
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Argument"), TEXT("FQuat"));
		Arguments_FRigUnit_QuaternionToAngle_Execute.Emplace(TEXT("Angle"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_QuaternionToAngle::Execute"), &FRigUnit_QuaternionToAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton, Arguments_FRigUnit_QuaternionToAngle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_QuaternionToAngle>()
{
	return FRigUnit_QuaternionToAngle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Get Angle Around Axis" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Quaternion.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Argument;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_QuaternionToAngle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Argument), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Argument_MetaData), NewProp_Argument_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_QuaternionToAngle, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Argument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_QuaternionToAngle",
	Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::PropPointers),
	sizeof(FRigUnit_QuaternionToAngle),
	alignof(FRigUnit_QuaternionToAngle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle.InnerSingleton;
}
void FRigUnit_QuaternionToAngle::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_QuaternionToAngle::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Axis,
		Argument,
		Angle
	);
}
// End ScriptStruct FRigUnit_QuaternionToAngle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_BinaryQuaternionOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics::NewStructOps, TEXT("RigUnit_BinaryQuaternionOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryQuaternionOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryQuaternionOp), 2289231138U) },
		{ FRigUnit_MultiplyQuaternion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics::NewStructOps, TEXT("RigUnit_MultiplyQuaternion"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiplyQuaternion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiplyQuaternion), 2691205836U) },
		{ FRigUnit_UnaryQuaternionOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics::NewStructOps, TEXT("RigUnit_UnaryQuaternionOp"), &Z_Registration_Info_UScriptStruct_RigUnit_UnaryQuaternionOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_UnaryQuaternionOp), 2749822348U) },
		{ FRigUnit_InverseQuaterion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics::NewStructOps, TEXT("RigUnit_InverseQuaterion"), &Z_Registration_Info_UScriptStruct_RigUnit_InverseQuaterion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_InverseQuaterion), 2129756717U) },
		{ FRigUnit_QuaternionToAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionToAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionToAxisAndAngle), 193765907U) },
		{ FRigUnit_QuaternionFromAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionFromAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionFromAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionFromAxisAndAngle), 2840474677U) },
		{ FRigUnit_QuaternionToAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics::NewStructOps, TEXT("RigUnit_QuaternionToAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_QuaternionToAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_QuaternionToAngle), 2243583783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_1983357084(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
