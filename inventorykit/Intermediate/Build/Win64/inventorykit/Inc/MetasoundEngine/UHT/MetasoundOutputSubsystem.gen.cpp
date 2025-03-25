// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundOutputSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundOutputSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundOutputSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundOutputSubsystem_NoRegister();
METASOUNDENGINE_API UFunction* Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Class UMetaSoundOutputSubsystem Function WatchOutput
struct Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics
{
	struct MetaSoundOutputSubsystem_eventWatchOutput_Parms
	{
		UAudioComponent* AudioComponent;
		FName OutputName;
		FScriptDelegate OnOutputValueChanged;
		FName AnalyzerName;
		FName AnalyzerOutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "MetaSoundOutput" },
		{ "Comment", "/**\n\x09 * Watch an output on a Metasound playing on a given audio component.\n\x09 *\n\x09 * @param AudioComponent - The audio component\n\x09 * @param OutputName - The user-specified name of the output in the Metasound\n\x09 * @param OnOutputValueChanged - The event to fire when the output's value changes\n\x09 * @param AnalyzerName - (optional) The name of the analyzer to use on the output, defaults to a passthrough\n\x09 * @param AnalyzerOutputName - (optional) The name of the output on the analyzer to watch, defaults to the passthrough output\n\x09 * @returns true if the watch setup succeeded, false otherwise\n\x09 */" },
		{ "CPP_Default_AnalyzerName", "None" },
		{ "CPP_Default_AnalyzerOutputName", "None" },
		{ "ModuleRelativePath", "Public/MetasoundOutputSubsystem.h" },
		{ "ToolTip", "Watch an output on a Metasound playing on a given audio component.\n\n@param AudioComponent - The audio component\n@param OutputName - The user-specified name of the output in the Metasound\n@param OnOutputValueChanged - The event to fire when the output's value changes\n@param AnalyzerName - (optional) The name of the analyzer to use on the output, defaults to a passthrough\n@param AnalyzerOutputName - (optional) The name of the output on the analyzer to watch, defaults to the passthrough output\n@returns true if the watch setup succeeded, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOutputValueChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnOutputValueChanged;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnalyzerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnalyzerOutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundOutputSubsystem_eventWatchOutput_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundOutputSubsystem_eventWatchOutput_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_OnOutputValueChanged = { "OnOutputValueChanged", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundOutputSubsystem_eventWatchOutput_Parms, OnOutputValueChanged), Z_Construct_UDelegateFunction_MetasoundEngine_OnMetasoundOutputValueChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOutputValueChanged_MetaData), NewProp_OnOutputValueChanged_MetaData) }; // 2435507930
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AnalyzerName = { "AnalyzerName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundOutputSubsystem_eventWatchOutput_Parms, AnalyzerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AnalyzerOutputName = { "AnalyzerOutputName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundOutputSubsystem_eventWatchOutput_Parms, AnalyzerOutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MetaSoundOutputSubsystem_eventWatchOutput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MetaSoundOutputSubsystem_eventWatchOutput_Parms), &Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_OnOutputValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AnalyzerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_AnalyzerOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundOutputSubsystem, nullptr, "WatchOutput", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::MetaSoundOutputSubsystem_eventWatchOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::MetaSoundOutputSubsystem_eventWatchOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundOutputSubsystem::execWatchOutput)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnOutputValueChanged);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnalyzerName);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnalyzerOutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WatchOutput(Z_Param_AudioComponent,Z_Param_OutputName,FOnMetasoundOutputValueChanged(Z_Param_Out_OnOutputValueChanged),Z_Param_AnalyzerName,Z_Param_AnalyzerOutputName);
	P_NATIVE_END;
}
// End Class UMetaSoundOutputSubsystem Function WatchOutput

// Begin Class UMetaSoundOutputSubsystem
void UMetaSoundOutputSubsystem::StaticRegisterNativesUMetaSoundOutputSubsystem()
{
	UClass* Class = UMetaSoundOutputSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WatchOutput", &UMetaSoundOutputSubsystem::execWatchOutput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundOutputSubsystem);
UClass* Z_Construct_UClass_UMetaSoundOutputSubsystem_NoRegister()
{
	return UMetaSoundOutputSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to a playing Metasound generator's outputs\n */" },
		{ "IncludePath", "MetasoundOutputSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundOutputSubsystem.h" },
		{ "ToolTip", "Provides access to a playing Metasound generator's outputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundOutputSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedGenerators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedGenerators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundOutputSubsystem_WatchOutput, "WatchOutput" }, // 1412786971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundOutputSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::NewProp_TrackedGenerators_Inner = { "TrackedGenerators", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::NewProp_TrackedGenerators = { "TrackedGenerators", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundOutputSubsystem, TrackedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedGenerators_MetaData), NewProp_TrackedGenerators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::NewProp_TrackedGenerators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::NewProp_TrackedGenerators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::ClassParams = {
	&UMetaSoundOutputSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundOutputSubsystem()
{
	if (!Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundOutputSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundOutputSubsystem.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundOutputSubsystem>()
{
	return UMetaSoundOutputSubsystem::StaticClass();
}
UMetaSoundOutputSubsystem::UMetaSoundOutputSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundOutputSubsystem);
// End Class UMetaSoundOutputSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundOutputSubsystem, UMetaSoundOutputSubsystem::StaticClass, TEXT("UMetaSoundOutputSubsystem"), &Z_Registration_Info_UClass_UMetaSoundOutputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundOutputSubsystem), 3943605902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_1445944248(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOutputSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
