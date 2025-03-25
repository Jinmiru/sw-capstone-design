// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeInfoMap.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfoMap() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeInfoMap
void ULandscapeInfoMap::StaticRegisterNativesULandscapeInfoMap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeInfoMap);
UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister()
{
	return ULandscapeInfoMap::StaticClass();
}
struct Z_Construct_UClass_ULandscapeInfoMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeInfoMap.h" },
		{ "ModuleRelativePath", "Classes/LandscapeInfoMap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeInfoMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeInfoMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfoMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeInfoMap_Statics::ClassParams = {
	&ULandscapeInfoMap::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfoMap_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeInfoMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeInfoMap()
{
	if (!Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton, Z_Construct_UClass_ULandscapeInfoMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeInfoMap.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeInfoMap>()
{
	return ULandscapeInfoMap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfoMap);
ULandscapeInfoMap::~ULandscapeInfoMap() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfoMap)
// End Class ULandscapeInfoMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeInfoMap, ULandscapeInfoMap::StaticClass, TEXT("ULandscapeInfoMap"), &Z_Registration_Info_UClass_ULandscapeInfoMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeInfoMap), 3180439972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_2050363838(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
