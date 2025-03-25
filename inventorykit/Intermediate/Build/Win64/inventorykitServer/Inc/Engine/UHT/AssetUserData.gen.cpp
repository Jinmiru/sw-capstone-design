// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetUserData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAssetUserData
void UAssetUserData::StaticRegisterNativesUAssetUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetUserData);
UClass* Z_Construct_UClass_UAssetUserData_NoRegister()
{
	return UAssetUserData::StaticClass();
}
struct Z_Construct_UClass_UAssetUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that can be subclassed to store custom data on Unreal asset objects.\n */" },
		{ "IncludePath", "Engine/AssetUserData.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetUserData.h" },
		{ "ToolTip", "Object that can be subclassed to store custom data on Unreal asset objects." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetUserData_Statics::ClassParams = {
	&UAssetUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetUserData()
{
	if (!Z_Registration_Info_UClass_UAssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetUserData.OuterSingleton, Z_Construct_UClass_UAssetUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetUserData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAssetUserData>()
{
	return UAssetUserData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetUserData);
UAssetUserData::~UAssetUserData() {}
// End Class UAssetUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetUserData, UAssetUserData::StaticClass, TEXT("UAssetUserData"), &Z_Registration_Info_UClass_UAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetUserData), 3206903732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_1012717134(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
