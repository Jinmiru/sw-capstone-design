// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectGridFilter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilterConfig();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFragmentLocFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFragmentLocFilter_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridWorldLocFilter();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister();
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetObjectGridFilterProfile();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FNetObjectGridFilterProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile;
class UScriptStruct* FNetObjectGridFilterProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectGridFilterProfile, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetObjectGridFilterProfile"));
	}
	return Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetObjectGridFilterProfile>()
{
	return FNetObjectGridFilterProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized template that configures unique properties.\n * Useful when you need to specialize a behavior per class or object type\n */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Specialized template that configures unique properties.\nUseful when you need to specialize a behavior per class or object type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterProfileName_MetaData[] = {
		{ "Comment", "/** The config name used to map to this profile */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "The config name used to map to this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCountBeforeCulling_MetaData[] = {
		{ "Comment", "/** Number of frames we keep the object relevant until it is officially culled out.*/" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Number of frames we keep the object relevant until it is officially culled out." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilterProfileName;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_FrameCountBeforeCulling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetObjectGridFilterProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewProp_FilterProfileName = { "FilterProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectGridFilterProfile, FilterProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterProfileName_MetaData), NewProp_FilterProfileName_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewProp_FrameCountBeforeCulling = { "FrameCountBeforeCulling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetObjectGridFilterProfile, FrameCountBeforeCulling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCountBeforeCulling_MetaData), NewProp_FrameCountBeforeCulling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewProp_FilterProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewProp_FrameCountBeforeCulling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	&NewStructOps,
	"NetObjectGridFilterProfile",
	Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::PropPointers),
	sizeof(FNetObjectGridFilterProfile),
	alignof(FNetObjectGridFilterProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetObjectGridFilterProfile()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.InnerSingleton, Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile.InnerSingleton;
}
// End ScriptStruct FNetObjectGridFilterProfile

// Begin Class UNetObjectGridFilterConfig
void UNetObjectGridFilterConfig::StaticRegisterNativesUNetObjectGridFilterConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridFilterConfig);
UClass* Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister()
{
	return UNetObjectGridFilterConfig::StaticClass();
}
struct Z_Construct_UClass_UNetObjectGridFilterConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common settings used to configure how the GridFilter behaves\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Common settings used to configure how the GridFilter behaves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPosRelevancyFrameCount_MetaData[] = {
		{ "Comment", "/** \n\x09 * How many frames a previous grid cell should continue to be considered relevant. To avoid culling issues when player borders cells. \n\x09 * Only used when bUseExactCullDistance is false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "How many frames a previous grid cell should continue to be considered relevant. To avoid culling issues when player borders cells.\nOnly used when bUseExactCullDistance is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameCountBeforeCulling_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCullDistance_MetaData[] = {
		{ "Comment", "/** Objects with larger sqrt(NetCullDistanceSqr) will be rejected. Disabled when value is zero. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Objects with larger sqrt(NetCullDistanceSqr) will be rejected. Disabled when value is zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCullDistance_MetaData[] = {
		{ "Comment", "/** Objects without a NetCullDistanceSquared property will assume to have this value but squared unless there's a cull distance override. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Objects without a NetCullDistanceSquared property will assume to have this value but squared unless there's a cull distance override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPos_MetaData[] = {
		{ "Comment", "/** Coordinates will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Coordinates will be clamped to MinPos and MaxPos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPos_MetaData[] = {
		{ "Comment", "/** Coordinates will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Coordinates will be clamped to MinPos and MaxPos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExactCullDistance_MetaData[] = {
		{ "Comment", "/** \n\x09 * If true: use the exact distance between an object and the viewer to determine if the object is relevant or should be culled out.\n\x09 * When false: consider all objects within a grid cell to be relevant when a viewer is located within the cell. This can extend the relevant distance of objects beyond their cull distance. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "If true: use the exact distance between an object and the viewer to determine if the object is relevant or should be culled out.\nWhen false: consider all objects within a grid cell to be relevant when a viewer is located within the cell. This can extend the relevant distance of objects beyond their cull distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterProfiles_MetaData[] = {
		{ "Comment", "/** Map of specialized configuration profiles */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Map of specialized configuration profiles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ViewPosRelevancyFrameCount;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DefaultFrameCountBeforeCulling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCullDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPos;
	static void NewProp_bUseExactCullDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExactCullDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridFilterConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount = { "ViewPosRelevancyFrameCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, ViewPosRelevancyFrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPosRelevancyFrameCount_MetaData), NewProp_ViewPosRelevancyFrameCount_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultFrameCountBeforeCulling = { "DefaultFrameCountBeforeCulling", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, DefaultFrameCountBeforeCulling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFrameCountBeforeCulling_MetaData), NewProp_DefaultFrameCountBeforeCulling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX = { "CellSizeX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, CellSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSizeX_MetaData), NewProp_CellSizeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY = { "CellSizeY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, CellSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSizeY_MetaData), NewProp_CellSizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance = { "MaxCullDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, MaxCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCullDistance_MetaData), NewProp_MaxCullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance = { "DefaultCullDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, DefaultCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCullDistance_MetaData), NewProp_DefaultCullDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos = { "MinPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, MinPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPos_MetaData), NewProp_MinPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos = { "MaxPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, MaxPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPos_MetaData), NewProp_MaxPos_MetaData) };
void Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_bUseExactCullDistance_SetBit(void* Obj)
{
	((UNetObjectGridFilterConfig*)Obj)->bUseExactCullDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_bUseExactCullDistance = { "bUseExactCullDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNetObjectGridFilterConfig), &Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_bUseExactCullDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExactCullDistance_MetaData), NewProp_bUseExactCullDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_FilterProfiles_Inner = { "FilterProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNetObjectGridFilterProfile, METADATA_PARAMS(0, nullptr) }; // 3258839490
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_FilterProfiles = { "FilterProfiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetObjectGridFilterConfig, FilterProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterProfiles_MetaData), NewProp_FilterProfiles_MetaData) }; // 3258839490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultFrameCountBeforeCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_bUseExactCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_FilterProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_FilterProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilterConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::ClassParams = {
	&UNetObjectGridFilterConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectGridFilterConfig()
{
	if (!Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectGridFilterConfig>()
{
	return UNetObjectGridFilterConfig::StaticClass();
}
UNetObjectGridFilterConfig::UNetObjectGridFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridFilterConfig);
UNetObjectGridFilterConfig::~UNetObjectGridFilterConfig() {}
// End Class UNetObjectGridFilterConfig

// Begin Class UNetObjectGridFilter
void UNetObjectGridFilter::StaticRegisterNativesUNetObjectGridFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridFilter);
UClass* Z_Construct_UClass_UNetObjectGridFilter_NoRegister()
{
	return UNetObjectGridFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectGridFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectGridFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridFilter_Statics::ClassParams = {
	&UNetObjectGridFilter::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectGridFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectGridFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton, Z_Construct_UClass_UNetObjectGridFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectGridFilter>()
{
	return UNetObjectGridFilter::StaticClass();
}
UNetObjectGridFilter::UNetObjectGridFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridFilter);
UNetObjectGridFilter::~UNetObjectGridFilter() {}
// End Class UNetObjectGridFilter

// Begin Class UNetObjectGridWorldLocFilter
void UNetObjectGridWorldLocFilter::StaticRegisterNativesUNetObjectGridWorldLocFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridWorldLocFilter);
UClass* Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister()
{
	return UNetObjectGridWorldLocFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Filter for replicated objects that have a WorldLocation reference (e.g. Actors).\n * \n * This filter is more efficient since it's run before Polling and culls out objects that are not relevant to any connection.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Filter for replicated objects that have a WorldLocation reference (e.g. Actors).\n\nThis filter is more efficient since it's run before Polling and culls out objects that are not relevant to any connection." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridWorldLocFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectGridFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::ClassParams = {
	&UNetObjectGridWorldLocFilter::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectGridWorldLocFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton, Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectGridWorldLocFilter>()
{
	return UNetObjectGridWorldLocFilter::StaticClass();
}
UNetObjectGridWorldLocFilter::UNetObjectGridWorldLocFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridWorldLocFilter);
UNetObjectGridWorldLocFilter::~UNetObjectGridWorldLocFilter() {}
// End Class UNetObjectGridWorldLocFilter

// Begin Class UNetObjectGridFragmentLocFilter
void UNetObjectGridFragmentLocFilter::StaticRegisterNativesUNetObjectGridFragmentLocFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridFragmentLocFilter);
UClass* Z_Construct_UClass_UNetObjectGridFragmentLocFilter_NoRegister()
{
	return UNetObjectGridFragmentLocFilter::StaticClass();
}
struct Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Filter for replicated objects that have their location stored in their fragment\n * \n * This filter may be less efficient since it's run after Polling and DirtyData copying and cannot cull out objects from those operations.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Filter for replicated objects that have their location stored in their fragment\n\nThis filter may be less efficient since it's run after Polling and DirtyData copying and cannot cull out objects from those operations." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridFragmentLocFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetObjectGridFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::ClassParams = {
	&UNetObjectGridFragmentLocFilter::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectGridFragmentLocFilter()
{
	if (!Z_Registration_Info_UClass_UNetObjectGridFragmentLocFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridFragmentLocFilter.OuterSingleton, Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectGridFragmentLocFilter.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectGridFragmentLocFilter>()
{
	return UNetObjectGridFragmentLocFilter::StaticClass();
}
UNetObjectGridFragmentLocFilter::UNetObjectGridFragmentLocFilter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridFragmentLocFilter);
UNetObjectGridFragmentLocFilter::~UNetObjectGridFragmentLocFilter() {}
// End Class UNetObjectGridFragmentLocFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetObjectGridFilterProfile::StaticStruct, Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics::NewStructOps, TEXT("NetObjectGridFilterProfile"), &Z_Registration_Info_UScriptStruct_NetObjectGridFilterProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetObjectGridFilterProfile), 3258839490U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectGridFilterConfig, UNetObjectGridFilterConfig::StaticClass, TEXT("UNetObjectGridFilterConfig"), &Z_Registration_Info_UClass_UNetObjectGridFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridFilterConfig), 3536257176U) },
		{ Z_Construct_UClass_UNetObjectGridFilter, UNetObjectGridFilter::StaticClass, TEXT("UNetObjectGridFilter"), &Z_Registration_Info_UClass_UNetObjectGridFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridFilter), 3376392023U) },
		{ Z_Construct_UClass_UNetObjectGridWorldLocFilter, UNetObjectGridWorldLocFilter::StaticClass, TEXT("UNetObjectGridWorldLocFilter"), &Z_Registration_Info_UClass_UNetObjectGridWorldLocFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridWorldLocFilter), 3746041481U) },
		{ Z_Construct_UClass_UNetObjectGridFragmentLocFilter, UNetObjectGridFragmentLocFilter::StaticClass, TEXT("UNetObjectGridFragmentLocFilter"), &Z_Registration_Info_UClass_UNetObjectGridFragmentLocFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridFragmentLocFilter), 4221297770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_2802863456(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
