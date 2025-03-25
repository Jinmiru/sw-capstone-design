// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionScreenPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScreenPosition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionScreenPosition
void UMaterialExpressionScreenPosition::StaticRegisterNativesUMaterialExpressionScreenPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionScreenPosition);
UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister()
{
	return UMaterialExpressionScreenPosition::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionScreenPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScreenPosition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionScreenPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::ClassParams = {
	&UMaterialExpressionScreenPosition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionScreenPosition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionScreenPosition>()
{
	return UMaterialExpressionScreenPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScreenPosition);
UMaterialExpressionScreenPosition::~UMaterialExpressionScreenPosition() {}
// End Class UMaterialExpressionScreenPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionScreenPosition, UMaterialExpressionScreenPosition::StaticClass, TEXT("UMaterialExpressionScreenPosition"), &Z_Registration_Info_UClass_UMaterialExpressionScreenPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionScreenPosition), 1900515755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_11854719(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
