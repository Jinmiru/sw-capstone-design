// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MaterialShaderQualitySettings/Classes/ShaderPlatformQualitySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPlatformQualitySettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings();
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
MATERIALSHADERQUALITYSETTINGS_API UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality();
MATERIALSHADERQUALITYSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
// End Cross Module References

// Begin Enum EMobileShadowQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileShadowQuality;
static UEnum* EMobileShadowQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality, (UObject*)Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("EMobileShadowQuality"));
	}
	return Z_Registration_Info_UEnum_EMobileShadowQuality.OuterSingleton;
}
template<> MATERIALSHADERQUALITYSETTINGS_API UEnum* StaticEnum<EMobileShadowQuality>()
{
	return EMobileShadowQuality_StaticEnum();
}
struct Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* \n*/" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
		{ "NoFiltering.Comment", "/**\n* \n*/// Lowest quality, no filtering.\n" },
		{ "NoFiltering.Name", "EMobileShadowQuality::NoFiltering" },
		{ "NoFiltering.ToolTip", "// Lowest quality, no filtering." },
		{ "PCF_1x1.Comment", "// Medium quality, 1x1 PCF filtering.\n" },
		{ "PCF_1x1.DisplayName", "1x1 PCF" },
		{ "PCF_1x1.Name", "EMobileShadowQuality::PCF_1x1" },
		{ "PCF_1x1.ToolTip", "Medium quality, 1x1 PCF filtering." },
		{ "PCF_3x3.Comment", "// Medium/High quality, 3x3 PCF filtering.\n" },
		{ "PCF_3x3.DisplayName", "3x3 PCF" },
		{ "PCF_3x3.Name", "EMobileShadowQuality::PCF_3x3" },
		{ "PCF_3x3.ToolTip", "Medium/High quality, 3x3 PCF filtering." },
		{ "PCF_5x5.Comment", "// Highest quality, 5x5 PCF filtering.\n" },
		{ "PCF_5x5.DisplayName", "5x5 PCF" },
		{ "PCF_5x5.Name", "EMobileShadowQuality::PCF_5x5" },
		{ "PCF_5x5.ToolTip", "Highest quality, 5x5 PCF filtering." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMobileShadowQuality::NoFiltering", (int64)EMobileShadowQuality::NoFiltering },
		{ "EMobileShadowQuality::PCF_1x1", (int64)EMobileShadowQuality::PCF_1x1 },
		{ "EMobileShadowQuality::PCF_3x3", (int64)EMobileShadowQuality::PCF_3x3 },
		{ "EMobileShadowQuality::PCF_5x5", (int64)EMobileShadowQuality::PCF_5x5 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	nullptr,
	"EMobileShadowQuality",
	"EMobileShadowQuality",
	Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality()
{
	if (!Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton, Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMobileShadowQuality.InnerSingleton;
}
// End Enum EMobileShadowQuality

// Begin ScriptStruct FMaterialQualityOverrides
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialQualityOverrides;
class UScriptStruct* FMaterialQualityOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialQualityOverrides, (UObject*)Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("MaterialQualityOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.OuterSingleton;
}
template<> MATERIALSHADERQUALITYSETTINGS_API UScriptStruct* StaticStruct<FMaterialQualityOverrides>()
{
	return FMaterialQualityOverrides::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// FMaterialQualityOverrides represents the full set of possible material overrides per quality level.\n" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
		{ "ToolTip", "FMaterialQualityOverrides represents the full set of possible material overrides per quality level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardQualityDuringCook_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Discard Quality During Cook" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverride_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Enable Quality Override" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFullyRough_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force Fully Rough" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNonMetal_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force Non-metal" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableLMDirectionality_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Disable Lightmap directionality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisablePreintegratedGF_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force not use preintegrated GF for simple IBL" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMaterialNormalCalculation_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Disable material normal calculation" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileShadowQuality_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Mobile shadow mapping quality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDiscardQualityDuringCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardQualityDuringCook;
	static void NewProp_bEnableOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverride;
	static void NewProp_bForceFullyRough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullyRough;
	static void NewProp_bForceNonMetal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNonMetal;
	static void NewProp_bForceDisableLMDirectionality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableLMDirectionality;
	static void NewProp_bForceDisablePreintegratedGF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisablePreintegratedGF;
	static void NewProp_bDisableMaterialNormalCalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMaterialNormalCalculation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobileShadowQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MobileShadowQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bDiscardQualityDuringCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook = { "bDiscardQualityDuringCook", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDiscardQualityDuringCook_MetaData), NewProp_bDiscardQualityDuringCook_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bEnableOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride = { "bEnableOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOverride_MetaData), NewProp_bEnableOverride_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bForceFullyRough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough = { "bForceFullyRough", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFullyRough_MetaData), NewProp_bForceFullyRough_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bForceNonMetal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal = { "bForceNonMetal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNonMetal_MetaData), NewProp_bForceNonMetal_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bForceDisableLMDirectionality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality = { "bForceDisableLMDirectionality", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableLMDirectionality_MetaData), NewProp_bForceDisableLMDirectionality_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisablePreintegratedGF_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bForceDisablePreintegratedGF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisablePreintegratedGF = { "bForceDisablePreintegratedGF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisablePreintegratedGF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisablePreintegratedGF_MetaData), NewProp_bForceDisablePreintegratedGF_MetaData) };
void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_SetBit(void* Obj)
{
	((FMaterialQualityOverrides*)Obj)->bDisableMaterialNormalCalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation = { "bDisableMaterialNormalCalculation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableMaterialNormalCalculation_MetaData), NewProp_bDisableMaterialNormalCalculation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileShadowQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileShadowQuality = { "MobileShadowQuality", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialQualityOverrides, MobileShadowQuality), Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileShadowQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileShadowQuality_MetaData), NewProp_MobileShadowQuality_MetaData) }; // 852671932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisablePreintegratedGF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileShadowQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileShadowQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	nullptr,
	&NewStructOps,
	"MaterialQualityOverrides",
	Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers),
	sizeof(FMaterialQualityOverrides),
	alignof(FMaterialQualityOverrides),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.InnerSingleton, Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialQualityOverrides.InnerSingleton;
}
// End ScriptStruct FMaterialQualityOverrides

// Begin Class UShaderPlatformQualitySettings
void UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShaderPlatformQualitySettings);
UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister()
{
	return UShaderPlatformQualitySettings::StaticClass();
}
struct Z_Construct_UClass_UShaderPlatformQualitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShaderPlatformQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityOverrides_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShaderPlatformQualitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides = { "QualityOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(QualityOverrides, UShaderPlatformQualitySettings), STRUCT_OFFSET(UShaderPlatformQualitySettings, QualityOverrides), Z_Construct_UScriptStruct_FMaterialQualityOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityOverrides_MetaData), NewProp_QualityOverrides_MetaData) }; // 1039540603
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::ClassParams = {
	&UShaderPlatformQualitySettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers),
	0,
	0x000804A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShaderPlatformQualitySettings()
{
	if (!Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton, Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShaderPlatformQualitySettings.OuterSingleton;
}
template<> MATERIALSHADERQUALITYSETTINGS_API UClass* StaticClass<UShaderPlatformQualitySettings>()
{
	return UShaderPlatformQualitySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderPlatformQualitySettings);
UShaderPlatformQualitySettings::~UShaderPlatformQualitySettings() {}
// End Class UShaderPlatformQualitySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMobileShadowQuality_StaticEnum, TEXT("EMobileShadowQuality"), &Z_Registration_Info_UEnum_EMobileShadowQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 852671932U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialQualityOverrides::StaticStruct, Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewStructOps, TEXT("MaterialQualityOverrides"), &Z_Registration_Info_UScriptStruct_MaterialQualityOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialQualityOverrides), 1039540603U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShaderPlatformQualitySettings, UShaderPlatformQualitySettings::StaticClass, TEXT("UShaderPlatformQualitySettings"), &Z_Registration_Info_UClass_UShaderPlatformQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShaderPlatformQualitySettings), 3885110118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_3014502558(TEXT("/Script/MaterialShaderQualitySettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
