// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/FileMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaSource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UFileMediaSource Function SetFilePath
struct Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics
{
	struct FileMediaSource_eventSetFilePath_Parms
	{
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|FileMediaSource" },
		{ "Comment", "/**\n\x09 * Set the path to the media file that this source represents.\n\x09 *\n\x09 * Automatically converts full paths to media sources that reside in the\n\x09 * Engine's or project's /Content/Movies directory into relative paths.\n\x09 *\n\x09 * @param Path The path to set.\n\x09 * @see FilePath, GetFilePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "Set the path to the media file that this source represents.\n\nAutomatically converts full paths to media sources that reside in the\nEngine's or project's /Content/Movies directory into relative paths.\n\n@param Path The path to set.\n@see FilePath, GetFilePath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileMediaSource_eventSetFilePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileMediaSource, nullptr, "SetFilePath", nullptr, nullptr, Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FileMediaSource_eventSetFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FileMediaSource_eventSetFilePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileMediaSource_SetFilePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileMediaSource::execSetFilePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilePath(Z_Param_Path);
	P_NATIVE_END;
}
// End Class UFileMediaSource Function SetFilePath

// Begin Class UFileMediaSource
void UFileMediaSource::StaticRegisterNativesUFileMediaSource()
{
	UClass* Class = UFileMediaSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFilePath", &UFileMediaSource::execSetFilePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileMediaSource);
UClass* Z_Construct_UClass_UFileMediaSource_NoRegister()
{
	return UFileMediaSource::StaticClass();
}
struct Z_Construct_UClass_UFileMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FileMediaSource.h" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/**\n\x09 * The path to the media file to be played.\n\x09 *\n\x09 * @see SetFilePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "The path to the media file to be played.\n\n@see SetFilePath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrecacheFile_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** Load entire media file into memory and play from there (if possible). */" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "Load entire media file into memory and play from there (if possible)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_PrecacheFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrecacheFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileMediaSource_SetFilePath, "SetFilePath" }, // 2468570656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFileMediaSource, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_SetBit(void* Obj)
{
	((UFileMediaSource*)Obj)->PrecacheFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile = { "PrecacheFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFileMediaSource), &Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrecacheFile_MetaData), NewProp_PrecacheFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFileMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaSource_Statics::ClassParams = {
	&UFileMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFileMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileMediaSource()
{
	if (!Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton, Z_Construct_UClass_UFileMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UFileMediaSource>()
{
	return UFileMediaSource::StaticClass();
}
UFileMediaSource::UFileMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaSource);
UFileMediaSource::~UFileMediaSource() {}
// End Class UFileMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileMediaSource, UFileMediaSource::StaticClass, TEXT("UFileMediaSource"), &Z_Registration_Info_UClass_UFileMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileMediaSource), 1510324463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_2589139984(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_FileMediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
