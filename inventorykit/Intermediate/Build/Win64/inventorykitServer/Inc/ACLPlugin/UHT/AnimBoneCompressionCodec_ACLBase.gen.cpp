// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLBase() {}

// Begin Cross Module References
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_NoRegister();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode();
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Class UAnimBoneCompressionCodec_ACLBase
void UAnimBoneCompressionCodec_ACLBase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionCodec_ACLBase);
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_NoRegister()
{
	return UAnimBoneCompressionCodec_ACLBase::StaticClass();
}
struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The base codec implementation for ACL support. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLBase.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The base codec implementation for ACL support." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLevel_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The compression level to use. Higher levels will be slower to compress but yield a lower memory footprint. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The compression level to use. Higher levels will be slower to compress but yield a lower memory footprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhantomTrackMode_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** How to treat phantom tracks. Phantom tracks are not mapped to a skeleton bone. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "How to treat phantom tracks. Phantom tracks are not mapped to a skeleton bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVirtualVertexDistance_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The default virtual vertex distance for normal bones. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The default virtual vertex distance for normal bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeVirtualVertexDistance_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The virtual vertex distance for bones that requires extra accuracy. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The virtual vertex distance for bones that requires extra accuracy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorThreshold_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold to use when optimizing and compressing the animation sequence. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The error threshold to use when optimizing and compressing the animation sequence." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhantomTrackMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PhantomTrackMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVirtualVertexDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SafeVirtualVertexDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel = { "CompressionLevel", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, CompressionLevel), Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionLevel_MetaData), NewProp_CompressionLevel_MetaData) }; // 17174031
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_PhantomTrackMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_PhantomTrackMode = { "PhantomTrackMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, PhantomTrackMode), Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhantomTrackMode_MetaData), NewProp_PhantomTrackMode_MetaData) }; // 3168793838
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance = { "DefaultVirtualVertexDistance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, DefaultVirtualVertexDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVirtualVertexDistance_MetaData), NewProp_DefaultVirtualVertexDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance = { "SafeVirtualVertexDistance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, SafeVirtualVertexDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeVirtualVertexDistance_MetaData), NewProp_SafeVirtualVertexDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold = { "ErrorThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, ErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorThreshold_MetaData), NewProp_ErrorThreshold_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_PhantomTrackMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_PhantomTrackMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
	(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::ClassParams = {
	&UAnimBoneCompressionCodec_ACLBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers), 0),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase()
{
	if (!Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.OuterSingleton;
}
template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLBase>()
{
	return UAnimBoneCompressionCodec_ACLBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLBase);
UAnimBoneCompressionCodec_ACLBase::~UAnimBoneCompressionCodec_ACLBase() {}
// End Class UAnimBoneCompressionCodec_ACLBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase, UAnimBoneCompressionCodec_ACLBase::StaticClass, TEXT("UAnimBoneCompressionCodec_ACLBase"), &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionCodec_ACLBase), 974564645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLBase_h_3879013277(TEXT("/Script/ACLPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimBoneCompressionCodec_ACLBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
