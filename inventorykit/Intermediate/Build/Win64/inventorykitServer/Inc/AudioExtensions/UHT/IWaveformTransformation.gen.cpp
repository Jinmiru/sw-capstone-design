// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/IWaveformTransformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWaveformTransformation() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationChain();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationChain_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UWaveformTransformationBase
void UWaveformTransformationBase::StaticRegisterNativesUWaveformTransformationBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationBase);
UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister()
{
	return UWaveformTransformationBase::StaticClass();
}
struct Z_Construct_UClass_UWaveformTransformationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base class to hold editor configurable properties for an arbitrary transformation of audio waveform data\n" },
		{ "IncludePath", "IWaveformTransformation.h" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
		{ "ToolTip", "Base class to hold editor configurable properties for an arbitrary transformation of audio waveform data" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaveformTransformationBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationBase_Statics::ClassParams = {
	&UWaveformTransformationBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveformTransformationBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveformTransformationBase()
{
	if (!Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton, Z_Construct_UClass_UWaveformTransformationBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UWaveformTransformationBase>()
{
	return UWaveformTransformationBase::StaticClass();
}
UWaveformTransformationBase::UWaveformTransformationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationBase);
UWaveformTransformationBase::~UWaveformTransformationBase() {}
// End Class UWaveformTransformationBase

// Begin Class UWaveformTransformationChain
void UWaveformTransformationChain::StaticRegisterNativesUWaveformTransformationChain()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationChain);
UClass* Z_Construct_UClass_UWaveformTransformationChain_NoRegister()
{
	return UWaveformTransformationChain::StaticClass();
}
struct Z_Construct_UClass_UWaveformTransformationChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Object that holds an ordered list of transformations to perform on a sound wave\n" },
		{ "IncludePath", "IWaveformTransformation.h" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
		{ "ToolTip", "Object that holds an ordered list of transformations to perform on a sound wave" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_Inner_MetaData[] = {
		{ "Category", "Transformations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_MetaData[] = {
		{ "Category", "Transformations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transformations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transformations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationChain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner = { "Transformations", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWaveformTransformationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformations_Inner_MetaData), NewProp_Transformations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations = { "Transformations", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveformTransformationChain, Transformations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformations_MetaData), NewProp_Transformations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveformTransformationChain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationChain_Statics::ClassParams = {
	&UWaveformTransformationChain::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveformTransformationChain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveformTransformationChain()
{
	if (!Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton, Z_Construct_UClass_UWaveformTransformationChain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UWaveformTransformationChain>()
{
	return UWaveformTransformationChain::StaticClass();
}
UWaveformTransformationChain::UWaveformTransformationChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationChain);
UWaveformTransformationChain::~UWaveformTransformationChain() {}
// End Class UWaveformTransformationChain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformTransformationBase, UWaveformTransformationBase::StaticClass, TEXT("UWaveformTransformationBase"), &Z_Registration_Info_UClass_UWaveformTransformationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationBase), 189630623U) },
		{ Z_Construct_UClass_UWaveformTransformationChain, UWaveformTransformationChain::StaticClass, TEXT("UWaveformTransformationChain"), &Z_Registration_Info_UClass_UWaveformTransformationChain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationChain), 2784349861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_4006213698(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
