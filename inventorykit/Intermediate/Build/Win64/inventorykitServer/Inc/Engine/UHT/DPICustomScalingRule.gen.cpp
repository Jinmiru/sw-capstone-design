// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DPICustomScalingRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPICustomScalingRule() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule();
ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDPICustomScalingRule
void UDPICustomScalingRule::StaticRegisterNativesUDPICustomScalingRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDPICustomScalingRule);
UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister()
{
	return UDPICustomScalingRule::StaticClass();
}
struct Z_Construct_UClass_UDPICustomScalingRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\n * and setting this rule to be used in your project settings.\n */" },
		{ "IncludePath", "Engine/DPICustomScalingRule.h" },
		{ "ModuleRelativePath", "Classes/Engine/DPICustomScalingRule.h" },
		{ "ToolTip", "Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\nand setting this rule to be used in your project settings." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDPICustomScalingRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDPICustomScalingRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDPICustomScalingRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams = {
	&UDPICustomScalingRule::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDPICustomScalingRule()
{
	if (!Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton, Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDPICustomScalingRule.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDPICustomScalingRule>()
{
	return UDPICustomScalingRule::StaticClass();
}
UDPICustomScalingRule::UDPICustomScalingRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDPICustomScalingRule);
UDPICustomScalingRule::~UDPICustomScalingRule() {}
// End Class UDPICustomScalingRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDPICustomScalingRule, UDPICustomScalingRule::StaticClass, TEXT("UDPICustomScalingRule"), &Z_Registration_Info_UClass_UDPICustomScalingRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDPICustomScalingRule), 4218348651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_62159171(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DPICustomScalingRule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
