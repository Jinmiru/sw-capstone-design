// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/AsyncTaskDownloadImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskDownloadImage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage();
UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FDownloadImageDelegate
struct Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics
{
	struct _Script_UMG_eventDownloadImageDelegate_Parms
	{
		UTexture2DDynamic* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventDownloadImageDelegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "DownloadImageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::_Script_UMG_eventDownloadImageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::_Script_UMG_eventDownloadImageDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageDelegate, UTexture2DDynamic* Texture)
{
	struct _Script_UMG_eventDownloadImageDelegate_Parms
	{
		UTexture2DDynamic* Texture;
	};
	_Script_UMG_eventDownloadImageDelegate_Parms Parms;
	Parms.Texture=Texture;
	DownloadImageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDownloadImageDelegate

// Begin Class UAsyncTaskDownloadImage Function DownloadImage
struct Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics
{
	struct AsyncTaskDownloadImage_eventDownloadImage_Parms
	{
		FString URL;
		UAsyncTaskDownloadImage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, URL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskDownloadImage, nullptr, "DownloadImage", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::AsyncTaskDownloadImage_eventDownloadImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::AsyncTaskDownloadImage_eventDownloadImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskDownloadImage::execDownloadImage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskDownloadImage**)Z_Param__Result=UAsyncTaskDownloadImage::DownloadImage(Z_Param_URL);
	P_NATIVE_END;
}
// End Class UAsyncTaskDownloadImage Function DownloadImage

// Begin Class UAsyncTaskDownloadImage
void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage()
{
	UClass* Class = UAsyncTaskDownloadImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadImage", &UAsyncTaskDownloadImage::execDownloadImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTaskDownloadImage);
UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister()
{
	return UAsyncTaskDownloadImage::StaticClass();
}
struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AsyncTaskDownloadImage.h" },
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage, "DownloadImage" }, // 2497522045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskDownloadImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnSuccess), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 190238819
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnFail), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 190238819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::ClassParams = {
	&UAsyncTaskDownloadImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTaskDownloadImage()
{
	if (!Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton, Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTaskDownloadImage.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UAsyncTaskDownloadImage>()
{
	return UAsyncTaskDownloadImage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskDownloadImage);
UAsyncTaskDownloadImage::~UAsyncTaskDownloadImage() {}
// End Class UAsyncTaskDownloadImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskDownloadImage, UAsyncTaskDownloadImage::StaticClass, TEXT("UAsyncTaskDownloadImage"), &Z_Registration_Info_UClass_UAsyncTaskDownloadImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskDownloadImage), 2106694471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_2919529850(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
