// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionMaterialLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialFunctionMaterialLayer
void UMaterialFunctionMaterialLayer::StaticRegisterNativesUMaterialFunctionMaterialLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayer);
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister()
{
	return UMaterialFunctionMaterialLayer::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized Material Function that acts as a layer\n */" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
		{ "ToolTip", "Specialized Material Function that acts as a layer" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::ClassParams = {
	&UMaterialFunctionMaterialLayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayer>()
{
	return UMaterialFunctionMaterialLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayer);
UMaterialFunctionMaterialLayer::~UMaterialFunctionMaterialLayer() {}
// End Class UMaterialFunctionMaterialLayer

// Begin Class UMaterialFunctionMaterialLayerInstance
void UMaterialFunctionMaterialLayerInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerInstance);
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister()
{
	return UMaterialFunctionMaterialLayerInstance::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Specialized Material Function Instance that instances a layer\n*/" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
		{ "ToolTip", "Specialized Material Function Instance that instances a layer" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::ClassParams = {
	&UMaterialFunctionMaterialLayerInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerInstance>()
{
	return UMaterialFunctionMaterialLayerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerInstance);
UMaterialFunctionMaterialLayerInstance::~UMaterialFunctionMaterialLayerInstance() {}
// End Class UMaterialFunctionMaterialLayerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayer, UMaterialFunctionMaterialLayer::StaticClass, TEXT("UMaterialFunctionMaterialLayer"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayer), 3949405967U) },
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance, UMaterialFunctionMaterialLayerInstance::StaticClass, TEXT("UMaterialFunctionMaterialLayerInstance"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerInstance), 1285484034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayer_h_2494819620(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
