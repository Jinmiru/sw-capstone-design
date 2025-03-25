// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/StereoLayerFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UStereoLayerFunctionLibrary Function EnableAutoLoadingSplashScreen
struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics
{
	struct StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
	{
		bool InAutoShowEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "We don't recommend using Auto Show Loading Screen any longer, and it will be removed in a future update." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InAutoShowEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InAutoShowEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit(void* Obj)
{
	((StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->InAutoShowEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled = { "InAutoShowEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "EnableAutoLoadingSplashScreen", nullptr, nullptr, Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen)
{
	P_GET_UBOOL(Z_Param_InAutoShowEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStereoLayerFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_InAutoShowEnabled);
	P_NATIVE_END;
}
// End Class UStereoLayerFunctionLibrary Function EnableAutoLoadingSplashScreen

// Begin Class UStereoLayerFunctionLibrary Function HideSplashScreen
struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Hide the splash screen and return to normal display.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Hide Loading Screen instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Hide the splash screen and return to normal display." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "HideSplashScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execHideSplashScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UStereoLayerFunctionLibrary::HideSplashScreen();
	P_NATIVE_END;
}
// End Class UStereoLayerFunctionLibrary Function HideSplashScreen

// Begin Class UStereoLayerFunctionLibrary Function SetSplashScreen
struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics
{
	struct StereoLayerFunctionLibrary_eventSetSplashScreen_Parms
	{
		UTexture* Texture;
		FVector2D Scale;
		FVector Offset;
		bool bShowLoadingMovie;
		bool bShowOnSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Set splash screen attributes\n\x09*\n\x09* @param Texture\x09\x09\x09(in) A texture to be used for the splash. B8R8G8A8 format.\n\x09* @param Scale\x09\x09\x09\x09(in) Scale multiplier of the splash screen.\n\x09* @param Offset\x09\x09\x09\x09(in) Position in UE Units to offset the Splash Screen by\n\x09* @param ShowLoadingMovie\x09(in) Whether the splash screen presents loading movies.\n\x09*/" },
		{ "CPP_Default_bShowLoadingMovie", "false" },
		{ "CPP_Default_bShowOnSet", "false" },
		{ "CPP_Default_Offset", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Add Loading Screen Splash instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Set splash screen attributes\n\n@param Texture                        (in) A texture to be used for the splash. B8R8G8A8 format.\n@param Scale                          (in) Scale multiplier of the splash screen.\n@param Offset                         (in) Position in UE Units to offset the Splash Screen by\n@param ShowLoadingMovie       (in) Whether the splash screen presents loading movies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bShowLoadingMovie_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingMovie;
	static void NewProp_bShowOnSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit(void* Obj)
{
	((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowLoadingMovie = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie = { "bShowLoadingMovie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit(void* Obj)
{
	((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowOnSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet = { "bShowOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "SetSplashScreen", nullptr, nullptr, Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::StereoLayerFunctionLibrary_eventSetSplashScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execSetSplashScreen)
{
	P_GET_OBJECT(UTexture,Z_Param_Texture);
	P_GET_STRUCT(FVector2D,Z_Param_Scale);
	P_GET_STRUCT(FVector,Z_Param_Offset);
	P_GET_UBOOL(Z_Param_bShowLoadingMovie);
	P_GET_UBOOL(Z_Param_bShowOnSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStereoLayerFunctionLibrary::SetSplashScreen(Z_Param_Texture,Z_Param_Scale,Z_Param_Offset,Z_Param_bShowLoadingMovie,Z_Param_bShowOnSet);
	P_NATIVE_END;
}
// End Class UStereoLayerFunctionLibrary Function SetSplashScreen

// Begin Class UStereoLayerFunctionLibrary Function ShowSplashScreen
struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09* Show the splash screen and override the VR display\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Show Loading Screen instead." },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Show the splash screen and override the VR display" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "ShowSplashScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStereoLayerFunctionLibrary::execShowSplashScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UStereoLayerFunctionLibrary::ShowSplashScreen();
	P_NATIVE_END;
}
// End Class UStereoLayerFunctionLibrary Function ShowSplashScreen

// Begin Class UStereoLayerFunctionLibrary
void UStereoLayerFunctionLibrary::StaticRegisterNativesUStereoLayerFunctionLibrary()
{
	UClass* Class = UStereoLayerFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableAutoLoadingSplashScreen", &UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen },
		{ "HideSplashScreen", &UStereoLayerFunctionLibrary::execHideSplashScreen },
		{ "SetSplashScreen", &UStereoLayerFunctionLibrary::execSetSplashScreen },
		{ "ShowSplashScreen", &UStereoLayerFunctionLibrary::execShowSplashScreen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoLayerFunctionLibrary);
UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister()
{
	return UStereoLayerFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * StereoLayer Extensions Function Library\n */" },
		{ "IncludePath", "Kismet/StereoLayerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "StereoLayer Extensions Function Library" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 1103287435
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen, "HideSplashScreen" }, // 1354091371
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen, "SetSplashScreen" }, // 372968464
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen, "ShowSplashScreen" }, // 2850465984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams = {
	&UStereoLayerFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UStereoLayerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoLayerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStereoLayerFunctionLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStereoLayerFunctionLibrary>()
{
	return UStereoLayerFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerFunctionLibrary);
UStereoLayerFunctionLibrary::~UStereoLayerFunctionLibrary() {}
// End Class UStereoLayerFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStereoLayerFunctionLibrary, UStereoLayerFunctionLibrary::StaticClass, TEXT("UStereoLayerFunctionLibrary"), &Z_Registration_Info_UClass_UStereoLayerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoLayerFunctionLibrary), 150865843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_1196744656(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
