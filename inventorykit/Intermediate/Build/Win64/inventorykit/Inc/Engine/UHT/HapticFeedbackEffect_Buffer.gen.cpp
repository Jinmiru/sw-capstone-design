// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Buffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Buffer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHapticFeedbackEffect_Buffer
void UHapticFeedbackEffect_Buffer::StaticRegisterNativesUHapticFeedbackEffect_Buffer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffect_Buffer);
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister()
{
	return UHapticFeedbackEffect_Buffer::StaticClass();
}
struct Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Buffer.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitudes_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Amplitudes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amplitudes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Buffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner = { "Amplitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes = { "Amplitudes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, Amplitudes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitudes_MetaData), NewProp_Amplitudes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams = {
	&UHapticFeedbackEffect_Buffer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer()
{
	if (!Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Buffer>()
{
	return UHapticFeedbackEffect_Buffer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Buffer);
// End Class UHapticFeedbackEffect_Buffer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffect_Buffer, UHapticFeedbackEffect_Buffer::StaticClass, TEXT("UHapticFeedbackEffect_Buffer"), &Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffect_Buffer), 2560956781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_146618408(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
