// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingSetup.h"
#include "AnimationSharing/Public/AnimationSharingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingSetup() {}

// Begin Cross Module References
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup();
ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability();
ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AnimationSharing();
// End Cross Module References

// Begin Class UAnimationSharingSetup
void UAnimationSharingSetup::StaticRegisterNativesUAnimationSharingSetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSharingSetup);
UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister()
{
	return UAnimationSharingSetup::StaticClass();
}
struct Z_Construct_UClass_UAnimationSharingSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Animation Sharing Setup asset contains all the information that will be shared across the specified Actors\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationSharingSetup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
		{ "ToolTip", "The Animation Sharing Setup asset contains all the information that will be shared across the specified Actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonSetups_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilitySettings_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonSetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonSetups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilitySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingSetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_Inner = { "SkeletonSetups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup, METADATA_PARAMS(0, nullptr) }; // 3877520483
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups = { "SkeletonSetups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSharingSetup, SkeletonSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonSetups_MetaData), NewProp_SkeletonSetups_MetaData) }; // 3877520483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings = { "ScalabilitySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSharingSetup, ScalabilitySettings), Z_Construct_UScriptStruct_FAnimationSharingScalability, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalabilitySettings_MetaData), NewProp_ScalabilitySettings_MetaData) }; // 1405597277
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationSharingSetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingSetup_Statics::ClassParams = {
	&UAnimationSharingSetup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationSharingSetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationSharingSetup()
{
	if (!Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton, Z_Construct_UClass_UAnimationSharingSetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton;
}
template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimationSharingSetup>()
{
	return UAnimationSharingSetup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingSetup);
UAnimationSharingSetup::~UAnimationSharingSetup() {}
// End Class UAnimationSharingSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSharingSetup, UAnimationSharingSetup::StaticClass, TEXT("UAnimationSharingSetup"), &Z_Registration_Info_UClass_UAnimationSharingSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSharingSetup), 187931732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_4086212243(TEXT("/Script/AnimationSharing"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
