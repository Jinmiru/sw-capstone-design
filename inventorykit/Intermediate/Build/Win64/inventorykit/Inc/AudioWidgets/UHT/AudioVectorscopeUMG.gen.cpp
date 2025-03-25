// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioVectorscopeUMG.h"
#include "AudioWidgets/Public/AudioVectorscopePanelStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVectorscopeUMG() {}

// Begin Cross Module References
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVectorscope();
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVectorscope_NoRegister();
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType();
AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature();
AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Delegate FGetVectorscopeAudioSamples
struct Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics
{
	struct AudioVectorscope_eventGetVectorscopeAudioSamples_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioVectorscope_eventGetVectorscopeAudioSamples_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioVectorscope, nullptr, "GetVectorscopeAudioSamples__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::AudioVectorscope_eventGetVectorscopeAudioSamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::AudioVectorscope_eventGetVectorscopeAudioSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
TArray<float> UAudioVectorscope::FGetVectorscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetVectorscopeAudioSamples)
{
	struct AudioVectorscope_eventGetVectorscopeAudioSamples_Parms
	{
		TArray<float> ReturnValue;
	};
	AudioVectorscope_eventGetVectorscopeAudioSamples_Parms Parms;
	GetVectorscopeAudioSamples.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetVectorscopeAudioSamples

// Begin Class UAudioVectorscope Function StartProcessing
struct Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Starts the vectorscope processing. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "Starts the vectorscope processing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioVectorscope, nullptr, "StartProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioVectorscope_StartProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioVectorscope::execStartProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartProcessing();
	P_NATIVE_END;
}
// End Class UAudioVectorscope Function StartProcessing

// Begin Class UAudioVectorscope Function StopProcessing
struct Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Stops the vectorscope processing. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "Stops the vectorscope processing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioVectorscope, nullptr, "StopProcessing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioVectorscope_StopProcessing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioVectorscope::execStopProcessing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopProcessing();
	P_NATIVE_END;
}
// End Class UAudioVectorscope Function StopProcessing

// Begin Class UAudioVectorscope
void UAudioVectorscope::StaticRegisterNativesUAudioVectorscope()
{
	UClass* Class = UAudioVectorscope::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartProcessing", &UAudioVectorscope::execStartProcessing },
		{ "StopProcessing", &UAudioVectorscope::execStopProcessing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioVectorscope);
UClass* Z_Construct_UClass_UAudioVectorscope_NoRegister()
{
	return UAudioVectorscope::StaticClass();
}
struct Z_Construct_UClass_UAudioVectorscope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A vectorscope UMG widget.\n *\n * Supports displaying waveforms in 2D (Left channel X axis, Right channel Y axis) from incoming audio samples.\n * \n */" },
		{ "IncludePath", "AudioVectorscopeUMG.h" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "A vectorscope UMG widget.\n\nSupports displaying waveforms in 2D (Left channel X axis, Right channel Y axis) from incoming audio samples." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorscopeStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The vectorscope panel style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "The vectorscope panel style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "Comment", "/** The audio bus used to obtain audio samples for the vectorscope */" },
		{ "DesignerRebuild", "True" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "The audio bus used to obtain audio samples for the vectorscope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "Comment", "/** Show/Hide the vectorscope grid. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "Show/Hide the vectorscope grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDivisions_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of grid divisions. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "The number of grid divisions." },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPersistenceMs_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** For how long the audio samples should persist in the screen (in milliseconds). */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "For how long the audio samples should persist in the screen (in milliseconds)." },
		{ "UIMax", "100.000000" },
		{ "UIMin", "10.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The scale for the displayed audio samples. */" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "The scale for the displayed audio samples." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelLayoutType_MetaData[] = {
		{ "Category", "Vectorscope Values" },
		{ "Comment", "/** Show/Hide advanced panel layout. */" },
		{ "DesignerRebuild", "True" },
		{ "ModuleRelativePath", "Public/AudioVectorscopeUMG.h" },
		{ "ToolTip", "Show/Hide advanced panel layout." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorscopeStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static void NewProp_bShowGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridDivisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayPersistenceMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PanelLayoutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PanelLayoutType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature, "GetVectorscopeAudioSamples__DelegateSignature" }, // 4292643220
		{ &Z_Construct_UFunction_UAudioVectorscope_StartProcessing, "StartProcessing" }, // 3502399807
		{ &Z_Construct_UFunction_UAudioVectorscope_StopProcessing, "StopProcessing" }, // 2106863698
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioVectorscope>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_VectorscopeStyle = { "VectorscopeStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, VectorscopeStyle), Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorscopeStyle_MetaData), NewProp_VectorscopeStyle_MetaData) }; // 320699454
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
void Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_bShowGrid_SetBit(void* Obj)
{
	((UAudioVectorscope*)Obj)->bShowGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAudioVectorscope), &Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGrid_MetaData), NewProp_bShowGrid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_GridDivisions = { "GridDivisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, GridDivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDivisions_MetaData), NewProp_GridDivisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_DisplayPersistenceMs = { "DisplayPersistenceMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, DisplayPersistenceMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPersistenceMs_MetaData), NewProp_DisplayPersistenceMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_PanelLayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_PanelLayoutType = { "PanelLayoutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioVectorscope, PanelLayoutType), Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelLayoutType_MetaData), NewProp_PanelLayoutType_MetaData) }; // 227856546
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioVectorscope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_VectorscopeStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_bShowGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_GridDivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_DisplayPersistenceMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_PanelLayoutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_PanelLayoutType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVectorscope_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioVectorscope_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVectorscope_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioVectorscope_Statics::ClassParams = {
	&UAudioVectorscope::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioVectorscope_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVectorscope_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVectorscope_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioVectorscope_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioVectorscope()
{
	if (!Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton, Z_Construct_UClass_UAudioVectorscope_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton;
}
template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioVectorscope>()
{
	return UAudioVectorscope::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioVectorscope);
UAudioVectorscope::~UAudioVectorscope() {}
// End Class UAudioVectorscope

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioVectorscope, UAudioVectorscope::StaticClass, TEXT("UAudioVectorscope"), &Z_Registration_Info_UClass_UAudioVectorscope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioVectorscope), 2536380013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_2829619672(TEXT("/Script/AudioWidgets"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
