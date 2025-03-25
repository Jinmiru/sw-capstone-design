// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TimeManagement/Public/GenlockedFixedRateCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedFixedRateCustomTimeStep() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References

// Begin Class UGenlockedFixedRateCustomTimeStep
void UGenlockedFixedRateCustomTimeStep::StaticRegisterNativesUGenlockedFixedRateCustomTimeStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedFixedRateCustomTimeStep);
UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister()
{
	return UGenlockedFixedRateCustomTimeStep::StaticClass();
}
struct Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via a fixed frame rate.\n * \n * Philosophy:\n * \n *   * Quantized increments but keeping up with platform time.\n * \n *   * FApp::GetDeltaTime \n *       - Forced to a multiple of the desired FrameTime.\n * \n *   * FApp::GetCurrentTime\n *       - Incremented in multiples of the desired FrameTime.\n *       - Corresponds to platform time minus any fractional FrameTime.\n * \n */" },
		{ "DisplayName", "Genlocked Fixed Rate" },
		{ "IncludePath", "GenlockedFixedRateCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via a fixed frame rate.\n\nPhilosophy:\n\n  * Quantized increments but keeping up with platform time.\n\n  * FApp::GetDeltaTime\n      - Forced to a multiple of the desired FrameTime.\n\n  * FApp::GetCurrentTime\n      - Incremented in multiples of the desired FrameTime.\n      - Corresponds to platform time minus any fractional FrameTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Desired frame rate */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Desired frame rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBlock_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Indicates that this custom time step should block to enforce the specified frame rate. Set to false if this is enforced elsewhere. */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Indicates that this custom time step should block to enforce the specified frame rate. Set to false if this is enforced elsewhere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceSingleFrameDeltaTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** When true, delta time will always be 1/FrameRate, regardless of how much real time has elapsed */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "When true, delta time will always be 1/FrameRate, regardless of how much real time has elapsed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bShouldBlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlock;
	static void NewProp_bForceSingleFrameDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSingleFrameDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedFixedRateCustomTimeStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGenlockedFixedRateCustomTimeStep, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_SetBit(void* Obj)
{
	((UGenlockedFixedRateCustomTimeStep*)Obj)->bShouldBlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock = { "bShouldBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenlockedFixedRateCustomTimeStep), &Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBlock_MetaData), NewProp_bShouldBlock_MetaData) };
void Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_SetBit(void* Obj)
{
	((UGenlockedFixedRateCustomTimeStep*)Obj)->bForceSingleFrameDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime = { "bForceSingleFrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenlockedFixedRateCustomTimeStep), &Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceSingleFrameDeltaTime_MetaData), NewProp_bForceSingleFrameDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams = {
	&UGenlockedFixedRateCustomTimeStep::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep()
{
	if (!Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton, Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedFixedRateCustomTimeStep>()
{
	return UGenlockedFixedRateCustomTimeStep::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedFixedRateCustomTimeStep);
UGenlockedFixedRateCustomTimeStep::~UGenlockedFixedRateCustomTimeStep() {}
// End Class UGenlockedFixedRateCustomTimeStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep, UGenlockedFixedRateCustomTimeStep::StaticClass, TEXT("UGenlockedFixedRateCustomTimeStep"), &Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedFixedRateCustomTimeStep), 3020321402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_2917233011(TEXT("/Script/TimeManagement"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
