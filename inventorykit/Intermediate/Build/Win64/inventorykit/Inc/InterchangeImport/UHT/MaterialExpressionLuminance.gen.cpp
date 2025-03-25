// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLuminance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXLuminance();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_NoRegister();
INTERCHANGEIMPORT_API UEnum* Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Enum EMaterialXLuminanceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialXLuminanceMode;
static UEnum* EMaterialXLuminanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialXLuminanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialXLuminanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode, (UObject*)Z_Construct_UPackage__Script_InterchangeImport(), TEXT("EMaterialXLuminanceMode"));
	}
	return Z_Registration_Info_UEnum_EMaterialXLuminanceMode.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMaterialXLuminanceMode>()
{
	return EMaterialXLuminanceMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACEScg.Name", "EMaterialXLuminanceMode::ACEScg" },
		{ "Comment", "/**\n * A material expression that outputs a grayscale image containing the luminance of the incoming RGB color in all color channels;\n    the alpha channel is left unchanged if present.\n */" },
		{ "Custom.Name", "EMaterialXLuminanceMode::Custom" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
		{ "Rec2020.Name", "EMaterialXLuminanceMode::Rec2020" },
		{ "Rec2100.Name", "EMaterialXLuminanceMode::Rec2100" },
		{ "Rec709.Name", "EMaterialXLuminanceMode::Rec709" },
		{ "ToolTip", "A material expression that outputs a grayscale image containing the luminance of the incoming RGB color in all color channels;\n    the alpha channel is left unchanged if present." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialXLuminanceMode::ACEScg", (int64)EMaterialXLuminanceMode::ACEScg },
		{ "EMaterialXLuminanceMode::Rec709", (int64)EMaterialXLuminanceMode::Rec709 },
		{ "EMaterialXLuminanceMode::Rec2020", (int64)EMaterialXLuminanceMode::Rec2020 },
		{ "EMaterialXLuminanceMode::Rec2100", (int64)EMaterialXLuminanceMode::Rec2100 },
		{ "EMaterialXLuminanceMode::Custom", (int64)EMaterialXLuminanceMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeImport,
	nullptr,
	"EMaterialXLuminanceMode",
	"EMaterialXLuminanceMode",
	Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode()
{
	if (!Z_Registration_Info_UEnum_EMaterialXLuminanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialXLuminanceMode.InnerSingleton, Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialXLuminanceMode.InnerSingleton;
}
// End Enum EMaterialXLuminanceMode

// Begin Class UMaterialExpressionMaterialXLuminance
void UMaterialExpressionMaterialXLuminance::StaticRegisterNativesUMaterialExpressionMaterialXLuminance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXLuminance);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_NoRegister()
{
	return UMaterialExpressionMaterialXLuminance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
		{ "Private", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[] = {
		{ "Category", "MaterialExpressionLuminance" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceMode_MetaData[] = {
		{ "Category", "MaterialExpressionLuminance" },
		{ "Comment", "// Color component factors for converting a color to greyscale.\n" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionLuminance.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Color component factors for converting a color to greyscale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LuminanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LuminanceMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXLuminance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXLuminance, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceFactors = { "LuminanceFactors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXLuminance, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuminanceFactors_MetaData), NewProp_LuminanceFactors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceMode = { "LuminanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXLuminance, LuminanceMode), Z_Construct_UEnum_InterchangeImport_EMaterialXLuminanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuminanceMode_MetaData), NewProp_LuminanceMode_MetaData) }; // 71046240
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceFactors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::NewProp_LuminanceMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::ClassParams = {
	&UMaterialExpressionMaterialXLuminance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialXLuminance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXLuminance>()
{
	return UMaterialExpressionMaterialXLuminance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXLuminance);
UMaterialExpressionMaterialXLuminance::~UMaterialExpressionMaterialXLuminance() {}
// End Class UMaterialExpressionMaterialXLuminance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialXLuminanceMode_StaticEnum, TEXT("EMaterialXLuminanceMode"), &Z_Registration_Info_UEnum_EMaterialXLuminanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 71046240U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXLuminance, UMaterialExpressionMaterialXLuminance::StaticClass, TEXT("UMaterialExpressionMaterialXLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXLuminance), 1156367732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_2832099(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
