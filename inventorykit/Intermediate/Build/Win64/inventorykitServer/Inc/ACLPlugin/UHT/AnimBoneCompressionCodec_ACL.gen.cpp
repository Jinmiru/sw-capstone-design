// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACL.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACL() {}

// Begin Cross Module References
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Class UAnimBoneCompressionCodec_ACL
void UAnimBoneCompressionCodec_ACL::StaticRegisterNativesUAnimBoneCompressionCodec_ACL()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACL);
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister()
{
	return UAnimBoneCompressionCodec_ACL::StaticClass();
}
struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with default settings suitable for general purpose animations. */" },
		{ "DisplayName", "Anim Compress ACL" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with default settings suitable for general purpose animations." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingProportion_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum proportion of keyframes that should be stripped. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The minimum proportion of keyframes that should be stripped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingThreshold_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingProportion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizationTargets_MetaData), NewProp_OptimizationTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion = { "KeyframeStrippingProportion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, KeyframeStrippingProportion), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeStrippingProportion_MetaData), NewProp_KeyframeStrippingProportion_MetaData) }; // 50753708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold = { "KeyframeStrippingThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, KeyframeStrippingThreshold), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyframeStrippingThreshold_MetaData), NewProp_KeyframeStrippingThreshold_MetaData) }; // 50753708
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams = {
	&UAnimBoneCompressionCodec_ACL::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers), 0),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL()
{
	if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL.OuterSingleton;
}
template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACL>()
{
	return UAnimBoneCompressionCodec_ACL::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACL);
UAnimBoneCompressionCodec_ACL::~UAnimBoneCompressionCodec_ACL() {}
// End Class UAnimBoneCompressionCodec_ACL

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACL, UAnimBoneCompressionCodec_ACL::StaticClass, TEXT("UAnimBoneCompressionCodec_ACL"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACL), 3600365821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_3182475978(TEXT("/Script/ACLPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
