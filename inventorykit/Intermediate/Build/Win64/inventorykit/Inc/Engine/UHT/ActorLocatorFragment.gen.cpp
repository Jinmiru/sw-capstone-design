// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/UniversalObjectLocators/ActorLocatorFragment.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLocatorFragment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorLocatorFragment();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActorLocatorFragmentResolveParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter;
class UScriptStruct* FActorLocatorFragmentResolveParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorLocatorFragmentResolveParameter"));
	}
	return Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorLocatorFragmentResolveParameter>()
{
	return FActorLocatorFragmentResolveParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * 32 Bytes (40 in-editor).\n */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
		{ "ToolTip", "32 Bytes (40 in-editor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAssetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorLocatorFragmentResolveParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_StreamingWorld = { "StreamingWorld", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorLocatorFragmentResolveParameter, StreamingWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingWorld_MetaData), NewProp_StreamingWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorLocatorFragmentResolveParameter, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerID_MetaData), NewProp_ContainerID_MetaData) }; // 1291227467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_SourceAssetPath = { "SourceAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorLocatorFragmentResolveParameter, SourceAssetPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAssetPath_MetaData), NewProp_SourceAssetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_StreamingWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_ContainerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewProp_SourceAssetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorLocatorFragmentResolveParameter",
	Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::PropPointers),
	sizeof(FActorLocatorFragmentResolveParameter),
	alignof(FActorLocatorFragmentResolveParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.InnerSingleton, Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter.InnerSingleton;
}
// End ScriptStruct FActorLocatorFragmentResolveParameter

// Begin ScriptStruct FActorLocatorFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorLocatorFragment;
class UScriptStruct* FActorLocatorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLocatorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorLocatorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorLocatorFragment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorLocatorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_ActorLocatorFragment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorLocatorFragment>()
{
	return FActorLocatorFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorLocatorFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * 32 Bytes (40 in-editor).\n */" },
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
		{ "ToolTip", "32 Bytes (40 in-editor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalObjectLocators/ActorLocatorFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorLocatorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorLocatorFragment, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorLocatorFragment",
	Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::PropPointers),
	sizeof(FActorLocatorFragment),
	alignof(FActorLocatorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorLocatorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLocatorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorLocatorFragment.InnerSingleton, Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorLocatorFragment.InnerSingleton;
}
// End ScriptStruct FActorLocatorFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorLocatorFragmentResolveParameter::StaticStruct, Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewStructOps, TEXT("ActorLocatorFragmentResolveParameter"), &Z_Registration_Info_UScriptStruct_ActorLocatorFragmentResolveParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorLocatorFragmentResolveParameter), 2117237852U) },
		{ FActorLocatorFragment::StaticStruct, Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::NewStructOps, TEXT("ActorLocatorFragment"), &Z_Registration_Info_UScriptStruct_ActorLocatorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorLocatorFragment), 1842954109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h_3287765713(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
