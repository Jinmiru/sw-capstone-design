// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DDynamic() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTexture2DDynamic
void UTexture2DDynamic::StaticRegisterNativesUTexture2DDynamic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DDynamic);
UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister()
{
	return UTexture2DDynamic::StaticClass();
}
struct Z_Construct_UClass_UTexture2DDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// note : UTexture2DDynamic derives directly from UTexture not from UTexture2D\n// UTexture2DDynamic is a base for textures that don't have a TextureSource\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2DDynamic.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
		{ "ToolTip", "note : UTexture2DDynamic derives directly from UTexture not from UTexture2D\nUTexture2DDynamic is a base for textures that don't have a TextureSource" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Comment", "/** The format of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2DDynamic.h" },
		{ "ToolTip", "The format of the texture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTexture2DDynamic, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2609309733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DDynamic_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTexture2DDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DDynamic_Statics::ClassParams = {
	&UTexture2DDynamic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_UTexture2DDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTexture2DDynamic()
{
	if (!Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton, Z_Construct_UClass_UTexture2DDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTexture2DDynamic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTexture2DDynamic>()
{
	return UTexture2DDynamic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DDynamic);
UTexture2DDynamic::~UTexture2DDynamic() {}
// End Class UTexture2DDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DDynamic, UTexture2DDynamic::StaticClass, TEXT("UTexture2DDynamic"), &Z_Registration_Info_UClass_UTexture2DDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DDynamic), 3669507002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_341775043(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DDynamic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
