// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompress_RemoveTrivialKeys.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCompress_RemoveTrivialKeys
void UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_RemoveTrivialKeys);
UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister()
{
	return UAnimCompress_RemoveTrivialKeys::StaticClass();
}
struct Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveTrivialKeys.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveTrivialKeys>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff = { "MaxPosDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxPosDiff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPosDiff_MetaData), NewProp_MaxPosDiff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff = { "MaxAngleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxAngleDiff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngleDiff_MetaData), NewProp_MaxAngleDiff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff = { "MaxScaleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxScaleDiff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScaleDiff_MetaData), NewProp_MaxScaleDiff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCompress,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams = {
	&UAnimCompress_RemoveTrivialKeys::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys()
{
	if (!Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton, Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveTrivialKeys>()
{
	return UAnimCompress_RemoveTrivialKeys::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveTrivialKeys);
UAnimCompress_RemoveTrivialKeys::~UAnimCompress_RemoveTrivialKeys() {}
// End Class UAnimCompress_RemoveTrivialKeys

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys, UAnimCompress_RemoveTrivialKeys::StaticClass, TEXT("UAnimCompress_RemoveTrivialKeys"), &Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_RemoveTrivialKeys), 2600930832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_120812627(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
