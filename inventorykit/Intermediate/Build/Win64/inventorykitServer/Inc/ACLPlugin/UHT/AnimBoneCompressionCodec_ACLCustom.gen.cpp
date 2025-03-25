// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLCustom.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLCustom() {}

// Begin Cross Module References
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Class UAnimBoneCompressionCodec_ACLCustom
void UAnimBoneCompressionCodec_ACLCustom::StaticRegisterNativesUAnimBoneCompressionCodec_ACLCustom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACLCustom);
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_NoRegister()
{
	return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
}
struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with custom settings suitable for debugging purposes. */" },
		{ "DisplayName", "Anim Compress ACL Custom" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with custom settings suitable for debugging purposes." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The rotation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The rotation format to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The translation format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The translation format to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFormat_MetaData[] = {
		{ "Category", "Clip" },
		{ "Comment", "/** The scale format to use. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The scale format to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingProportion_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum proportion of keyframes that should be stripped. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The minimum proportion of keyframes that should be stripped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingThreshold_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLCustom.h" },
		{ "ToolTip", "The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingProportion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat = { "RotationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, RotationFormat), Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationFormat_MetaData), NewProp_RotationFormat_MetaData) }; // 1569556780
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat = { "TranslationFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, TranslationFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationFormat_MetaData), NewProp_TranslationFormat_MetaData) }; // 421492154
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat = { "ScaleFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, ScaleFormat), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFormat_MetaData), NewProp_ScaleFormat_MetaData) }; // 421492154
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizationTargets_MetaData), NewProp_OptimizationTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_KeyframeStrippingProportion = { "KeyframeStrippingProportion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, KeyframeStrippingProportion), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeStrippingProportion_MetaData), NewProp_KeyframeStrippingProportion_MetaData) }; // 50753708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_KeyframeStrippingThreshold = { "KeyframeStrippingThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLCustom, KeyframeStrippingThreshold), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeStrippingThreshold_MetaData), NewProp_KeyframeStrippingThreshold_MetaData) }; // 50753708
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_RotationFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_TranslationFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_ScaleFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_OptimizationTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_KeyframeStrippingProportion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::NewProp_KeyframeStrippingThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams = {
	&UAnimBoneCompressionCodec_ACLCustom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::PropPointers), 0),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom()
{
	if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom.OuterSingleton;
}
template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLCustom>()
{
	return UAnimBoneCompressionCodec_ACLCustom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLCustom);
UAnimBoneCompressionCodec_ACLCustom::~UAnimBoneCompressionCodec_ACLCustom() {}
// End Class UAnimBoneCompressionCodec_ACLCustom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACLCustom, UAnimBoneCompressionCodec_ACLCustom::StaticClass, TEXT("UAnimBoneCompressionCodec_ACLCustom"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACLCustom), 1188401755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_269573088(TEXT("/Script/ACLPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLCustom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
