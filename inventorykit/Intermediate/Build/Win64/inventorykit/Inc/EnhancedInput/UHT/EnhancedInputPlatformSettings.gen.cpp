// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputPlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputPlatformSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformData();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputPlatformSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Class UEnhancedInputPlatformData Function GetContextRedirect
struct Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics
{
	struct EnhancedInputPlatformData_eventGetContextRedirect_Parms
	{
		UInputMappingContext* InContext;
		const UInputMappingContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EnhancedInput" },
		{ "Comment", "/** Returns a pointer to the desired redirect mapping context. If there isn't one, then this returns InContext. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "Returns a pointer to the desired redirect mapping context. If there isn't one, then this returns InContext." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputPlatformData_eventGetContextRedirect_Parms, InContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputPlatformData_eventGetContextRedirect_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::NewProp_InContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputPlatformData, nullptr, "GetContextRedirect", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::EnhancedInputPlatformData_eventGetContextRedirect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::EnhancedInputPlatformData_eventGetContextRedirect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputPlatformData::execGetContextRedirect)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_InContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputMappingContext**)Z_Param__Result=P_THIS->GetContextRedirect(Z_Param_InContext);
	P_NATIVE_END;
}
// End Class UEnhancedInputPlatformData Function GetContextRedirect

// Begin Class UEnhancedInputPlatformData
void UEnhancedInputPlatformData::StaticRegisterNativesUEnhancedInputPlatformData()
{
	UClass* Class = UEnhancedInputPlatformData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetContextRedirect", &UEnhancedInputPlatformData::execGetContextRedirect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputPlatformData);
UClass* Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister()
{
	return UEnhancedInputPlatformData::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputPlatformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "EnhancedInput" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/**\n * A base class that can be used to store platform specific data for Enhanced Input.\n * \n * Make a subclass of this to add some additional options for per-platform settings \n */" },
		{ "IncludePath", "EnhancedInputPlatformSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "A base class that can be used to store platform specific data for Enhanced Input.\n\nMake a subclass of this to add some additional options for per-platform settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContextRedirects_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "Comment", "/**\n\x09 * Maps one Input Mapping Context to another. This can be used to replace\n\x09 * specific Input Mapping Contexts with another on a per-platform basis. \n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "Maps one Input Mapping Context to another. This can be used to replace\nspecific Input Mapping Contexts with another on a per-platform basis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContextRedirects_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContextRedirects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MappingContextRedirects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputPlatformData_GetContextRedirect, "GetContextRedirect" }, // 1334918334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputPlatformData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects_ValueProp = { "MappingContextRedirects", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects_Key_KeyProp = { "MappingContextRedirects_Key", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects = { "MappingContextRedirects", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputPlatformData, MappingContextRedirects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContextRedirects_MetaData), NewProp_MappingContextRedirects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputPlatformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformData_Statics::NewProp_MappingContextRedirects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputPlatformData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputPlatformData_Statics::ClassParams = {
	&UEnhancedInputPlatformData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedInputPlatformData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputPlatformData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputPlatformData()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputPlatformData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputPlatformData.OuterSingleton, Z_Construct_UClass_UEnhancedInputPlatformData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputPlatformData.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputPlatformData>()
{
	return UEnhancedInputPlatformData::StaticClass();
}
UEnhancedInputPlatformData::UEnhancedInputPlatformData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputPlatformData);
UEnhancedInputPlatformData::~UEnhancedInputPlatformData() {}
// End Class UEnhancedInputPlatformData

// Begin Class UEnhancedInputPlatformSettings
void UEnhancedInputPlatformSettings::StaticRegisterNativesUEnhancedInputPlatformSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputPlatformSettings);
UClass* Z_Construct_UClass_UEnhancedInputPlatformSettings_NoRegister()
{
	return UEnhancedInputPlatformSettings::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for Enhanced Input that can be set per-platform */" },
		{ "IncludePath", "EnhancedInputPlatformSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "Settings for Enhanced Input that can be set per-platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Input data that can be populated with Enhanced Input Platform Data blueprints */" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "Input data that can be populated with Enhanced Input Platform Data blueprints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDataClasses_MetaData[] = {
		{ "Comment", "/**\n\x09 * A transient array of the subclasses for the Enhanced Input Platform data. This will prevent us from\n\x09 * from having to load the class' default object during game time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "A transient array of the subclasses for the Enhanced Input Platform data. This will prevent us from\nfrom having to load the class' default object during game time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLogMappingContextRedirects_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, then Enhanced Input will log which mapping contexts have been redirected when building the control mappings. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputPlatformSettings.h" },
		{ "ToolTip", "If true, then Enhanced Input will log which mapping contexts have been redirected when building the control mappings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InputData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InputDataClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputDataClasses;
	static void NewProp_bShouldLogMappingContextRedirects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLogMappingContextRedirects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputPlatformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputData_Inner = { "InputData", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputPlatformSettings, InputData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputData_MetaData), NewProp_InputData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputDataClasses_Inner = { "InputDataClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEnhancedInputPlatformData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputDataClasses = { "InputDataClasses", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputPlatformSettings, InputDataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDataClasses_MetaData), NewProp_InputDataClasses_MetaData) };
void Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_bShouldLogMappingContextRedirects_SetBit(void* Obj)
{
	((UEnhancedInputPlatformSettings*)Obj)->bShouldLogMappingContextRedirects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_bShouldLogMappingContextRedirects = { "bShouldLogMappingContextRedirects", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnhancedInputPlatformSettings), &Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_bShouldLogMappingContextRedirects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldLogMappingContextRedirects_MetaData), NewProp_bShouldLogMappingContextRedirects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputDataClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_InputDataClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::NewProp_bShouldLogMappingContextRedirects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::ClassParams = {
	&UEnhancedInputPlatformSettings::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::PropPointers),
	0,
	0x001004A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputPlatformSettings()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputPlatformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputPlatformSettings>()
{
	return UEnhancedInputPlatformSettings::StaticClass();
}
UEnhancedInputPlatformSettings::UEnhancedInputPlatformSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputPlatformSettings);
UEnhancedInputPlatformSettings::~UEnhancedInputPlatformSettings() {}
// End Class UEnhancedInputPlatformSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputPlatformData, UEnhancedInputPlatformData::StaticClass, TEXT("UEnhancedInputPlatformData"), &Z_Registration_Info_UClass_UEnhancedInputPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputPlatformData), 2302291061U) },
		{ Z_Construct_UClass_UEnhancedInputPlatformSettings, UEnhancedInputPlatformSettings::StaticClass, TEXT("UEnhancedInputPlatformSettings"), &Z_Registration_Info_UClass_UEnhancedInputPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputPlatformSettings), 2959416706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_3975966337(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputPlatformSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
