// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendProfile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendProfileMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EBlendProfileMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendProfileMode;
static UEnum* EBlendProfileMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendProfileMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendProfileMode"));
	}
	return Z_Registration_Info_UEnum_EBlendProfileMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlendProfileMode>()
{
	return EBlendProfileMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlendProfileMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlendMask.Comment", "// Used for blend masks. Per bone alpha\n" },
		{ "BlendMask.Hidden", "" },
		{ "BlendMask.Name", "EBlendProfileMode::BlendMask" },
		{ "BlendMask.ToolTip", "Used for blend masks. Per bone alpha" },
		{ "Comment", "/** The mode in which the blend profile should be applied. */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "TimeFactor.Comment", "// The bone's transition time is a factor based on the transition time. \n// For example 0.5 means it takes half the time of the transition.\n// Values should be between 0 and 1. They will be clamped if they go out of this range.\n// A bone value of 0 means the bone will instantly transition into the target state.\n" },
		{ "TimeFactor.Name", "EBlendProfileMode::TimeFactor" },
		{ "TimeFactor.ToolTip", "The bone's transition time is a factor based on the transition time.\nFor example 0.5 means it takes half the time of the transition.\nValues should be between 0 and 1. They will be clamped if they go out of this range.\nA bone value of 0 means the bone will instantly transition into the target state." },
		{ "ToolTip", "The mode in which the blend profile should be applied." },
		{ "WeightFactor.Comment", "// The bone's transition weight is multiplied by this factor.\n// For example 2.0 means the bone's blend weight is twice as high as the transition's blend weight.\n// Values should typically be equal or greater than 1.0.\n// If you want certain bones to instantly transition into the target state\n// the Time Factor based method might be a better choice.\n" },
		{ "WeightFactor.Name", "EBlendProfileMode::WeightFactor" },
		{ "WeightFactor.ToolTip", "The bone's transition weight is multiplied by this factor.\nFor example 2.0 means the bone's blend weight is twice as high as the transition's blend weight.\nValues should typically be equal or greater than 1.0.\nIf you want certain bones to instantly transition into the target state\nthe Time Factor based method might be a better choice." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlendProfileMode::TimeFactor", (int64)EBlendProfileMode::TimeFactor },
		{ "EBlendProfileMode::WeightFactor", (int64)EBlendProfileMode::WeightFactor },
		{ "EBlendProfileMode::BlendMask", (int64)EBlendProfileMode::BlendMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlendProfileMode",
	"EBlendProfileMode",
	Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlendProfileMode()
{
	if (!Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton, Z_Construct_UEnum_Engine_EBlendProfileMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlendProfileMode.InnerSingleton;
}
// End Enum EBlendProfileMode

// Begin ScriptStruct FBlendProfileBoneEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry;
class UScriptStruct* FBlendProfileBoneEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendProfileBoneEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendProfileBoneEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendProfileBoneEntry>()
{
	return FBlendProfileBoneEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A single entry for a blend scale within a profile, mapping a bone to a blendscale */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A single entry for a blend scale within a profile, mapping a bone to a blendscale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendScale_MetaData[] = {
		{ "Category", "BoneSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendProfileBoneEntry, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReference_MetaData), NewProp_BoneReference_MetaData) }; // 4218265988
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale = { "BlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendProfileBoneEntry, BlendScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendScale_MetaData), NewProp_BlendScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BoneReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewProp_BlendScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlendProfileBoneEntry",
	Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::PropPointers),
	sizeof(FBlendProfileBoneEntry),
	alignof(FBlendProfileBoneEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry()
{
	if (!Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry.InnerSingleton;
}
// End ScriptStruct FBlendProfileBoneEntry

// Begin Class UBlendProfile
void UBlendProfile::StaticRegisterNativesUBlendProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendProfile);
UClass* Z_Construct_UClass_UBlendProfile_NoRegister()
{
	return UBlendProfile::StaticClass();
}
struct Z_Construct_UClass_UBlendProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A blend profile is a set of per-bone scales that can be used in transitions and blend lists\n *  to tweak the weights of specific bones. The scales are applied to the normal weight for that bone\n */" },
		{ "IncludePath", "Animation/BlendProfile.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "A blend profile is a set of per-bone scales that can be used in transitions and blend lists\nto tweak the weights of specific bones. The scales are applied to the normal weight for that bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSkeleton_MetaData[] = {
		{ "Comment", "// The skeleton that owns this profile\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "The skeleton that owns this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileEntries_MetaData[] = {
		{ "Comment", "// List of blend scale entries\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "List of blend scale entries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Comment", "// Blend Profile Mode. Read EBlendProfileMode for more details\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
		{ "ToolTip", "Blend Profile Mode. Read EBlendProfileMode for more details" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileEntries;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton = { "OwningSkeleton", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlendProfile, OwningSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSkeleton_MetaData), NewProp_OwningSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner = { "ProfileEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlendProfileBoneEntry, METADATA_PARAMS(0, nullptr) }; // 975579518
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries = { "ProfileEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlendProfile, ProfileEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileEntries_MetaData), NewProp_ProfileEntries_MetaData) }; // 975579518
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlendProfile, Mode), Z_Construct_UEnum_Engine_EBlendProfileMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 166104107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_OwningSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_ProfileEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendProfile_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlendProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendProfile_Statics::ClassParams = {
	&UBlendProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlendProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendProfile()
{
	if (!Z_Registration_Info_UClass_UBlendProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendProfile.OuterSingleton, Z_Construct_UClass_UBlendProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlendProfile>()
{
	return UBlendProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendProfile);
UBlendProfile::~UBlendProfile() {}
// End Class UBlendProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlendProfileMode_StaticEnum, TEXT("EBlendProfileMode"), &Z_Registration_Info_UEnum_EBlendProfileMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 166104107U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendProfileBoneEntry::StaticStruct, Z_Construct_UScriptStruct_FBlendProfileBoneEntry_Statics::NewStructOps, TEXT("BlendProfileBoneEntry"), &Z_Registration_Info_UScriptStruct_BlendProfileBoneEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendProfileBoneEntry), 975579518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendProfile, UBlendProfile::StaticClass, TEXT("UBlendProfile"), &Z_Registration_Info_UClass_UBlendProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendProfile), 1021667328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_2831908760(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendProfile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
