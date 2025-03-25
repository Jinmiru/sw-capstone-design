// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneMaskFilter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter();
ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBranchFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchFilter;
class UScriptStruct* FBranchFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BranchFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchFilter>()
{
	return FBranchFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBranchFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** Bone Name to filter **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendDepth_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** Blend Depth **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Blend Depth *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlendDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchFilter, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth = { "BlendDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchFilter, BlendDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendDepth_MetaData), NewProp_BlendDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BranchFilter",
	Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers),
	sizeof(FBranchFilter),
	alignof(FBranchFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter()
{
	if (!Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton, Z_Construct_UScriptStruct_FBranchFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BranchFilter.InnerSingleton;
}
// End ScriptStruct FBranchFilter

// Begin ScriptStruct FInputBlendPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputBlendPose;
class UScriptStruct* FInputBlendPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputBlendPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputBlendPose"));
	}
	return Z_Registration_Info_UScriptStruct_InputBlendPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputBlendPose>()
{
	return FInputBlendPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputBlendPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchFilters_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Bone Name to filter **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputBlendPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner = { "BranchFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBranchFilter, METADATA_PARAMS(0, nullptr) }; // 3257583001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters = { "BranchFilters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputBlendPose, BranchFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchFilters_MetaData), NewProp_BranchFilters_MetaData) }; // 3257583001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputBlendPose",
	Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers),
	sizeof(FInputBlendPose),
	alignof(FInputBlendPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose()
{
	if (!Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton, Z_Construct_UScriptStruct_FInputBlendPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputBlendPose.InnerSingleton;
}
// End ScriptStruct FInputBlendPose

// Begin Class UBoneMaskFilter
void UBoneMaskFilter::StaticRegisterNativesUBoneMaskFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoneMaskFilter);
UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister()
{
	return UBoneMaskFilter::StaticClass();
}
struct Z_Construct_UClass_UBoneMaskFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimData/BoneMaskFilter.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[] = {
		{ "Category", "BoneMask" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneMaskFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoneMaskFilter, BlendPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendPoses_MetaData), NewProp_BlendPoses_MetaData) }; // 235181659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoneMaskFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams = {
	&UBoneMaskFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoneMaskFilter()
{
	if (!Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton, Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoneMaskFilter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBoneMaskFilter>()
{
	return UBoneMaskFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneMaskFilter);
UBoneMaskFilter::~UBoneMaskFilter() {}
// End Class UBoneMaskFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBranchFilter::StaticStruct, Z_Construct_UScriptStruct_FBranchFilter_Statics::NewStructOps, TEXT("BranchFilter"), &Z_Registration_Info_UScriptStruct_BranchFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchFilter), 3257583001U) },
		{ FInputBlendPose::StaticStruct, Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewStructOps, TEXT("InputBlendPose"), &Z_Registration_Info_UScriptStruct_InputBlendPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputBlendPose), 235181659U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoneMaskFilter, UBoneMaskFilter::StaticClass, TEXT("UBoneMaskFilter"), &Z_Registration_Info_UClass_UBoneMaskFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneMaskFilter), 3285602908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_691906191(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_BoneMaskFilter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
