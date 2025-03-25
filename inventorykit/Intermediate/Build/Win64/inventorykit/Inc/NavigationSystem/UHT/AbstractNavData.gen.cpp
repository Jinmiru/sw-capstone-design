// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/AbstractNavData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractNavData() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class AAbstractNavData
void AAbstractNavData::StaticRegisterNativesAAbstractNavData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbstractNavData);
UClass* Z_Construct_UClass_AAbstractNavData_NoRegister()
{
	return AAbstractNavData::StaticClass();
}
struct Z_Construct_UClass_AAbstractNavData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbstractNavData.h" },
		{ "ModuleRelativePath", "Public/AbstractNavData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractNavData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAbstractNavData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavigationData,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractNavData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbstractNavData_Statics::ClassParams = {
	&AAbstractNavData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams), Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAbstractNavData()
{
	if (!Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton, Z_Construct_UClass_AAbstractNavData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<AAbstractNavData>()
{
	return AAbstractNavData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractNavData);
AAbstractNavData::~AAbstractNavData() {}
// End Class AAbstractNavData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAbstractNavData, AAbstractNavData::StaticClass, TEXT("AAbstractNavData"), &Z_Registration_Info_UClass_AAbstractNavData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbstractNavData), 3245173088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_3452137841(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
