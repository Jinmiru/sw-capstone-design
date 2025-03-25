// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompress_BitwiseCompressOnly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCompress_BitwiseCompressOnly
void UAnimCompress_BitwiseCompressOnly::StaticRegisterNativesUAnimCompress_BitwiseCompressOnly()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_BitwiseCompressOnly);
UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister()
{
	return UAnimCompress_BitwiseCompressOnly::StaticClass();
}
struct Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_BitwiseCompressOnly.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_BitwiseCompressOnly.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_BitwiseCompressOnly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCompress,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams = {
	&UAnimCompress_BitwiseCompressOnly::StaticClass,
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
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly()
{
	if (!Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton, Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompress_BitwiseCompressOnly>()
{
	return UAnimCompress_BitwiseCompressOnly::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_BitwiseCompressOnly);
UAnimCompress_BitwiseCompressOnly::~UAnimCompress_BitwiseCompressOnly() {}
// End Class UAnimCompress_BitwiseCompressOnly

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly, UAnimCompress_BitwiseCompressOnly::StaticClass, TEXT("UAnimCompress_BitwiseCompressOnly"), &Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_BitwiseCompressOnly), 461333571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_1673149201(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
