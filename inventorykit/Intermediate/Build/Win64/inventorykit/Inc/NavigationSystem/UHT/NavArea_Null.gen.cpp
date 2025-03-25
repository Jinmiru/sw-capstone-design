// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Null.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Null() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavArea_Null
void UNavArea_Null::StaticRegisterNativesUNavArea_Null()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_Null);
UClass* Z_Construct_UClass_UNavArea_Null_NoRegister()
{
	return UNavArea_Null::StaticClass();
}
struct Z_Construct_UClass_UNavArea_Null_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** In general represents an empty area, that cannot be traversed by anyone. Ever.*/" },
		{ "IncludePath", "NavAreas/NavArea_Null.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Null.h" },
		{ "ToolTip", "In general represents an empty area, that cannot be traversed by anyone. Ever." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Null>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavArea_Null_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Null_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Null_Statics::ClassParams = {
	&UNavArea_Null::StaticClass,
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
	0x002800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavArea_Null()
{
	if (!Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton, Z_Construct_UClass_UNavArea_Null_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Null>()
{
	return UNavArea_Null::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Null);
UNavArea_Null::~UNavArea_Null() {}
// End Class UNavArea_Null

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_Null, UNavArea_Null::StaticClass, TEXT("UNavArea_Null"), &Z_Registration_Info_UClass_UNavArea_Null, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_Null), 1566481618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_1508783769(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
