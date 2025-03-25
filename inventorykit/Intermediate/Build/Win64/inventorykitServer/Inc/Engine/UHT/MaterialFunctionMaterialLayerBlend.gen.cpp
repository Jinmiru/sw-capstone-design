// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionMaterialLayerBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerBlend() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialFunctionMaterialLayerBlend
void UMaterialFunctionMaterialLayerBlend::StaticRegisterNativesUMaterialFunctionMaterialLayerBlend()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlend);
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister()
{
	return UMaterialFunctionMaterialLayerBlend::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized Material Function that acts as a blend\n */" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function that acts as a blend" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams = {
	&UMaterialFunctionMaterialLayerBlend::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlend>()
{
	return UMaterialFunctionMaterialLayerBlend::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlend);
UMaterialFunctionMaterialLayerBlend::~UMaterialFunctionMaterialLayerBlend() {}
// End Class UMaterialFunctionMaterialLayerBlend

// Begin Class UMaterialFunctionMaterialLayerBlendInstance
void UMaterialFunctionMaterialLayerBlendInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlendInstance);
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister()
{
	return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Specialized Material Function Instance that instances a blend\n*/" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function Instance that instances a blend" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams = {
	&UMaterialFunctionMaterialLayerBlendInstance::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendInstance>()
{
	return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendInstance);
UMaterialFunctionMaterialLayerBlendInstance::~UMaterialFunctionMaterialLayerBlendInstance() {}
// End Class UMaterialFunctionMaterialLayerBlendInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend, UMaterialFunctionMaterialLayerBlend::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlend"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlend), 2219360324U) },
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance, UMaterialFunctionMaterialLayerBlendInstance::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlendInstance"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlendInstance), 3743189672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_3969183353(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
