// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ApplyLimits.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyLimits() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAngularRangeLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AngularRangeLimit;
class UScriptStruct* FAngularRangeLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularRangeLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AngularRangeLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAngularRangeLimit>()
{
	return FAngularRangeLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAngularRangeLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularRangeLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngularRangeLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMin_MetaData), NewProp_LimitMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngularRangeLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitMax_MetaData), NewProp_LimitMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngularRangeLimit, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) }; // 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"AngularRangeLimit",
	Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers),
	sizeof(FAngularRangeLimit),
	alignof(FAngularRangeLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit()
{
	if (!Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton, Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton;
}
// End ScriptStruct FAngularRangeLimit

// Begin ScriptStruct FAnimNode_ApplyLimits
static_assert(std::is_polymorphic<FAnimNode_ApplyLimits>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ApplyLimits cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits;
class UScriptStruct* FAnimNode_ApplyLimits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ApplyLimits"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ApplyLimits>()
{
	return FAnimNode_ApplyLimits::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularRangeLimits_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularOffsets_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularRangeLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularRangeLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyLimits>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAngularRangeLimit, METADATA_PARAMS(0, nullptr) }; // 3247154309
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularRangeLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularRangeLimits_MetaData), NewProp_AngularRangeLimits_MetaData) }; // 3247154309
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner = { "AngularOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets = { "AngularOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularOffsets_MetaData), NewProp_AngularOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_ApplyLimits",
	Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers),
	sizeof(FAnimNode_ApplyLimits),
	alignof(FAnimNode_ApplyLimits),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton;
}
// End ScriptStruct FAnimNode_ApplyLimits

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAngularRangeLimit::StaticStruct, Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewStructOps, TEXT("AngularRangeLimit"), &Z_Registration_Info_UScriptStruct_AngularRangeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAngularRangeLimit), 3247154309U) },
		{ FAnimNode_ApplyLimits::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewStructOps, TEXT("AnimNode_ApplyLimits"), &Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ApplyLimits), 4270874684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_2016654215(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
