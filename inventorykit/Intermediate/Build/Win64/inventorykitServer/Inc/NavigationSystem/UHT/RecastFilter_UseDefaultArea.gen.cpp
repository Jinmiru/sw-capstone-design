// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavFilters/RecastFilter_UseDefaultArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastFilter_UseDefaultArea() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class URecastFilter_UseDefaultArea
void URecastFilter_UseDefaultArea::StaticRegisterNativesURecastFilter_UseDefaultArea()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecastFilter_UseDefaultArea);
UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister()
{
	return URecastFilter_UseDefaultArea::StaticClass();
}
struct Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Regular navigation area, applied to entire navigation data by default */" },
		{ "IncludePath", "NavFilters/RecastFilter_UseDefaultArea.h" },
		{ "ModuleRelativePath", "Public/NavFilters/RecastFilter_UseDefaultArea.h" },
		{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecastFilter_UseDefaultArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::ClassParams = {
	&URecastFilter_UseDefaultArea::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::Class_MetaDataParams), Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea()
{
	if (!Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton, Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecastFilter_UseDefaultArea.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<URecastFilter_UseDefaultArea>()
{
	return URecastFilter_UseDefaultArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecastFilter_UseDefaultArea);
URecastFilter_UseDefaultArea::~URecastFilter_UseDefaultArea() {}
// End Class URecastFilter_UseDefaultArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URecastFilter_UseDefaultArea, URecastFilter_UseDefaultArea::StaticClass, TEXT("URecastFilter_UseDefaultArea"), &Z_Registration_Info_UClass_URecastFilter_UseDefaultArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecastFilter_UseDefaultArea), 1539685275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_1794883591(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
