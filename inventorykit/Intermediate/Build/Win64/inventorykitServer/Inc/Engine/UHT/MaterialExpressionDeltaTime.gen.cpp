// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDeltaTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDeltaTime() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDeltaTime
void UMaterialExpressionDeltaTime::StaticRegisterNativesUMaterialExpressionDeltaTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDeltaTime);
UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister()
{
	return UMaterialExpressionDeltaTime::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDeltaTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDeltaTime.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDeltaTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::ClassParams = {
	&UMaterialExpressionDeltaTime::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDeltaTime>()
{
	return UMaterialExpressionDeltaTime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDeltaTime);
UMaterialExpressionDeltaTime::~UMaterialExpressionDeltaTime() {}
// End Class UMaterialExpressionDeltaTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDeltaTime, UMaterialExpressionDeltaTime::StaticClass, TEXT("UMaterialExpressionDeltaTime"), &Z_Registration_Info_UClass_UMaterialExpressionDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDeltaTime), 4255768603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_352204033(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
