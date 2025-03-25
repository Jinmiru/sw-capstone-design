// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionCameraVectorWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCameraVectorWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraVectorWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraVectorWS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionCameraVectorWS
void UMaterialExpressionCameraVectorWS::StaticRegisterNativesUMaterialExpressionCameraVectorWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCameraVectorWS);
UClass* Z_Construct_UClass_UMaterialExpressionCameraVectorWS_NoRegister()
{
	return UMaterialExpressionCameraVectorWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCameraVectorWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCameraVectorWS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCameraVectorWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::ClassParams = {
	&UMaterialExpressionCameraVectorWS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCameraVectorWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCameraVectorWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCameraVectorWS>()
{
	return UMaterialExpressionCameraVectorWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCameraVectorWS);
UMaterialExpressionCameraVectorWS::~UMaterialExpressionCameraVectorWS() {}
// End Class UMaterialExpressionCameraVectorWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCameraVectorWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCameraVectorWS, UMaterialExpressionCameraVectorWS::StaticClass, TEXT("UMaterialExpressionCameraVectorWS"), &Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCameraVectorWS), 1780052087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCameraVectorWS_h_2435097497(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCameraVectorWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCameraVectorWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
