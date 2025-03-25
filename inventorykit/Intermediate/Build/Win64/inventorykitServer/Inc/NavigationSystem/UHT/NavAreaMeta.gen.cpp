// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavAreaMeta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaMeta() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavAreaMeta
void UNavAreaMeta::StaticRegisterNativesUNavAreaMeta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavAreaMeta);
UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister()
{
	return UNavAreaMeta::StaticClass();
}
struct Z_Construct_UClass_UNavAreaMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A convenience class for an area that has IsMetaArea() == true.\n *\x09""Do not use this class when determining whether an area class is \"meta\". \n *\x09""Call IsMetaArea instead. */" },
		{ "IncludePath", "NavAreas/NavAreaMeta.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavAreaMeta.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A convenience class for an area that has IsMetaArea() == true.\n   Do not use this class when determining whether an area class is \"meta\".\n   Call IsMetaArea instead." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavAreaMeta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavAreaMeta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavAreaMeta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams = {
	&UNavAreaMeta::StaticClass,
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
	0x002800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavAreaMeta()
{
	if (!Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton, Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavAreaMeta>()
{
	return UNavAreaMeta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaMeta);
UNavAreaMeta::~UNavAreaMeta() {}
// End Class UNavAreaMeta

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavAreaMeta, UNavAreaMeta::StaticClass, TEXT("UNavAreaMeta"), &Z_Registration_Info_UClass_UNavAreaMeta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavAreaMeta), 657041145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_614221027(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
