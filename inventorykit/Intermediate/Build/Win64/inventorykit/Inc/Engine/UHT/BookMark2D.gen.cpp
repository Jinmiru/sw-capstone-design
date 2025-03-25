// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BookMark2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBookMark2D();
ENGINE_API UClass* Z_Construct_UClass_UBookMark2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBookmark2DJumpToSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings;
class UScriptStruct* FBookmark2DJumpToSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Bookmark2DJumpToSettings"));
	}
	return Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmark2DJumpToSettings>()
{
	return FBookmark2DJumpToSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmark2DJumpToSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"Bookmark2DJumpToSettings",
	nullptr,
	0,
	sizeof(FBookmark2DJumpToSettings),
	alignof(FBookmark2DJumpToSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings()
{
	if (!Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton, Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton;
}
// End ScriptStruct FBookmark2DJumpToSettings

// Begin Class UBookMark2D
void UBookMark2D::StaticRegisterNativesUBookMark2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBookMark2D);
UClass* Z_Construct_UClass_UBookMark2D_NoRegister()
{
	return UBookMark2D::StaticClass();
}
struct Z_Construct_UClass_UBookMark2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple class to store 2D camera information.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/BookMark2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Simple class to store 2D camera information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Zoom2D_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "Comment", "/** Zoom of the camera */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Zoom of the camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "Comment", "/** Location of the camera */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Location of the camera" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookMark2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D = { "Zoom2D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBookMark2D, Zoom2D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Zoom2D_MetaData), NewProp_Zoom2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBookMark2D, Location), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBookMark2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBookMark2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBookMark2D_Statics::ClassParams = {
	&UBookMark2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBookMark2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBookMark2D()
{
	if (!Z_Registration_Info_UClass_UBookMark2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBookMark2D.OuterSingleton, Z_Construct_UClass_UBookMark2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBookMark2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBookMark2D>()
{
	return UBookMark2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark2D);
UBookMark2D::~UBookMark2D() {}
// End Class UBookMark2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBookmark2DJumpToSettings::StaticStruct, Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::NewStructOps, TEXT("Bookmark2DJumpToSettings"), &Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBookmark2DJumpToSettings), 171578594U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBookMark2D, UBookMark2D::StaticClass, TEXT("UBookMark2D"), &Z_Registration_Info_UClass_UBookMark2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBookMark2D), 3965785771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_2673534203(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
