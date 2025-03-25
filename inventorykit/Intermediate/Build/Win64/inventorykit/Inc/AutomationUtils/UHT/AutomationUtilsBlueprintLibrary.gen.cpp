// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationUtils/Public/AutomationUtilsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationUtilsBlueprintLibrary() {}

// Begin Cross Module References
AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary();
AUTOMATIONUTILS_API UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AutomationUtils();
// End Cross Module References

// Begin Class UAutomationUtilsBlueprintLibrary Function TakeGameplayAutomationScreenshot
struct Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics
{
	struct AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms
	{
		FString ScreenshotName;
		float MaxGlobalError;
		float MaxLocalError;
		FString MapNameOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_MapNameOverride", "" },
		{ "CPP_Default_MaxGlobalError", "0.020000" },
		{ "CPP_Default_MaxLocalError", "0.120000" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLocalError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapNameOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, ScreenshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotName_MetaData), NewProp_ScreenshotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError = { "MaxGlobalError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxGlobalError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError = { "MaxLocalError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MaxLocalError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride = { "MapNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms, MapNameOverride), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_ScreenshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxGlobalError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MaxLocalError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::NewProp_MapNameOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, nullptr, "TakeGameplayAutomationScreenshot", nullptr, nullptr, Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::AutomationUtilsBlueprintLibrary_eventTakeGameplayAutomationScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxGlobalError);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLocalError);
	P_GET_PROPERTY(FStrProperty,Z_Param_MapNameOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(Z_Param_ScreenshotName,Z_Param_MaxGlobalError,Z_Param_MaxLocalError,Z_Param_MapNameOverride);
	P_NATIVE_END;
}
// End Class UAutomationUtilsBlueprintLibrary Function TakeGameplayAutomationScreenshot

// Begin Class UAutomationUtilsBlueprintLibrary
void UAutomationUtilsBlueprintLibrary::StaticRegisterNativesUAutomationUtilsBlueprintLibrary()
{
	UClass* Class = UAutomationUtilsBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TakeGameplayAutomationScreenshot", &UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationUtilsBlueprintLibrary);
UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_NoRegister()
{
	return UAutomationUtilsBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationUtilsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationUtilsBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, "TakeGameplayAutomationScreenshot" }, // 1869671679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationUtilsBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams = {
	&UAutomationUtilsBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationUtilsBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.OuterSingleton;
}
template<> AUTOMATIONUTILS_API UClass* StaticClass<UAutomationUtilsBlueprintLibrary>()
{
	return UAutomationUtilsBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationUtilsBlueprintLibrary);
UAutomationUtilsBlueprintLibrary::~UAutomationUtilsBlueprintLibrary() {}
// End Class UAutomationUtilsBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationUtilsBlueprintLibrary, UAutomationUtilsBlueprintLibrary::StaticClass, TEXT("UAutomationUtilsBlueprintLibrary"), &Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationUtilsBlueprintLibrary), 2713024216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_4266980102(TEXT("/Script/AutomationUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
