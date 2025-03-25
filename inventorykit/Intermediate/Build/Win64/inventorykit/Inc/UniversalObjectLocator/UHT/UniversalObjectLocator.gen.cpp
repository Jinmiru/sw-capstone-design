// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocator.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocatorFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalObjectLocator() {}

// Begin Cross Module References
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocator();
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin ScriptStruct FUniversalObjectLocator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniversalObjectLocator;
class UScriptStruct* FUniversalObjectLocator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniversalObjectLocator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocator, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("UniversalObjectLocator"));
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocator.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FUniversalObjectLocator>()
{
	return FUniversalObjectLocator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameFramework" },
		{ "Comment", "/**\n * Universal Object Locators (UOLs) define an address to an object.\n *\n * The address is implemented as a chain of FUniversalObjectLocatorFragments, allowing addressing of objects\n *   that may be nested deeply within levels of externally defined spawn or ownership logic.\n *\n * For example, a Universal Object Locator may reference an Anim Instance within a Skeletal Mesh Actor\n *   is spawned by a Child Actor Component that is spawned by Sequencer. This is impossible with a\n *   regular soft object path, but is perfectly feasible for a UOL.\n *\n * This type is 16 bytes.\n */" },
		{ "HasNativeMake", "/Script/Engine.UniversalObjectLocatorScriptingExtensions.MakeUniversalObjectLocator" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocator.h" },
		{ "ToolTip", "Universal Object Locators (UOLs) define an address to an object.\n\nThe address is implemented as a chain of FUniversalObjectLocatorFragments, allowing addressing of objects\n  that may be nested deeply within levels of externally defined spawn or ownership logic.\n\nFor example, a Universal Object Locator may reference an Anim Instance within a Skeletal Mesh Actor\n  is spawned by a Child Actor Component that is spawned by Sequencer. This is impossible with a\n  regular soft object path, but is perfectly feasible for a UOL.\n\nThis type is 16 bytes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "Comment", "/** Array of relative locators ordered sequentially from outer to inner. The first locator is probably 'absolute' and is resolved with no context, although that is not a hard restriction */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocator.h" },
		{ "ToolTip", "Array of relative locators ordered sequentially from outer to inner. The first locator is probably 'absolute' and is resolved with no context, although that is not a hard restriction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniversalObjectLocator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment, METADATA_PARAMS(0, nullptr) }; // 936531192
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUniversalObjectLocator, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) }; // 936531192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewProp_Fragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"UniversalObjectLocator",
	Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::PropPointers),
	sizeof(FUniversalObjectLocator),
	alignof(FUniversalObjectLocator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocator()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniversalObjectLocator.InnerSingleton, Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocator.InnerSingleton;
}
// End ScriptStruct FUniversalObjectLocator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniversalObjectLocator::StaticStruct, Z_Construct_UScriptStruct_FUniversalObjectLocator_Statics::NewStructOps, TEXT("UniversalObjectLocator"), &Z_Registration_Info_UScriptStruct_UniversalObjectLocator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniversalObjectLocator), 3426119561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h_1886240296(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
