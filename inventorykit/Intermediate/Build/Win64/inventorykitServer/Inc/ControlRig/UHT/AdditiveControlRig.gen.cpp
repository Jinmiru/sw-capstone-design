// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/AdditiveControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdditiveControlRig() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UAdditiveControlRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UAdditiveControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UAdditiveControlRig
void UAdditiveControlRig::StaticRegisterNativesUAdditiveControlRig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdditiveControlRig);
UClass* Z_Construct_UClass_UAdditiveControlRig_NoRegister()
{
	return UAdditiveControlRig::StaticClass();
}
struct Z_Construct_UClass_UAdditiveControlRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Rig that allows additive layer editing per joint */" },
		{ "IncludePath", "Rigs/AdditiveControlRig.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Rigs/AdditiveControlRig.h" },
		{ "ToolTip", "Rig that allows additive layer editing per joint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdditiveControlRig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAdditiveControlRig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControlRig,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditiveControlRig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdditiveControlRig_Statics::ClassParams = {
	&UAdditiveControlRig::StaticClass,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditiveControlRig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdditiveControlRig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAdditiveControlRig()
{
	if (!Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton, Z_Construct_UClass_UAdditiveControlRig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAdditiveControlRig.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UAdditiveControlRig>()
{
	return UAdditiveControlRig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAdditiveControlRig);
UAdditiveControlRig::~UAdditiveControlRig() {}
// End Class UAdditiveControlRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAdditiveControlRig, UAdditiveControlRig::StaticClass, TEXT("UAdditiveControlRig"), &Z_Registration_Info_UClass_UAdditiveControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdditiveControlRig), 877148972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_42077360(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
