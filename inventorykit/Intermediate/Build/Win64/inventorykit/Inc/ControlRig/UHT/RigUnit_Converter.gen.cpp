// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Deprecated/Math/RigUnit_Converter.h"
#include "Runtime/AnimationCore/Public/EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Converter() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertRotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ConvertTransform
static_assert(std::is_polymorphic<FRigUnit_ConvertTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertTransform cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform;
class UScriptStruct* FRigUnit_ConvertTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertTransform_Execute;
		Arguments_FRigUnit_ConvertTransform_Execute.Emplace(TEXT("Input"), TEXT("FTransform"));
		Arguments_FRigUnit_ConvertTransform_Execute.Emplace(TEXT("Result"), TEXT("FEulerTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertTransform::Execute"), &FRigUnit_ConvertTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.OuterSingleton, Arguments_FRigUnit_ConvertTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertTransform>()
{
	return FRigUnit_ConvertTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertToEulerTransform" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertTransform, Input), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertTransform, Result), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1171242445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertTransform",
	Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::PropPointers),
	sizeof(FRigUnit_ConvertTransform),
	alignof(FRigUnit_ConvertTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform.InnerSingleton;
}
void FRigUnit_ConvertTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertTransform

// Begin ScriptStruct FRigUnit_ConvertEulerTransform
static_assert(std::is_polymorphic<FRigUnit_ConvertEulerTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertEulerTransform cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform;
class UScriptStruct* FRigUnit_ConvertEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertEulerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertEulerTransform_Execute;
		Arguments_FRigUnit_ConvertEulerTransform_Execute.Emplace(TEXT("Input"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_ConvertEulerTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertEulerTransform::Execute"), &FRigUnit_ConvertEulerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.OuterSingleton, Arguments_FRigUnit_ConvertEulerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertEulerTransform>()
{
	return FRigUnit_ConvertEulerTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertToTransform" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertEulerTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertEulerTransform, Input), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 1171242445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertEulerTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertEulerTransform",
	Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::PropPointers),
	sizeof(FRigUnit_ConvertEulerTransform),
	alignof(FRigUnit_ConvertEulerTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform.InnerSingleton;
}
void FRigUnit_ConvertEulerTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertEulerTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertEulerTransform

// Begin ScriptStruct FRigUnit_ConvertRotation
static_assert(std::is_polymorphic<FRigUnit_ConvertRotation>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertRotation cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation;
class UScriptStruct* FRigUnit_ConvertRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertRotation_Execute;
		Arguments_FRigUnit_ConvertRotation_Execute.Emplace(TEXT("Input"), TEXT("FRotator"));
		Arguments_FRigUnit_ConvertRotation_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertRotation::Execute"), &FRigUnit_ConvertRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.OuterSingleton, Arguments_FRigUnit_ConvertRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertRotation>()
{
	return FRigUnit_ConvertRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertToQuaternion" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertRotation, Input), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertRotation, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertRotation",
	Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::PropPointers),
	sizeof(FRigUnit_ConvertRotation),
	alignof(FRigUnit_ConvertRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertRotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation.InnerSingleton;
}
void FRigUnit_ConvertRotation::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertRotation::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertRotation

// Begin ScriptStruct FRigUnit_ConvertVectorRotation
static_assert(std::is_polymorphic<FRigUnit_ConvertVectorRotation>() == std::is_polymorphic<FRigUnit_ConvertRotation>(), "USTRUCT FRigUnit_ConvertVectorRotation cannot be polymorphic unless super FRigUnit_ConvertRotation is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation;
class UScriptStruct* FRigUnit_ConvertVectorRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertVectorRotation"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertVectorRotation>()
{
	return FRigUnit_ConvertVectorRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertToQuaternionDeprecated" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertVectorRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ConvertRotation,
	&NewStructOps,
	"RigUnit_ConvertVectorRotation",
	nullptr,
	0,
	sizeof(FRigUnit_ConvertVectorRotation),
	alignof(FRigUnit_ConvertVectorRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation.InnerSingleton;
}
// End ScriptStruct FRigUnit_ConvertVectorRotation

// Begin ScriptStruct FRigUnit_ConvertQuaternion
static_assert(std::is_polymorphic<FRigUnit_ConvertQuaternion>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertQuaternion cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion;
class UScriptStruct* FRigUnit_ConvertQuaternion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertQuaternion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertQuaternion_Execute;
		Arguments_FRigUnit_ConvertQuaternion_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigUnit_ConvertQuaternion_Execute.Emplace(TEXT("Result"), TEXT("FRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertQuaternion::Execute"), &FRigUnit_ConvertQuaternion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.OuterSingleton, Arguments_FRigUnit_ConvertQuaternion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertQuaternion>()
{
	return FRigUnit_ConvertQuaternion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertToRotation" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertQuaternion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertQuaternion, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertQuaternion, Result), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertQuaternion",
	Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::PropPointers),
	sizeof(FRigUnit_ConvertQuaternion),
	alignof(FRigUnit_ConvertQuaternion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion.InnerSingleton;
}
void FRigUnit_ConvertQuaternion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertQuaternion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertQuaternion

// Begin ScriptStruct FRigUnit_ConvertVectorToRotation
static_assert(std::is_polymorphic<FRigUnit_ConvertVectorToRotation>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertVectorToRotation cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation;
class UScriptStruct* FRigUnit_ConvertVectorToRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertVectorToRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertVectorToRotation_Execute;
		Arguments_FRigUnit_ConvertVectorToRotation_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigUnit_ConvertVectorToRotation_Execute.Emplace(TEXT("Result"), TEXT("FRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertVectorToRotation::Execute"), &FRigUnit_ConvertVectorToRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.OuterSingleton, Arguments_FRigUnit_ConvertVectorToRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertVectorToRotation>()
{
	return FRigUnit_ConvertVectorToRotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertVectorToRotation" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertVectorToRotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertVectorToRotation, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertVectorToRotation, Result), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertVectorToRotation",
	Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::PropPointers),
	sizeof(FRigUnit_ConvertVectorToRotation),
	alignof(FRigUnit_ConvertVectorToRotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation.InnerSingleton;
}
void FRigUnit_ConvertVectorToRotation::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertVectorToRotation::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertVectorToRotation

// Begin ScriptStruct FRigUnit_ConvertVectorToQuaternion
static_assert(std::is_polymorphic<FRigUnit_ConvertVectorToQuaternion>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertVectorToQuaternion cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion;
class UScriptStruct* FRigUnit_ConvertVectorToQuaternion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertVectorToQuaternion"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertVectorToQuaternion_Execute;
		Arguments_FRigUnit_ConvertVectorToQuaternion_Execute.Emplace(TEXT("Input"), TEXT("FVector"));
		Arguments_FRigUnit_ConvertVectorToQuaternion_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertVectorToQuaternion::Execute"), &FRigUnit_ConvertVectorToQuaternion::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.OuterSingleton, Arguments_FRigUnit_ConvertVectorToQuaternion_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertVectorToQuaternion>()
{
	return FRigUnit_ConvertVectorToQuaternion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertVectorToQuaternion" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertVectorToQuaternion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertVectorToQuaternion, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertVectorToQuaternion, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertVectorToQuaternion",
	Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::PropPointers),
	sizeof(FRigUnit_ConvertVectorToQuaternion),
	alignof(FRigUnit_ConvertVectorToQuaternion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion.InnerSingleton;
}
void FRigUnit_ConvertVectorToQuaternion::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertVectorToQuaternion::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertVectorToQuaternion

// Begin ScriptStruct FRigUnit_ConvertRotationToVector
static_assert(std::is_polymorphic<FRigUnit_ConvertRotationToVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertRotationToVector cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector;
class UScriptStruct* FRigUnit_ConvertRotationToVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertRotationToVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertRotationToVector_Execute;
		Arguments_FRigUnit_ConvertRotationToVector_Execute.Emplace(TEXT("Input"), TEXT("FRotator"));
		Arguments_FRigUnit_ConvertRotationToVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertRotationToVector::Execute"), &FRigUnit_ConvertRotationToVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.OuterSingleton, Arguments_FRigUnit_ConvertRotationToVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertRotationToVector>()
{
	return FRigUnit_ConvertRotationToVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertRotationToVector" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertRotationToVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertRotationToVector, Input), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertRotationToVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertRotationToVector",
	Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::PropPointers),
	sizeof(FRigUnit_ConvertRotationToVector),
	alignof(FRigUnit_ConvertRotationToVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector.InnerSingleton;
}
void FRigUnit_ConvertRotationToVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertRotationToVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertRotationToVector

// Begin ScriptStruct FRigUnit_ConvertQuaternionToVector
static_assert(std::is_polymorphic<FRigUnit_ConvertQuaternionToVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ConvertQuaternionToVector cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector;
class UScriptStruct* FRigUnit_ConvertQuaternionToVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ConvertQuaternionToVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ConvertQuaternionToVector_Execute;
		Arguments_FRigUnit_ConvertQuaternionToVector_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigUnit_ConvertQuaternionToVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ConvertQuaternionToVector::Execute"), &FRigUnit_ConvertQuaternionToVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.OuterSingleton, Arguments_FRigUnit_ConvertQuaternionToVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ConvertQuaternionToVector>()
{
	return FRigUnit_ConvertQuaternionToVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Convert" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ConvertQuaternionToVector" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ConvertQuaternionToVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertQuaternionToVector, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ConvertQuaternionToVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ConvertQuaternionToVector",
	Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::PropPointers),
	sizeof(FRigUnit_ConvertQuaternionToVector),
	alignof(FRigUnit_ConvertQuaternionToVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector.InnerSingleton;
}
void FRigUnit_ConvertQuaternionToVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ConvertQuaternionToVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		Result
	);
}
// End ScriptStruct FRigUnit_ConvertQuaternionToVector

// Begin ScriptStruct FRigUnit_ToSwingAndTwist
static_assert(std::is_polymorphic<FRigUnit_ToSwingAndTwist>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ToSwingAndTwist cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist;
class UScriptStruct* FRigUnit_ToSwingAndTwist::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ToSwingAndTwist"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ToSwingAndTwist_Execute;
		Arguments_FRigUnit_ToSwingAndTwist_Execute.Emplace(TEXT("Input"), TEXT("FQuat"));
		Arguments_FRigUnit_ToSwingAndTwist_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigUnit_ToSwingAndTwist_Execute.Emplace(TEXT("Swing"), TEXT("FQuat"));
		Arguments_FRigUnit_ToSwingAndTwist_Execute.Emplace(TEXT("Twist"), TEXT("FQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ToSwingAndTwist::Execute"), &FRigUnit_ToSwingAndTwist::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.OuterSingleton, Arguments_FRigUnit_ToSwingAndTwist_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ToSwingAndTwist>()
{
	return FRigUnit_ToSwingAndTwist::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Math|Transform" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "ToSwingAndTwist" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "NodeColor", "0.1 0.1 0.7" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Units/Deprecated/Math/RigUnit_Converter.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Swing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ToSwingAndTwist>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ToSwingAndTwist, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ToSwingAndTwist, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistAxis_MetaData), NewProp_TwistAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ToSwingAndTwist, Swing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing_MetaData), NewProp_Swing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ToSwingAndTwist, Twist), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Twist_MetaData), NewProp_Twist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_TwistAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Swing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewProp_Twist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ToSwingAndTwist",
	Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::PropPointers),
	sizeof(FRigUnit_ToSwingAndTwist),
	alignof(FRigUnit_ToSwingAndTwist),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist.InnerSingleton;
}
void FRigUnit_ToSwingAndTwist::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ToSwingAndTwist::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Input,
		TwistAxis,
		Swing,
		Twist
	);
}
// End ScriptStruct FRigUnit_ToSwingAndTwist

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ConvertTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics::NewStructOps, TEXT("RigUnit_ConvertTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertTransform), 4195712052U) },
		{ FRigUnit_ConvertEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics::NewStructOps, TEXT("RigUnit_ConvertEulerTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertEulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertEulerTransform), 1533162185U) },
		{ FRigUnit_ConvertRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::NewStructOps, TEXT("RigUnit_ConvertRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertRotation), 2521391230U) },
		{ FRigUnit_ConvertVectorRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics::NewStructOps, TEXT("RigUnit_ConvertVectorRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertVectorRotation), 2877800069U) },
		{ FRigUnit_ConvertQuaternion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics::NewStructOps, TEXT("RigUnit_ConvertQuaternion"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertQuaternion), 743552639U) },
		{ FRigUnit_ConvertVectorToRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics::NewStructOps, TEXT("RigUnit_ConvertVectorToRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertVectorToRotation), 2703911142U) },
		{ FRigUnit_ConvertVectorToQuaternion::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics::NewStructOps, TEXT("RigUnit_ConvertVectorToQuaternion"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertVectorToQuaternion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertVectorToQuaternion), 2113460757U) },
		{ FRigUnit_ConvertRotationToVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics::NewStructOps, TEXT("RigUnit_ConvertRotationToVector"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertRotationToVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertRotationToVector), 616002247U) },
		{ FRigUnit_ConvertQuaternionToVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics::NewStructOps, TEXT("RigUnit_ConvertQuaternionToVector"), &Z_Registration_Info_UScriptStruct_RigUnit_ConvertQuaternionToVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ConvertQuaternionToVector), 4030563692U) },
		{ FRigUnit_ToSwingAndTwist::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::NewStructOps, TEXT("RigUnit_ToSwingAndTwist"), &Z_Registration_Info_UScriptStruct_RigUnit_ToSwingAndTwist, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ToSwingAndTwist), 11367668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_3185282750(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
