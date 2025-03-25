// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/UniversalObjectLocators/AnimInstanceLocatorFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceLocatorFragment() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAnimInstanceLocatorFragmentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType;
static UEnum* EAnimInstanceLocatorFragmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimInstanceLocatorFragmentType"));
	}
	return Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimInstanceLocatorFragmentType>()
{
	return EAnimInstanceLocatorFragmentType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimInstance.Name", "EAnimInstanceLocatorFragmentType::AnimInstance" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/AnimInstanceLocatorFragment.h" },
		{ "PostProcessAnimInstance.Name", "EAnimInstanceLocatorFragmentType::PostProcessAnimInstance" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimInstanceLocatorFragmentType::AnimInstance", (int64)EAnimInstanceLocatorFragmentType::AnimInstance },
		{ "EAnimInstanceLocatorFragmentType::PostProcessAnimInstance", (int64)EAnimInstanceLocatorFragmentType::PostProcessAnimInstance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimInstanceLocatorFragmentType",
	"EAnimInstanceLocatorFragmentType",
	Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType()
{
	if (!Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton;
}
// End Enum EAnimInstanceLocatorFragmentType

// Begin ScriptStruct FAnimInstanceLocatorFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment;
class UScriptStruct* FAnimInstanceLocatorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceLocatorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInstanceLocatorFragment>()
{
	return FAnimInstanceLocatorFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * 32 Bytes (40 in-editor).\n */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/AnimInstanceLocatorFragment.h" },
		{ "ToolTip", "32 Bytes (40 in-editor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/AnimInstanceLocatorFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceLocatorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimInstanceLocatorFragment, Type), Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2483956797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimInstanceLocatorFragment",
	Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::PropPointers),
	sizeof(FAnimInstanceLocatorFragment),
	alignof(FAnimInstanceLocatorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.InnerSingleton, Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment.InnerSingleton;
}
// End ScriptStruct FAnimInstanceLocatorFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimInstanceLocatorFragmentType_StaticEnum, TEXT("EAnimInstanceLocatorFragmentType"), &Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2483956797U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimInstanceLocatorFragment::StaticStruct, Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewStructOps, TEXT("AnimInstanceLocatorFragment"), &Z_Registration_Info_UScriptStruct_AnimInstanceLocatorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInstanceLocatorFragment), 3924848686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_4136786077(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
