// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TimeManagement/Public/FixedFrameRateCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixedFrameRateCustomTimeStep() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References

// Begin Class UFixedFrameRateCustomTimeStep
void UFixedFrameRateCustomTimeStep::StaticRegisterNativesUFixedFrameRateCustomTimeStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFixedFrameRateCustomTimeStep);
UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister()
{
	return UFixedFrameRateCustomTimeStep::StaticClass();
}
struct Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class to control the Engine TimeStep via a FixedFrameRate\n */" },
		{ "IncludePath", "FixedFrameRateCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/FixedFrameRateCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine TimeStep via a FixedFrameRate" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixedFrameRateCustomTimeStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineCustomTimeStep,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::ClassParams = {
	&UFixedFrameRateCustomTimeStep::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep()
{
	if (!Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.OuterSingleton, Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UClass* StaticClass<UFixedFrameRateCustomTimeStep>()
{
	return UFixedFrameRateCustomTimeStep::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFixedFrameRateCustomTimeStep);
UFixedFrameRateCustomTimeStep::~UFixedFrameRateCustomTimeStep() {}
// End Class UFixedFrameRateCustomTimeStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFixedFrameRateCustomTimeStep, UFixedFrameRateCustomTimeStep::StaticClass, TEXT("UFixedFrameRateCustomTimeStep"), &Z_Registration_Info_UClass_UFixedFrameRateCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFixedFrameRateCustomTimeStep), 106272087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_958382557(TEXT("/Script/TimeManagement"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
