// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeConcatenator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeConcatenator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeConcatenator
void USoundNodeConcatenator::StaticRegisterNativesUSoundNodeConcatenator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeConcatenator);
UClass* Z_Construct_UClass_USoundNodeConcatenator_NoRegister()
{
	return USoundNodeConcatenator::StaticClass();
}
struct Z_Construct_UClass_USoundNodeConcatenator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n Plays child nodes sequentially\n*/" },
		{ "DisplayName", "Concatenator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeConcatenator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Plays child nodes sequentially" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[] = {
		{ "Category", "Concatenator" },
		{ "Comment", "/** Volume multiplier for each input. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeConcatenator.h" },
		{ "ToolTip", "Volume multiplier for each input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeConcatenator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner = { "InputVolume", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume = { "InputVolume", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeConcatenator, InputVolume), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputVolume_MetaData), NewProp_InputVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeConcatenator_Statics::NewProp_InputVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeConcatenator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams = {
	&USoundNodeConcatenator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeConcatenator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeConcatenator()
{
	if (!Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton, Z_Construct_UClass_USoundNodeConcatenator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeConcatenator.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeConcatenator>()
{
	return USoundNodeConcatenator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeConcatenator);
USoundNodeConcatenator::~USoundNodeConcatenator() {}
// End Class USoundNodeConcatenator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeConcatenator, USoundNodeConcatenator::StaticClass, TEXT("USoundNodeConcatenator"), &Z_Registration_Info_UClass_USoundNodeConcatenator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeConcatenator), 540961957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_639053809(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeConcatenator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
