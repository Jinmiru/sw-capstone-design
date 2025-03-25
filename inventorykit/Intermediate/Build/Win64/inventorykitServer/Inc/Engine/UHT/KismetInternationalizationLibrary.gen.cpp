// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/KismetInternationalizationLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInternationalizationLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UKismetInternationalizationLibrary Function ClearCurrentAssetGroupCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics
{
	struct KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms
	{
		FName AssetGroup;
		bool SaveToConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Clear the given asset group category culture.\n\x09 * @param AssetGroup The asset group to clear the culture for.\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Clear the given asset group category culture.\n@param AssetGroup The asset group to clear the culture for.\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGroup_MetaData), NewProp_AssetGroup_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "ClearCurrentAssetGroupCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function ClearCurrentAssetGroupCulture

// Begin Class UKismetInternationalizationLibrary Function GetCultureDisplayName
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics
{
	struct KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms
	{
		FString Culture;
		bool Localized;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the display name of the given culture.\n\x09 * @param Culture The culture to get the display name of, as an IETF language tag (eg, \"zh-Hans-CN\")\n\x09 * @param Localized True to get the localized display name (the name of the culture in its own language), or False to get the display name in the current language.\n\x09 * @return The display name of the culture, or the given culture code on failure.\n\x09 */" },
		{ "CPP_Default_Localized", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the display name of the given culture.\n@param Culture The culture to get the display name of, as an IETF language tag (eg, \"zh-Hans-CN\")\n@param Localized True to get the localized display name (the name of the culture in its own language), or False to get the display name in the current language.\n@return The display name of the culture, or the given culture code on failure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Localized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_Localized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Localized;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms*)Obj)->Localized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized = { "Localized", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Localized_MetaData), NewProp_Localized_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCultureDisplayName", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCultureDisplayName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_Localized);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCultureDisplayName(Z_Param_Culture,Z_Param_Localized);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetCultureDisplayName

// Begin Class UKismetInternationalizationLibrary Function GetCurrentAssetGroupCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics
{
	struct KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms
	{
		FName AssetGroup;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the given asset group category culture.\n\x09 * @note Returns the current language if the group category doesn't have a culture override.\n\x09 * @param AssetGroup The asset group to get the culture for.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the given asset group category culture.\n@note Returns the current language if the group category doesn't have a culture override.\n@param AssetGroup The asset group to get the culture for.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGroup_MetaData), NewProp_AssetGroup_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentAssetGroupCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(Z_Param_AssetGroup);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetCurrentAssetGroupCulture

// Begin Class UKismetInternationalizationLibrary Function GetCurrentCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics
{
	struct KismetInternationalizationLibrary_eventGetCurrentCulture_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current culture as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current culture as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::KismetInternationalizationLibrary_eventGetCurrentCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentCulture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentCulture();
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetCurrentCulture

// Begin Class UKismetInternationalizationLibrary Function GetCurrentLanguage
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics
{
	struct KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current language (for localization) as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @return The language as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current language (for localization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The language as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLanguage", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLanguage();
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetCurrentLanguage

// Begin Class UKismetInternationalizationLibrary Function GetCurrentLocale
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics
{
	struct KismetInternationalizationLibrary_eventGetCurrentLocale_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the current locale (for internationalization) as an IETF language tag:\n\x09 *  - A two-letter ISO 639-1 language code (eg, \"zh\").\n\x09 *  - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n\x09 *  - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n\x09 * @return The locale as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current locale (for internationalization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The locale as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLocale", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::KismetInternationalizationLibrary_eventGetCurrentLocale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::KismetInternationalizationLibrary_eventGetCurrentLocale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetCurrentLocale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLocale();
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetCurrentLocale

// Begin Class UKismetInternationalizationLibrary Function GetLocalizedCultures
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics
{
	struct KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms
	{
		bool IncludeGame;
		bool IncludeEngine;
		bool IncludeEditor;
		bool IncludeAdditional;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the list of cultures that have localization data available for them.\n\x09 * @param IncludeGame Check for localized game resources.\n\x09 * @param IncludeEngine Check for localized engine resources.\n\x09 * @param IncludeEditor Check for localized editor resources.\n\x09 * @param IncludeAdditional Check for localized additional (eg, plugin) resources.\n\x09 * @return The list of cultures as IETF language tags (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "CPP_Default_IncludeAdditional", "false" },
		{ "CPP_Default_IncludeEditor", "false" },
		{ "CPP_Default_IncludeEngine", "false" },
		{ "CPP_Default_IncludeGame", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the list of cultures that have localization data available for them.\n@param IncludeGame Check for localized game resources.\n@param IncludeEngine Check for localized engine resources.\n@param IncludeEditor Check for localized editor resources.\n@param IncludeAdditional Check for localized additional (eg, plugin) resources.\n@return The list of cultures as IETF language tags (eg, \"zh-Hans-CN\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeGame_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeEngine_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAdditional_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IncludeGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeGame;
	static void NewProp_IncludeEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeEngine;
	static void NewProp_IncludeEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeEditor;
	static void NewProp_IncludeAdditional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeAdditional;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame = { "IncludeGame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeGame_MetaData), NewProp_IncludeGame_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEngine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine = { "IncludeEngine", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeEngine_MetaData), NewProp_IncludeEngine_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor = { "IncludeEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeEditor_MetaData), NewProp_IncludeEditor_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeAdditional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional = { "IncludeAdditional", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeAdditional_MetaData), NewProp_IncludeAdditional_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetLocalizedCultures", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetLocalizedCultures)
{
	P_GET_UBOOL(Z_Param_IncludeGame);
	P_GET_UBOOL(Z_Param_IncludeEngine);
	P_GET_UBOOL(Z_Param_IncludeEditor);
	P_GET_UBOOL(Z_Param_IncludeAdditional);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UKismetInternationalizationLibrary::GetLocalizedCultures(Z_Param_IncludeGame,Z_Param_IncludeEngine,Z_Param_IncludeEditor,Z_Param_IncludeAdditional);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetLocalizedCultures

// Begin Class UKismetInternationalizationLibrary Function GetNativeCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics
{
	struct KismetInternationalizationLibrary_eventGetNativeCulture_Parms
	{
		ELocalizedTextSourceCategory TextCategory;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Get the native culture for the given localization category.\n\x09 * @param Category The localization category to query.\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the native culture for the given localization category.\n@param Category The localization category to query.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory = { "TextCategory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, TextCategory), Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextCategory_MetaData), NewProp_TextCategory_MetaData) }; // 173526157
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetNativeCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::KismetInternationalizationLibrary_eventGetNativeCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::KismetInternationalizationLibrary_eventGetNativeCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetNativeCulture)
{
	P_GET_ENUM(ELocalizedTextSourceCategory,Z_Param_TextCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetNativeCulture(ELocalizedTextSourceCategory(Z_Param_TextCategory));
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetNativeCulture

// Begin Class UKismetInternationalizationLibrary Function GetSuitableCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics
{
	struct KismetInternationalizationLibrary_eventGetSuitableCulture_Parms
	{
		TArray<FString> AvailableCultures;
		FString CultureToMatch;
		FString FallbackCulture;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.\n\x09 *   eg) If your list was [en, fr, de] and the given culture was \"en-US\", this function would return \"en\".\n\x09 *   eg) If your list was [zh, ar, pl] and the given culture was \"en-US\", this function would return the fallback culture.\n\x09 * @param AvailableCultures List of available cultures to filter against (see GetLocalizedCultures).\n\x09 * @param CultureToMatch Culture to try and match (see GetCurrentLanguage).\n\x09 * @param FallbackCulture The culture to return if there is no suitable match in the list (typically your native culture, see GetNativeCulture).\n\x09 * @return The culture as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 */" },
		{ "CPP_Default_FallbackCulture", "en" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.\n  eg) If your list was [en, fr, de] and the given culture was \"en-US\", this function would return \"en\".\n  eg) If your list was [zh, ar, pl] and the given culture was \"en-US\", this function would return the fallback culture.\n@param AvailableCultures List of available cultures to filter against (see GetLocalizedCultures).\n@param CultureToMatch Culture to try and match (see GetCurrentLanguage).\n@param FallbackCulture The culture to return if there is no suitable match in the list (typically your native culture, see GetNativeCulture).\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableCultures_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableCultures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableCultures;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureToMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FallbackCulture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner = { "AvailableCultures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures = { "AvailableCultures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, AvailableCultures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableCultures_MetaData), NewProp_AvailableCultures_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch = { "CultureToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, CultureToMatch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureToMatch_MetaData), NewProp_CultureToMatch_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture = { "FallbackCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, FallbackCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackCulture_MetaData), NewProp_FallbackCulture_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetSuitableCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::KismetInternationalizationLibrary_eventGetSuitableCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::KismetInternationalizationLibrary_eventGetSuitableCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execGetSuitableCulture)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_AvailableCultures);
	P_GET_PROPERTY(FStrProperty,Z_Param_CultureToMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_FallbackCulture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetSuitableCulture(Z_Param_Out_AvailableCultures,Z_Param_CultureToMatch,Z_Param_FallbackCulture);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function GetSuitableCulture

// Begin Class UKismetInternationalizationLibrary Function SetCurrentAssetGroupCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics
{
	struct KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms
	{
		FName AssetGroup;
		FString Culture;
		bool SaveToConfig;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param AssetGroup The asset group to set the culture for.\n\x09 * @param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the culture was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n@param AssetGroup The asset group to set the culture for.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetGroup_MetaData), NewProp_AssetGroup_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentAssetGroupCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AssetGroup);
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_Culture,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function SetCurrentAssetGroupCulture

// Begin Class UKismetInternationalizationLibrary Function SetCurrentCulture
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics
{
	struct KismetInternationalizationLibrary_eventSetCurrentCulture_Parms
	{
		FString Culture;
		bool SaveToConfig;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the current culture.\n\x09 * @note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n\x09 * @param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the culture was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current culture.\n@note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentCulture", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::KismetInternationalizationLibrary_eventSetCurrentCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentCulture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentCulture(Z_Param_Culture,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function SetCurrentCulture

// Begin Class UKismetInternationalizationLibrary Function SetCurrentLanguage
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics
{
	struct KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms
	{
		FString Culture;
		bool SaveToConfig;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set *only* the current language (for localization).\n\x09 * @note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n\x09 * @param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the language was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current language (for localization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language was set, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguage", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLanguage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguage(Z_Param_Culture,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function SetCurrentLanguage

// Begin Class UKismetInternationalizationLibrary Function SetCurrentLanguageAndLocale
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics
{
	struct KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms
	{
		FString Culture;
		bool SaveToConfig;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set the current language (for localization) and locale (for internationalization).\n\x09 * @param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the language and locale were set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current language (for localization) and locale (for internationalization).\n@param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language and locale were set, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguageAndLocale", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(Z_Param_Culture,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function SetCurrentLanguageAndLocale

// Begin Class UKismetInternationalizationLibrary Function SetCurrentLocale
struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics
{
	struct KismetInternationalizationLibrary_eventSetCurrentLocale_Parms
	{
		FString Culture;
		bool SaveToConfig;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "Comment", "/**\n\x09 * Set *only* the current locale (for internationalization).\n\x09 * @note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n\x09 * @param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n\x09 * @param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n\x09 * @return True if the locale was set, false otherwise.\n\x09 */" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current locale (for internationalization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the locale was set, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Culture;
	static void NewProp_SaveToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->SaveToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToConfig_MetaData), NewProp_SaveToConfig_MetaData) };
void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLocale", nullptr, nullptr, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::KismetInternationalizationLibrary_eventSetCurrentLocale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInternationalizationLibrary::execSetCurrentLocale)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Culture);
	P_GET_UBOOL(Z_Param_SaveToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLocale(Z_Param_Culture,Z_Param_SaveToConfig);
	P_NATIVE_END;
}
// End Class UKismetInternationalizationLibrary Function SetCurrentLocale

// Begin Class UKismetInternationalizationLibrary
void UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary()
{
	UClass* Class = UKismetInternationalizationLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture },
		{ "GetCultureDisplayName", &UKismetInternationalizationLibrary::execGetCultureDisplayName },
		{ "GetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture },
		{ "GetCurrentCulture", &UKismetInternationalizationLibrary::execGetCurrentCulture },
		{ "GetCurrentLanguage", &UKismetInternationalizationLibrary::execGetCurrentLanguage },
		{ "GetCurrentLocale", &UKismetInternationalizationLibrary::execGetCurrentLocale },
		{ "GetLocalizedCultures", &UKismetInternationalizationLibrary::execGetLocalizedCultures },
		{ "GetNativeCulture", &UKismetInternationalizationLibrary::execGetNativeCulture },
		{ "GetSuitableCulture", &UKismetInternationalizationLibrary::execGetSuitableCulture },
		{ "SetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture },
		{ "SetCurrentCulture", &UKismetInternationalizationLibrary::execSetCurrentCulture },
		{ "SetCurrentLanguage", &UKismetInternationalizationLibrary::execSetCurrentLanguage },
		{ "SetCurrentLanguageAndLocale", &UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale },
		{ "SetCurrentLocale", &UKismetInternationalizationLibrary::execSetCurrentLocale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetInternationalizationLibrary);
UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister()
{
	return UKismetInternationalizationLibrary::StaticClass();
}
struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetInternationalizationLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ScriptName", "InternationalizationLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture, "ClearCurrentAssetGroupCulture" }, // 3179089304
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName, "GetCultureDisplayName" }, // 1752178533
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture, "GetCurrentAssetGroupCulture" }, // 2244417958
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture, "GetCurrentCulture" }, // 3208302484
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage, "GetCurrentLanguage" }, // 2076807405
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale, "GetCurrentLocale" }, // 2209000267
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures, "GetLocalizedCultures" }, // 513120287
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture, "GetNativeCulture" }, // 2087353561
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture, "GetSuitableCulture" }, // 716036076
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture, "SetCurrentAssetGroupCulture" }, // 2876208891
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture, "SetCurrentCulture" }, // 2665615370
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage, "SetCurrentLanguage" }, // 3833939001
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale, "SetCurrentLanguageAndLocale" }, // 1554667083
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale, "SetCurrentLocale" }, // 499166344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInternationalizationLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams = {
	&UKismetInternationalizationLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKismetInternationalizationLibrary()
{
	if (!Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton, Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKismetInternationalizationLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UKismetInternationalizationLibrary>()
{
	return UKismetInternationalizationLibrary::StaticClass();
}
UKismetInternationalizationLibrary::UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInternationalizationLibrary);
UKismetInternationalizationLibrary::~UKismetInternationalizationLibrary() {}
// End Class UKismetInternationalizationLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKismetInternationalizationLibrary, UKismetInternationalizationLibrary::StaticClass, TEXT("UKismetInternationalizationLibrary"), &Z_Registration_Info_UClass_UKismetInternationalizationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetInternationalizationLibrary), 3932561699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_2195859707(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
