// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompress_LeastDestructive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCompress_LeastDestructive
void UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_LeastDestructive);
UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister()
{
	return UAnimCompress_LeastDestructive::StaticClass();
}
struct Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_LeastDestructive.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_LeastDestructive.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_LeastDestructive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams = {
	&UAnimCompress_LeastDestructive::StaticClass,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive()
{
	if (!Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton, Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompress_LeastDestructive>()
{
	return UAnimCompress_LeastDestructive::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_LeastDestructive);
UAnimCompress_LeastDestructive::~UAnimCompress_LeastDestructive() {}
// End Class UAnimCompress_LeastDestructive

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_LeastDestructive, UAnimCompress_LeastDestructive::StaticClass, TEXT("UAnimCompress_LeastDestructive"), &Z_Registration_Info_UClass_UAnimCompress_LeastDestructive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_LeastDestructive), 3317508507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_3120481414(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
