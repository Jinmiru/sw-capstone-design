// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Audio/AudioPanelWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPanelWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface();
ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UAudioPanelWidgetInterface Function GetEditorName
struct AudioPanelWidgetInterface_eventGetEditorName_Parms
{
	FText ReturnValue;
};
FText IAudioPanelWidgetInterface::GetEditorName()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEditorName instead.");
	AudioPanelWidgetInterface_eventGetEditorName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UAudioPanelWidgetInterface_GetEditorName = FName(TEXT("GetEditorName"));
FText IAudioPanelWidgetInterface::Execute_GetEditorName(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass()));
	AudioPanelWidgetInterface_eventGetEditorName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAudioPanelWidgetInterface_GetEditorName);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioPanelWidgetInterface_eventGetEditorName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPanelWidgetInterface, nullptr, "GetEditorName", nullptr, nullptr, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers), sizeof(AudioPanelWidgetInterface_eventGetEditorName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams) };
static_assert(sizeof(AudioPanelWidgetInterface_eventGetEditorName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UAudioPanelWidgetInterface Function GetEditorName

// Begin Interface UAudioPanelWidgetInterface Function GetIconBrushName
struct AudioPanelWidgetInterface_eventGetIconBrushName_Parms
{
	FName ReturnValue;
};
FName IAudioPanelWidgetInterface::GetIconBrushName()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIconBrushName instead.");
	AudioPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UAudioPanelWidgetInterface_GetIconBrushName = FName(TEXT("GetIconBrushName"));
FName IAudioPanelWidgetInterface::Execute_GetIconBrushName(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass()));
	AudioPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAudioPanelWidgetInterface_GetIconBrushName);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioPanelWidgetInterface_eventGetIconBrushName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPanelWidgetInterface, nullptr, "GetIconBrushName", nullptr, nullptr, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers), sizeof(AudioPanelWidgetInterface_eventGetIconBrushName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams) };
static_assert(sizeof(AudioPanelWidgetInterface_eventGetIconBrushName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UAudioPanelWidgetInterface Function GetIconBrushName

// Begin Interface UAudioPanelWidgetInterface
void UAudioPanelWidgetInterface::StaticRegisterNativesUAudioPanelWidgetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPanelWidgetInterface);
UClass* Z_Construct_UClass_UAudioPanelWidgetInterface_NoRegister()
{
	return UAudioPanelWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UAudioPanelWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName, "GetEditorName" }, // 4258622704
		{ &Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName, "GetIconBrushName" }, // 3248641189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioPanelWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::ClassParams = {
	&UAudioPanelWidgetInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioPanelWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton, Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAudioPanelWidgetInterface>()
{
	return UAudioPanelWidgetInterface::StaticClass();
}
UAudioPanelWidgetInterface::UAudioPanelWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPanelWidgetInterface);
UAudioPanelWidgetInterface::~UAudioPanelWidgetInterface() {}
// End Interface UAudioPanelWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPanelWidgetInterface, UAudioPanelWidgetInterface::StaticClass, TEXT("UAudioPanelWidgetInterface"), &Z_Registration_Info_UClass_UAudioPanelWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPanelWidgetInterface), 2533636488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_2148001160(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
