// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TimeManagement/Public/GenlockedCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedCustomTimeStep() {}

// Begin Cross Module References
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References

// Begin Class UGenlockedCustomTimeStep
void UGenlockedCustomTimeStep::StaticRegisterNativesUGenlockedCustomTimeStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedCustomTimeStep);
UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister()
{
	return UGenlockedCustomTimeStep::StaticClass();
}
struct Z_Construct_UClass_UGenlockedCustomTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class to control the Engine Timestep from a Genlock signal.\n */" },
		{ "IncludePath", "GenlockedCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine Timestep from a Genlock signal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectFormat_MetaData[] = {
		{ "Comment", "/** Whether this custom time step should autodetect the video format if supported. */" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Whether this custom time step should autodetect the video format if supported." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoDetectFormat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedCustomTimeStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_SetBit(void* Obj)
{
	((UGenlockedCustomTimeStep*)Obj)->bAutoDetectFormat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat = { "bAutoDetectFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenlockedCustomTimeStep), &Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDetectFormat_MetaData), NewProp_bAutoDetectFormat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFixedFrameRateCustomTimeStep,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams = {
	&UGenlockedCustomTimeStep::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenlockedCustomTimeStep()
{
	if (!Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton, Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedCustomTimeStep>()
{
	return UGenlockedCustomTimeStep::StaticClass();
}
UGenlockedCustomTimeStep::UGenlockedCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedCustomTimeStep);
UGenlockedCustomTimeStep::~UGenlockedCustomTimeStep() {}
// End Class UGenlockedCustomTimeStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedCustomTimeStep, UGenlockedCustomTimeStep::StaticClass, TEXT("UGenlockedCustomTimeStep"), &Z_Registration_Info_UClass_UGenlockedCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedCustomTimeStep), 497952551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_613782609(TEXT("/Script/TimeManagement"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
