// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UThumbnailInfo
void UThumbnailInfo::StaticRegisterNativesUThumbnailInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailInfo);
UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister()
{
	return UThumbnailInfo::StaticClass();
}
struct Z_Construct_UClass_UThumbnailInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditorFramework/ThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/EditorFramework/ThumbnailInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThumbnailInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams = {
	&UThumbnailInfo::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThumbnailInfo()
{
	if (!Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton, Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UThumbnailInfo>()
{
	return UThumbnailInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailInfo);
UThumbnailInfo::~UThumbnailInfo() {}
// End Class UThumbnailInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailInfo, UThumbnailInfo::StaticClass, TEXT("UThumbnailInfo"), &Z_Registration_Info_UClass_UThumbnailInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailInfo), 2015619078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_2826345483(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
