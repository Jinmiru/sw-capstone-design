// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSetsFunctionDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsFunctionDirector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister();
// End Cross Module References

// Begin Class ULevelVariantSetsFunctionDirector
void ULevelVariantSetsFunctionDirector::StaticRegisterNativesULevelVariantSetsFunctionDirector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSetsFunctionDirector);
UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister()
{
	return ULevelVariantSetsFunctionDirector::StaticClass();
}
struct Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSetsFunctionDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsFunctionDirector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSetsFunctionDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams = {
	&ULevelVariantSetsFunctionDirector::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector()
{
	if (!Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton, Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSetsFunctionDirector>()
{
	return ULevelVariantSetsFunctionDirector::StaticClass();
}
ULevelVariantSetsFunctionDirector::ULevelVariantSetsFunctionDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSetsFunctionDirector);
// End Class ULevelVariantSetsFunctionDirector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSetsFunctionDirector, ULevelVariantSetsFunctionDirector::StaticClass, TEXT("ULevelVariantSetsFunctionDirector"), &Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSetsFunctionDirector), 3256854892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_3030789869(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
