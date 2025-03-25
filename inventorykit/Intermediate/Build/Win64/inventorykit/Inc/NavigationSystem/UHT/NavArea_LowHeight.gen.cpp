// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_LowHeight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavArea_LowHeight
void UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_LowHeight);
UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister()
{
	return UNavArea_LowHeight::StaticClass();
}
struct Z_Construct_UClass_UNavArea_LowHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone. */" },
		{ "IncludePath", "NavAreas/NavArea_LowHeight.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_LowHeight.h" },
		{ "ToolTip", "Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_LowHeight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavArea_LowHeight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_LowHeight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams = {
	&UNavArea_LowHeight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavArea_LowHeight()
{
	if (!Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton, Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_LowHeight>()
{
	return UNavArea_LowHeight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_LowHeight);
UNavArea_LowHeight::~UNavArea_LowHeight() {}
// End Class UNavArea_LowHeight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_LowHeight, UNavArea_LowHeight::StaticClass, TEXT("UNavArea_LowHeight"), &Z_Registration_Info_UClass_UNavArea_LowHeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_LowHeight), 2976245229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_2063828356(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
