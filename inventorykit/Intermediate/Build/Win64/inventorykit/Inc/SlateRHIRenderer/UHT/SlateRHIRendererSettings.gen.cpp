// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateRHIRenderer/Public/SlateRHIRendererSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateRHIRendererSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIRendererSettings();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
SLATERHIRENDERER_API UScriptStruct* Z_Construct_UScriptStruct_FSlatePostSettings();
UPackage* Z_Construct_UPackage__Script_SlateRHIRenderer();
// End Cross Module References

// Begin ScriptStruct FSlatePostSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlatePostSettings;
class UScriptStruct* FSlatePostSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlatePostSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlatePostSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlatePostSettings, (UObject*)Z_Construct_UPackage__Script_SlateRHIRenderer(), TEXT("SlatePostSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SlatePostSettings.OuterSingleton;
}
template<> SLATERHIRENDERER_API UScriptStruct* StaticStruct<FSlatePostSettings>()
{
	return FSlatePostSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlatePostSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for a particular Slate Post RT.\n * Notably if enabled & blur by default. To be updated with additional effects & to be expandable in game code / settings.\n */" },
		{ "DisableSplitPin", "" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Settings for a particular Slate Post RT.\nNotably if enabled & blur by default. To be updated with additional effects & to be expandable in game code / settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "BufferSettings" },
		{ "Comment", "/** Should this post buffer be enabled for updating */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should this post buffer be enabled for updating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessorClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "BufferSettings" },
		{ "Comment", "/** Copy of actually loaded post processor class */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Copy of actually loaded post processor class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToSlatePostRT_MetaData[] = {
		{ "Comment", "/** Path to Slate Post RT Asset */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Path to Slate Post RT Asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSlatePostRT_MetaData[] = {
		{ "Comment", "/** Cached load of Slate Post RT Asset */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Cached load of Slate Post RT Asset" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PostProcessorClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathToSlatePostRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedSlatePostRT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlatePostSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FSlatePostSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSlatePostSettings), &Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_PostProcessorClass = { "PostProcessorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlatePostSettings, PostProcessorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessorClass_MetaData), NewProp_PostProcessorClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_PathToSlatePostRT = { "PathToSlatePostRT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlatePostSettings, PathToSlatePostRT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToSlatePostRT_MetaData), NewProp_PathToSlatePostRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_CachedSlatePostRT = { "CachedSlatePostRT", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlatePostSettings, CachedSlatePostRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSlatePostRT_MetaData), NewProp_CachedSlatePostRT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlatePostSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_PostProcessorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_PathToSlatePostRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewProp_CachedSlatePostRT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlatePostSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateRHIRenderer,
	nullptr,
	&NewStructOps,
	"SlatePostSettings",
	Z_Construct_UScriptStruct_FSlatePostSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostSettings_Statics::PropPointers),
	sizeof(FSlatePostSettings),
	alignof(FSlatePostSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePostSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlatePostSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlatePostSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SlatePostSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlatePostSettings.InnerSingleton, Z_Construct_UScriptStruct_FSlatePostSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlatePostSettings.InnerSingleton;
}
// End ScriptStruct FSlatePostSettings

// Begin Class USlateRHIRendererSettings Function GetMutableSlatePostSetting
struct Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics
{
	struct SlateRHIRendererSettings_eventGetMutableSlatePostSetting_Parms
	{
		ESlatePostRT InPostBufferBit;
		FSlatePostSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SlateFX" },
		{ "Comment", "/** Get settings struct for a particular post buffer index */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Get settings struct for a particular post buffer index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPostBufferBit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPostBufferBit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_InPostBufferBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_InPostBufferBit = { "InPostBufferBit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateRHIRendererSettings_eventGetMutableSlatePostSetting_Parms, InPostBufferBit), Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateRHIRendererSettings_eventGetMutableSlatePostSetting_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlatePostSettings, METADATA_PARAMS(0, nullptr) }; // 2086792161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_InPostBufferBit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_InPostBufferBit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateRHIRendererSettings, nullptr, "GetMutableSlatePostSetting", nullptr, nullptr, Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::SlateRHIRendererSettings_eventGetMutableSlatePostSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::SlateRHIRendererSettings_eventGetMutableSlatePostSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateRHIRendererSettings::execGetMutableSlatePostSetting)
{
	P_GET_ENUM(ESlatePostRT,Z_Param_InPostBufferBit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlatePostSettings*)Z_Param__Result=P_THIS->GetMutableSlatePostSetting(ESlatePostRT(Z_Param_InPostBufferBit));
	P_NATIVE_END;
}
// End Class USlateRHIRendererSettings Function GetMutableSlatePostSetting

// Begin Class USlateRHIRendererSettings Function GetSlatePostSetting
struct Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics
{
	struct SlateRHIRendererSettings_eventGetSlatePostSetting_Parms
	{
		ESlatePostRT InPostBufferBit;
		FSlatePostSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SlateFX" },
		{ "Comment", "/** Get settings struct for a particular post buffer index */" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Get settings struct for a particular post buffer index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPostBufferBit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPostBufferBit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_InPostBufferBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_InPostBufferBit = { "InPostBufferBit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateRHIRendererSettings_eventGetSlatePostSetting_Parms, InPostBufferBit), Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateRHIRendererSettings_eventGetSlatePostSetting_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlatePostSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2086792161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_InPostBufferBit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_InPostBufferBit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateRHIRendererSettings, nullptr, "GetSlatePostSetting", nullptr, nullptr, Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::SlateRHIRendererSettings_eventGetSlatePostSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::SlateRHIRendererSettings_eventGetSlatePostSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateRHIRendererSettings::execGetSlatePostSetting)
{
	P_GET_ENUM(ESlatePostRT,Z_Param_InPostBufferBit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlatePostSettings*)Z_Param__Result=P_THIS->GetSlatePostSetting(ESlatePostRT(Z_Param_InPostBufferBit));
	P_NATIVE_END;
}
// End Class USlateRHIRendererSettings Function GetSlatePostSetting

// Begin Class USlateRHIRendererSettings
void USlateRHIRendererSettings::StaticRegisterNativesUSlateRHIRendererSettings()
{
	UClass* Class = USlateRHIRendererSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMutableSlatePostSetting", &USlateRHIRendererSettings::execGetMutableSlatePostSetting },
		{ "GetSlatePostSetting", &USlateRHIRendererSettings::execGetSlatePostSetting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateRHIRendererSettings);
UClass* Z_Construct_UClass_USlateRHIRendererSettings_NoRegister()
{
	return USlateRHIRendererSettings::StaticClass();
}
struct Z_Construct_UClass_USlateRHIRendererSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings used to control slate rendering\n */" },
		{ "IncludePath", "SlateRHIRendererSettings.h" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Settings used to control slate rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlatePostSettings_MetaData[] = {
		{ "Category", "PostProcessing" },
		{ "Comment", "/** \n\x09 * Map of all slate post RT's and their settings \n\x09 * Note that each post RT used in a frame will result in 1 full framebuffer copy for slate to sample from.\n\x09 * If a post RT is not used, no copy will occur & that post RT will be resized to 1x1 after 2 frames of non-use.\n\x09 * \n\x09 * By default only SlatePostRT_0 is enabled. The rest must manually be enabled in settings below.\n\x09 */// Map is nice since needs no editor customization. After initial run there should be no more than 5 lookups each frame.\n" },
		{ "ModuleRelativePath", "Public/SlateRHIRendererSettings.h" },
		{ "ToolTip", "Map of all slate post RT's and their settings\nNote that each post RT used in a frame will result in 1 full framebuffer copy for slate to sample from.\nIf a post RT is not used, no copy will occur & that post RT will be resized to 1x1 after 2 frames of non-use.\n\nBy default only SlatePostRT_0 is enabled. The rest must manually be enabled in settings below.\n        // Map is nice since needs no editor customization. After initial run there should be no more than 5 lookups each frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlatePostSettings_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SlatePostSettings_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SlatePostSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlatePostSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateRHIRendererSettings_GetMutableSlatePostSetting, "GetMutableSlatePostSetting" }, // 1648576352
		{ &Z_Construct_UFunction_USlateRHIRendererSettings_GetSlatePostSetting, "GetSlatePostSetting" }, // 1238262437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateRHIRendererSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_ValueProp = { "SlatePostSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSlatePostSettings, METADATA_PARAMS(0, nullptr) }; // 2086792161
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_Key_KeyProp = { "SlatePostSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings = { "SlatePostSettings", nullptr, (EPropertyFlags)0x0040000000004041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateRHIRendererSettings, SlatePostSettings), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlatePostSettings_MetaData), NewProp_SlatePostSettings_MetaData) }; // 968732184 2086792161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateRHIRendererSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateRHIRendererSettings_Statics::NewProp_SlatePostSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIRendererSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateRHIRendererSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateRHIRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIRendererSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateRHIRendererSettings_Statics::ClassParams = {
	&USlateRHIRendererSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USlateRHIRendererSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIRendererSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIRendererSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateRHIRendererSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateRHIRendererSettings()
{
	if (!Z_Registration_Info_UClass_USlateRHIRendererSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateRHIRendererSettings.OuterSingleton, Z_Construct_UClass_USlateRHIRendererSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateRHIRendererSettings.OuterSingleton;
}
template<> SLATERHIRENDERER_API UClass* StaticClass<USlateRHIRendererSettings>()
{
	return USlateRHIRendererSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateRHIRendererSettings);
// End Class USlateRHIRendererSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlatePostSettings::StaticStruct, Z_Construct_UScriptStruct_FSlatePostSettings_Statics::NewStructOps, TEXT("SlatePostSettings"), &Z_Registration_Info_UScriptStruct_SlatePostSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlatePostSettings), 2086792161U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateRHIRendererSettings, USlateRHIRendererSettings::StaticClass, TEXT("USlateRHIRendererSettings"), &Z_Registration_Info_UClass_USlateRHIRendererSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateRHIRendererSettings), 1626488129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_3638248149(TEXT("/Script/SlateRHIRenderer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
