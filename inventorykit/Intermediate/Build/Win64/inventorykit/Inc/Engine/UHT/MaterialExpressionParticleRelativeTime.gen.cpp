// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleRelativeTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleRelativeTime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleRelativeTime
void UMaterialExpressionParticleRelativeTime::StaticRegisterNativesUMaterialExpressionParticleRelativeTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleRelativeTime);
UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_NoRegister()
{
	return UMaterialExpressionParticleRelativeTime::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleRelativeTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleRelativeTime.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleRelativeTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::ClassParams = {
	&UMaterialExpressionParticleRelativeTime::StaticClass,
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
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleRelativeTime()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleRelativeTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleRelativeTime>()
{
	return UMaterialExpressionParticleRelativeTime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleRelativeTime);
UMaterialExpressionParticleRelativeTime::~UMaterialExpressionParticleRelativeTime() {}
// End Class UMaterialExpressionParticleRelativeTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleRelativeTime, UMaterialExpressionParticleRelativeTime::StaticClass, TEXT("UMaterialExpressionParticleRelativeTime"), &Z_Registration_Info_UClass_UMaterialExpressionParticleRelativeTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleRelativeTime), 2037621896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_946070083(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRelativeTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
