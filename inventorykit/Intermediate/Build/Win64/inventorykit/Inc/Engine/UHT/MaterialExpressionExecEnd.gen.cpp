// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionExecEnd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionExecEnd() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionExecEnd
void UMaterialExpressionExecEnd::StaticRegisterNativesUMaterialExpressionExecEnd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionExecEnd);
UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister()
{
	return UMaterialExpressionExecEnd::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionExecEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionExecEnd.h" },
		{ "MaterialControlFlow", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionExecEnd.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionExecEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::ClassParams = {
	&UMaterialExpressionExecEnd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionExecEnd()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionExecEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionExecEnd.OuterSingleton, Z_Construct_UClass_UMaterialExpressionExecEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionExecEnd.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionExecEnd>()
{
	return UMaterialExpressionExecEnd::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionExecEnd);
UMaterialExpressionExecEnd::~UMaterialExpressionExecEnd() {}
// End Class UMaterialExpressionExecEnd

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecEnd_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionExecEnd, UMaterialExpressionExecEnd::StaticClass, TEXT("UMaterialExpressionExecEnd"), &Z_Registration_Info_UClass_UMaterialExpressionExecEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionExecEnd), 3611876983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecEnd_h_3849098126(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecEnd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExecEnd_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
