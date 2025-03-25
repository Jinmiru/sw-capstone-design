// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Audio/SoundEffectPresetWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectPresetWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface USoundEffectPresetWidgetInterface Function GetClass
struct SoundEffectPresetWidgetInterface_eventGetClass_Parms
{
	TSubclassOf<USoundEffectPreset> ReturnValue;

	/** Constructor, initializes return property only **/
	SoundEffectPresetWidgetInterface_eventGetClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSubclassOf<USoundEffectPreset> ISoundEffectPresetWidgetInterface::GetClass()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClass instead.");
	SoundEffectPresetWidgetInterface_eventGetClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USoundEffectPresetWidgetInterface_GetClass = FName(TEXT("GetClass"));
TSubclassOf<USoundEffectPreset> ISoundEffectPresetWidgetInterface::Execute_GetClass(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
	SoundEffectPresetWidgetInterface_eventGetClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_GetClass);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Returns the class of Preset the widget supports\n" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Returns the class of Preset the widget supports" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "GetClass", nullptr, nullptr, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers), sizeof(SoundEffectPresetWidgetInterface_eventGetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(SoundEffectPresetWidgetInterface_eventGetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface USoundEffectPresetWidgetInterface Function GetClass

// Begin Interface USoundEffectPresetWidgetInterface Function OnConstructed
struct SoundEffectPresetWidgetInterface_eventOnConstructed_Parms
{
	USoundEffectPreset* Preset;
};
void ISoundEffectPresetWidgetInterface::OnConstructed(USoundEffectPreset* Preset)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.");
}
static FName NAME_USoundEffectPresetWidgetInterface_OnConstructed = FName(TEXT("OnConstructed"));
void ISoundEffectPresetWidgetInterface::Execute_OnConstructed(UObject* O, USoundEffectPreset* Preset)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
	SoundEffectPresetWidgetInterface_eventOnConstructed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_OnConstructed);
	if (Func)
	{
		Parms.Preset=Preset;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset widget is constructed\n" },
		{ "DisplayName", "On SoundEffectPreset Widget Constructed" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset widget is constructed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnConstructed_Parms, Preset), Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "OnConstructed", nullptr, nullptr, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers), sizeof(SoundEffectPresetWidgetInterface_eventOnConstructed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams) };
static_assert(sizeof(SoundEffectPresetWidgetInterface_eventOnConstructed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface USoundEffectPresetWidgetInterface Function OnConstructed

// Begin Interface USoundEffectPresetWidgetInterface Function OnPropertyChanged
struct SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms
{
	USoundEffectPreset* Preset;
	FName PropertyName;
};
void ISoundEffectPresetWidgetInterface::OnPropertyChanged(USoundEffectPreset* Preset, FName PropertyName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPropertyChanged instead.");
}
static FName NAME_USoundEffectPresetWidgetInterface_OnPropertyChanged = FName(TEXT("OnPropertyChanged"));
void ISoundEffectPresetWidgetInterface::Execute_OnPropertyChanged(UObject* O, USoundEffectPreset* Preset, FName PropertyName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
	SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_OnPropertyChanged);
	if (Func)
	{
		Parms.Preset=Preset;
		Parms.PropertyName=PropertyName;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset object is changed\n" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset object is changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, Preset), Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "OnPropertyChanged", nullptr, nullptr, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers), sizeof(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface USoundEffectPresetWidgetInterface Function OnPropertyChanged

// Begin Interface USoundEffectPresetWidgetInterface
void USoundEffectPresetWidgetInterface::StaticRegisterNativesUSoundEffectPresetWidgetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectPresetWidgetInterface);
UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface_NoRegister()
{
	return USoundEffectPresetWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass, "GetClass" }, // 363591823
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed, "OnConstructed" }, // 3627219110
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged, "OnPropertyChanged" }, // 2163411129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISoundEffectPresetWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioPanelWidgetInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::ClassParams = {
	&USoundEffectPresetWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface()
{
	if (!Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton, Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundEffectPresetWidgetInterface>()
{
	return USoundEffectPresetWidgetInterface::StaticClass();
}
USoundEffectPresetWidgetInterface::USoundEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectPresetWidgetInterface);
USoundEffectPresetWidgetInterface::~USoundEffectPresetWidgetInterface() {}
// End Interface USoundEffectPresetWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectPresetWidgetInterface, USoundEffectPresetWidgetInterface::StaticClass, TEXT("USoundEffectPresetWidgetInterface"), &Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectPresetWidgetInterface), 83428137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_3433404107(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
