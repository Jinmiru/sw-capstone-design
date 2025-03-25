// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UniversalObjectLocator/Public/UniversalObjectLocatorFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorFragment() {}

// Begin Cross Module References
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload();
UNIVERSALOBJECTLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment();
UPackage* Z_Construct_UPackage__Script_UniversalObjectLocator();
// End Cross Module References

// Begin ScriptStruct FUniversalObjectLocatorFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment;
class UScriptStruct* FUniversalObjectLocatorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("UniversalObjectLocatorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FUniversalObjectLocatorFragment>()
{
	return FUniversalObjectLocatorFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Universal Object Locator (UOL) Fragments provide an extensible mechanism for referencing permanent, transient\n *   or dynamically created objects relative to an external context. UOLs comprise zero or more nested fragments.\n * \n * Creation and resolution of a fragment requires a context to be provided;\n *   normally this will be the object on which the UOL exists as a property.\n *\n * The way in which the object is referenced is defined by globally registered 'FragmentTypes' \n *   (See IUniversalObjectLocatorModule::RegisterFragmentType). Each FragmentType can be thought of as somewhat\n *   equivalent to a www URI fragment type, though the 'path' is not necessarily just a string, but includes\n *   support for the full set of Engine Property types.\n * \n * The type is implemented as a type-erased payload block, a fragment type handle and some internal flags.\n * Payloads will be allocated using the inline memory if alignment and size constraints allow, but\n *   will fall back to a heap allocation if necessary. Allocation should be avoided by keeping payload\n *   types small.\n *\n * Aligned to 8 bytes, 32 (runtime) or 64 (editor) bytes big.\n */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocatorFragment.h" },
		{ "ToolTip", "Universal Object Locator (UOL) Fragments provide an extensible mechanism for referencing permanent, transient\n  or dynamically created objects relative to an external context. UOLs comprise zero or more nested fragments.\n\nCreation and resolution of a fragment requires a context to be provided;\n  normally this will be the object on which the UOL exists as a property.\n\nThe way in which the object is referenced is defined by globally registered 'FragmentTypes'\n  (See IUniversalObjectLocatorModule::RegisterFragmentType). Each FragmentType can be thought of as somewhat\n  equivalent to a www URI fragment type, though the 'path' is not necessarily just a string, but includes\n  support for the full set of Engine Property types.\n\nThe type is implemented as a type-erased payload block, a fragment type handle and some internal flags.\nPayloads will be allocated using the inline memory if alignment and size constraints allow, but\n  will fall back to a heap allocation if necessary. Allocation should be avoided by keeping payload\n  types small.\n\nAligned to 8 bytes, 32 (runtime) or 64 (editor) bytes big." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniversalObjectLocatorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"UniversalObjectLocatorFragment",
	nullptr,
	0,
	sizeof(FUniversalObjectLocatorFragment),
	alignof(FUniversalObjectLocatorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.InnerSingleton, Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment.InnerSingleton;
}
// End ScriptStruct FUniversalObjectLocatorFragment

// Begin ScriptStruct FUniversalObjectLocatorEmptyPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload;
class UScriptStruct* FUniversalObjectLocatorEmptyPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload, (UObject*)Z_Construct_UPackage__Script_UniversalObjectLocator(), TEXT("UniversalObjectLocatorEmptyPayload"));
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.OuterSingleton;
}
template<> UNIVERSALOBJECTLOCATOR_API UScriptStruct* StaticStruct<FUniversalObjectLocatorEmptyPayload>()
{
	return FUniversalObjectLocatorEmptyPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Empty struct type used for deserializing unknown fragment type payloads */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocatorFragment.h" },
		{ "ToolTip", "Empty struct type used for deserializing unknown fragment type payloads" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniversalObjectLocatorEmptyPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UniversalObjectLocator,
	nullptr,
	&NewStructOps,
	"UniversalObjectLocatorEmptyPayload",
	nullptr,
	0,
	sizeof(FUniversalObjectLocatorEmptyPayload),
	alignof(FUniversalObjectLocatorEmptyPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.InnerSingleton, Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload.InnerSingleton;
}
// End ScriptStruct FUniversalObjectLocatorEmptyPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUniversalObjectLocatorFragment::StaticStruct, Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment_Statics::NewStructOps, TEXT("UniversalObjectLocatorFragment"), &Z_Registration_Info_UScriptStruct_UniversalObjectLocatorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniversalObjectLocatorFragment), 936531192U) },
		{ FUniversalObjectLocatorEmptyPayload::StaticStruct, Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload_Statics::NewStructOps, TEXT("UniversalObjectLocatorEmptyPayload"), &Z_Registration_Info_UScriptStruct_UniversalObjectLocatorEmptyPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniversalObjectLocatorEmptyPayload), 276133386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h_2039257840(TEXT("/Script/UniversalObjectLocator"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UniversalObjectLocator_Public_UniversalObjectLocatorFragment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
