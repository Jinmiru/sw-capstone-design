// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/Serialization/IrisObjectReferencePackageMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrisObjectReferencePackageMap() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap();
IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UIrisObjectReferencePackageMap
void UIrisObjectReferencePackageMap::StaticRegisterNativesUIrisObjectReferencePackageMap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIrisObjectReferencePackageMap);
UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister()
{
	return UIrisObjectReferencePackageMap::StaticClass();
}
struct Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom packagemap implementation used to be able to capture UObject* references from external serialization.\n * Any object references written when using this packagemap will be added to the References array and serialized as an index.\n * When reading using this packagemap references will be read as an index and resolved by picking the corresponding entry from the provided array containing the references.\n */" },
		{ "IncludePath", "Iris/Serialization/IrisObjectReferencePackageMap.h" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/IrisObjectReferencePackageMap.h" },
		{ "ToolTip", "Custom packagemap implementation used to be able to capture UObject* references from external serialization.\nAny object references written when using this packagemap will be added to the References array and serialized as an index.\nWhen reading using this packagemap references will be read as an index and resolved by picking the corresponding entry from the provided array containing the references." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIrisObjectReferencePackageMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPackageMap,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::ClassParams = {
	&UIrisObjectReferencePackageMap::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap()
{
	if (!Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton, Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UIrisObjectReferencePackageMap>()
{
	return UIrisObjectReferencePackageMap::StaticClass();
}
UIrisObjectReferencePackageMap::UIrisObjectReferencePackageMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIrisObjectReferencePackageMap);
UIrisObjectReferencePackageMap::~UIrisObjectReferencePackageMap() {}
// End Class UIrisObjectReferencePackageMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIrisObjectReferencePackageMap, UIrisObjectReferencePackageMap::StaticClass, TEXT("UIrisObjectReferencePackageMap"), &Z_Registration_Info_UClass_UIrisObjectReferencePackageMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIrisObjectReferencePackageMap), 2357261988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_743137427(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
