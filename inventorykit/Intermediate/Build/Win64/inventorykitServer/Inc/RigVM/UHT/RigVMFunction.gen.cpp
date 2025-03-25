// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction() {}

// Begin Cross Module References
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMPinDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMPinDirection;
static UEnum* ERigVMPinDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMPinDirection, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMPinDirection"));
	}
	return Z_Registration_Info_UEnum_ERigVMPinDirection.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMPinDirection>()
{
	return ERigVMPinDirection_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Pin Direction is used to differentiate different kinds of \n * pins in the data flow graph - inputs, outputs etc.\n */" },
		{ "Hidden.Comment", "// A const value that cannot be connected to\n" },
		{ "Hidden.Name", "ERigVMPinDirection::Hidden" },
		{ "Hidden.ToolTip", "A const value that cannot be connected to" },
		{ "Input.Name", "ERigVMPinDirection::Input" },
		{ "Invalid.Comment", "// A mutable hidden value (used for interal state)\n" },
		{ "Invalid.Name", "ERigVMPinDirection::Invalid" },
		{ "Invalid.ToolTip", "A mutable hidden value (used for interal state)" },
		{ "IO.Comment", "// A mutable output value\n" },
		{ "IO.Name", "ERigVMPinDirection::IO" },
		{ "IO.ToolTip", "A mutable output value" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMFunction.h" },
		{ "Output.Comment", "// A const input value\n" },
		{ "Output.Name", "ERigVMPinDirection::Output" },
		{ "Output.ToolTip", "A const input value" },
		{ "ToolTip", "The Pin Direction is used to differentiate different kinds of\npins in the data flow graph - inputs, outputs etc." },
		{ "Visible.Comment", "// A mutable input and output value\n" },
		{ "Visible.Name", "ERigVMPinDirection::Visible" },
		{ "Visible.ToolTip", "A mutable input and output value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMPinDirection::Input", (int64)ERigVMPinDirection::Input },
		{ "ERigVMPinDirection::Output", (int64)ERigVMPinDirection::Output },
		{ "ERigVMPinDirection::IO", (int64)ERigVMPinDirection::IO },
		{ "ERigVMPinDirection::Visible", (int64)ERigVMPinDirection::Visible },
		{ "ERigVMPinDirection::Hidden", (int64)ERigVMPinDirection::Hidden },
		{ "ERigVMPinDirection::Invalid", (int64)ERigVMPinDirection::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMPinDirection",
	"ERigVMPinDirection",
	Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection()
{
	if (!Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMPinDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMPinDirection.InnerSingleton;
}
// End Enum ERigVMPinDirection

// Begin Enum ERigVMFunctionArgumentDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection;
static UEnum* ERigVMFunctionArgumentDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMFunctionArgumentDirection"));
	}
	return Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMFunctionArgumentDirection>()
{
	return ERigVMFunctionArgumentDirection_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Function Argument is used to differentiate different kinds of \n * pins in the data flow graph - inputs or outputs \n */" },
		{ "Input.Name", "ERigVMFunctionArgumentDirection::Input" },
		{ "Invalid.Comment", "// A mutable output value\n" },
		{ "Invalid.Name", "ERigVMFunctionArgumentDirection::Invalid" },
		{ "Invalid.ToolTip", "A mutable output value" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMFunction.h" },
		{ "Output.Comment", "// A const input value\n" },
		{ "Output.Name", "ERigVMFunctionArgumentDirection::Output" },
		{ "Output.ToolTip", "A const input value" },
		{ "ToolTip", "The Function Argument is used to differentiate different kinds of\npins in the data flow graph - inputs or outputs" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMFunctionArgumentDirection::Input", (int64)ERigVMFunctionArgumentDirection::Input },
		{ "ERigVMFunctionArgumentDirection::Output", (int64)ERigVMFunctionArgumentDirection::Output },
		{ "ERigVMFunctionArgumentDirection::Invalid", (int64)ERigVMFunctionArgumentDirection::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMFunctionArgumentDirection",
	"ERigVMFunctionArgumentDirection",
	Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection()
{
	if (!Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMFunctionArgumentDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection.InnerSingleton;
}
// End Enum ERigVMFunctionArgumentDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMPinDirection_StaticEnum, TEXT("ERigVMPinDirection"), &Z_Registration_Info_UEnum_ERigVMPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2587438365U) },
		{ ERigVMFunctionArgumentDirection_StaticEnum, TEXT("ERigVMFunctionArgumentDirection"), &Z_Registration_Info_UEnum_ERigVMFunctionArgumentDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 868427599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h_3212028696(TEXT("/Script/RigVM"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
