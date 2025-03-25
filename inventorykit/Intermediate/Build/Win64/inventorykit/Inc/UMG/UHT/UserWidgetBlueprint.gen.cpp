// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint();
UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UUserWidgetBlueprint
void UUserWidgetBlueprint::StaticRegisterNativesUUserWidgetBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetBlueprint);
UClass* Z_Construct_UClass_UUserWidgetBlueprint_NoRegister()
{
	return UUserWidgetBlueprint::StaticClass();
}
struct Z_Construct_UClass_UUserWidgetBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/UserWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetBlueprint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserWidgetBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetBlueprint_Statics::ClassParams = {
	&UUserWidgetBlueprint::StaticClass,
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
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserWidgetBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserWidgetBlueprint()
{
	if (!Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UUserWidgetBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserWidgetBlueprint>()
{
	return UUserWidgetBlueprint::StaticClass();
}
UUserWidgetBlueprint::UUserWidgetBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetBlueprint);
UUserWidgetBlueprint::~UUserWidgetBlueprint() {}
// End Class UUserWidgetBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetBlueprint, UUserWidgetBlueprint::StaticClass, TEXT("UUserWidgetBlueprint"), &Z_Registration_Info_UClass_UUserWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetBlueprint), 3008407171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_2883771793(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
