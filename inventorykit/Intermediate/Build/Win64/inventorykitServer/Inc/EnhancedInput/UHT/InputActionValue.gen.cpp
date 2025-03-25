// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionValue() {}

// Begin Cross Module References
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Enum EInputActionValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputActionValueType;
static UEnum* EInputActionValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputActionValueType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputActionValueType"));
	}
	return Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputActionValueType>()
{
	return EInputActionValueType_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axis1D.DisplayName", "Axis1D (float)" },
		{ "Axis1D.Name", "EInputActionValueType::Axis1D" },
		{ "Axis2D.DisplayName", "Axis2D (Vector2D)" },
		{ "Axis2D.Name", "EInputActionValueType::Axis2D" },
		{ "Axis3D.DisplayName", "Axis3D (Vector)" },
		{ "Axis3D.Name", "EInputActionValueType::Axis3D" },
		{ "BlueprintType", "true" },
		{ "Boolean.Comment", "// Value types in increasing size order (used for type promotion)\n// Name these Digital/Analog?\n" },
		{ "Boolean.DisplayName", "Digital (bool)" },
		{ "Boolean.Name", "EInputActionValueType::Boolean" },
		{ "Boolean.ToolTip", "Value types in increasing size order (used for type promotion)\nName these Digital/Analog?" },
		{ "ModuleRelativePath", "Public/InputActionValue.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputActionValueType::Boolean", (int64)EInputActionValueType::Boolean },
		{ "EInputActionValueType::Axis1D", (int64)EInputActionValueType::Axis1D },
		{ "EInputActionValueType::Axis2D", (int64)EInputActionValueType::Axis2D },
		{ "EInputActionValueType::Axis3D", (int64)EInputActionValueType::Axis3D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EInputActionValueType",
	"EInputActionValueType",
	Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType()
{
	if (!Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton;
}
// End Enum EInputActionValueType

// Begin ScriptStruct FInputActionValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionValue;
class UScriptStruct* FInputActionValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionValue, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputActionValue"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputActionValue>()
{
	return FInputActionValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue" },
		{ "HasNativeMake", "/Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType" },
		{ "ModuleRelativePath", "Public/InputActionValue.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"InputActionValue",
	nullptr,
	0,
	sizeof(FInputActionValue),
	alignof(FInputActionValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton, Z_Construct_UScriptStruct_FInputActionValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton;
}
// End ScriptStruct FInputActionValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputActionValueType_StaticEnum, TEXT("EInputActionValueType"), &Z_Registration_Info_UEnum_EInputActionValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3726302502U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputActionValue::StaticStruct, Z_Construct_UScriptStruct_FInputActionValue_Statics::NewStructOps, TEXT("InputActionValue"), &Z_Registration_Info_UScriptStruct_InputActionValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionValue), 494646648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_3050872557(TEXT("/Script/EnhancedInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
