// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPreSkinnedPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreSkinnedPosition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPreSkinnedPosition
void UMaterialExpressionPreSkinnedPosition::StaticRegisterNativesUMaterialExpressionPreSkinnedPosition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreSkinnedPosition);
UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister()
{
	return UMaterialExpressionPreSkinnedPosition::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreSkinnedPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreSkinnedPosition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreSkinnedPosition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::ClassParams = {
	&UMaterialExpressionPreSkinnedPosition::StaticClass,
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
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreSkinnedPosition>()
{
	return UMaterialExpressionPreSkinnedPosition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreSkinnedPosition);
UMaterialExpressionPreSkinnedPosition::~UMaterialExpressionPreSkinnedPosition() {}
// End Class UMaterialExpressionPreSkinnedPosition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition, UMaterialExpressionPreSkinnedPosition::StaticClass, TEXT("UMaterialExpressionPreSkinnedPosition"), &Z_Registration_Info_UClass_UMaterialExpressionPreSkinnedPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreSkinnedPosition), 1863784315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_3596510522(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreSkinnedPosition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
