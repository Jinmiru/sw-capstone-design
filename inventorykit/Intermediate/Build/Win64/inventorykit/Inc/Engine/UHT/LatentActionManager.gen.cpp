// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentActionManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FLatentActionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LatentActionInfo;
class UScriptStruct* FLatentActionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionInfo>()
{
	return FLatentActionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLatentActionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Latent action info\n" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Latent action info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Linkage_MetaData[] = {
		{ "Comment", "/** The resume point within the function to execute */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "NeedsLatentFixup", "TRUE" },
		{ "ToolTip", "The resume point within the function to execute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "Comment", "/** the UUID for this action */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "the UUID for this action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFunction_MetaData[] = {
		{ "Comment", "/** The function to execute. */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The function to execute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackTarget_MetaData[] = {
		{ "Comment", "/** Object to execute the function on. */" },
		{ "LatentCallbackTarget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Object to execute the function on." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Linkage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionFunction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallbackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage = { "Linkage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLatentActionInfo, Linkage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Linkage_MetaData), NewProp_Linkage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLatentActionInfo, UUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction = { "ExecutionFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLatentActionInfo, ExecutionFunction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFunction_MetaData), NewProp_ExecutionFunction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget = { "CallbackTarget", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLatentActionInfo, CallbackTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackTarget_MetaData), NewProp_CallbackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LatentActionInfo",
	Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers),
	sizeof(FLatentActionInfo),
	alignof(FLatentActionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton, Z_Construct_UScriptStruct_FLatentActionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton;
}
// End ScriptStruct FLatentActionInfo

// Begin ScriptStruct FLatentActionManager
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LatentActionManager;
class UScriptStruct* FLatentActionManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionManager, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionManager"));
	}
	return Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionManager>()
{
	return FLatentActionManager::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLatentActionManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// The latent action manager handles all pending latent actions for a single world\n" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The latent action manager handles all pending latent actions for a single world" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionManager>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionManager_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LatentActionManager",
	nullptr,
	0,
	sizeof(FLatentActionManager),
	alignof(FLatentActionManager),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton, Z_Construct_UScriptStruct_FLatentActionManager_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton;
}
// End ScriptStruct FLatentActionManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLatentActionInfo::StaticStruct, Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewStructOps, TEXT("LatentActionInfo"), &Z_Registration_Info_UScriptStruct_LatentActionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLatentActionInfo), 1503398820U) },
		{ FLatentActionManager::StaticStruct, Z_Construct_UScriptStruct_FLatentActionManager_Statics::NewStructOps, TEXT("LatentActionManager"), &Z_Registration_Info_UScriptStruct_LatentActionManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLatentActionManager), 81303347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_2344981563(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
