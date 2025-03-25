// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SystemTimeTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemTimeTimecodeProvider() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider();
ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USystemTimeTimecodeProvider
void USystemTimeTimecodeProvider::StaticRegisterNativesUSystemTimeTimecodeProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemTimeTimecodeProvider);
UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister()
{
	return USystemTimeTimecodeProvider::StaticClass();
}
struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the current system time to timecode, relative to a provided frame rate.\n */" },
		{ "IncludePath", "Engine/SystemTimeTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Converts the current system time to timecode, relative to a provided frame rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The frame rate at which the timecode value will be generated. */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "The frame rate at which the timecode value will be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFullFrame_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** When generating frame time, should we generate full frame without subframe value.*/" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "When generating frame time, should we generate full frame without subframe value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPerformanceClock_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Use the high performance clock instead of the system time to generate the timecode value.\n\x09 * Using the high performance clock is faster but will make the value drift over time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Use the high performance clock instead of the system time to generate the timecode value.\nUsing the high performance clock is faster but will make the value drift over time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bGenerateFullFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFullFrame;
	static void NewProp_bUseHighPerformanceClock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPerformanceClock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemTimeTimecodeProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USystemTimeTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit(void* Obj)
{
	((USystemTimeTimecodeProvider*)Obj)->bGenerateFullFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame = { "bGenerateFullFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateFullFrame_MetaData), NewProp_bGenerateFullFrame_MetaData) };
void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit(void* Obj)
{
	((USystemTimeTimecodeProvider*)Obj)->bUseHighPerformanceClock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock = { "bUseHighPerformanceClock", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPerformanceClock_MetaData), NewProp_bUseHighPerformanceClock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams = {
	&USystemTimeTimecodeProvider::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemTimeTimecodeProvider()
{
	if (!Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton, Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USystemTimeTimecodeProvider>()
{
	return USystemTimeTimecodeProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemTimeTimecodeProvider);
USystemTimeTimecodeProvider::~USystemTimeTimecodeProvider() {}
// End Class USystemTimeTimecodeProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemTimeTimecodeProvider, USystemTimeTimecodeProvider::StaticClass, TEXT("USystemTimeTimecodeProvider"), &Z_Registration_Info_UClass_USystemTimeTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemTimeTimecodeProvider), 2271810206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_2290710201(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
