// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCompress
void UAnimCompress::StaticRegisterNativesUAnimCompress()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress);
UClass* Z_Construct_UClass_UAnimCompress_NoRegister()
{
	return UAnimCompress::StaticClass();
}
struct Z_Construct_UClass_UAnimCompress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsSkeleton_MetaData[] = {
		{ "Comment", "/** Compression algorithms requiring a skeleton should set this value to true. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Compression algorithms requiring a skeleton should set this value to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of translation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of translation data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of rotation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of rotation data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of scale data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of scale data." },
	};
#endif // WITH_METADATA
	static void NewProp_bNeedsSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsSkeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleCompressionFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit(void* Obj)
{
	((UAnimCompress*)Obj)->bNeedsSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton = { "bNeedsSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimCompress), &Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsSkeleton_MetaData), NewProp_bNeedsSkeleton_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat = { "TranslationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationCompressionFormat_MetaData), NewProp_TranslationCompressionFormat_MetaData) }; // 2097126910
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat = { "RotationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationCompressionFormat_MetaData), NewProp_RotationCompressionFormat_MetaData) }; // 2097126910
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat = { "ScaleCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompress, ScaleCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCompressionFormat_MetaData), NewProp_ScaleCompressionFormat_MetaData) }; // 2097126910
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCompress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_Statics::ClassParams = {
	&UAnimCompress::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCompress_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompress()
{
	if (!Z_Registration_Info_UClass_UAnimCompress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress.OuterSingleton, Z_Construct_UClass_UAnimCompress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompress.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompress>()
{
	return UAnimCompress::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress);
UAnimCompress::~UAnimCompress() {}
// End Class UAnimCompress

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress, UAnimCompress::StaticClass, TEXT("UAnimCompress"), &Z_Registration_Info_UClass_UAnimCompress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress), 2316158133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_1101679592(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
