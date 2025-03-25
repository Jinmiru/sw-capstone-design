// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SceneViewExtensionContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneViewExtensionContext() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSceneViewExtensionIsActiveFunctor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor;
class UScriptStruct* FSceneViewExtensionIsActiveFunctor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SceneViewExtensionIsActiveFunctor"));
	}
	return Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSceneViewExtensionIsActiveFunctor>()
{
	return FSceneViewExtensionIsActiveFunctor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains the TFunction that determines if a scene view extension should be valid in the given context given for the current frame.\n * It also contains Guid to help identify it, given that we can't directly compare TFunctions.\n */" },
		{ "ModuleRelativePath", "Public/SceneViewExtensionContext.h" },
		{ "ToolTip", "Contains the TFunction that determines if a scene view extension should be valid in the given context given for the current frame.\nIt also contains Guid to help identify it, given that we can't directly compare TFunctions." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneViewExtensionIsActiveFunctor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SceneViewExtensionIsActiveFunctor",
	nullptr,
	0,
	sizeof(FSceneViewExtensionIsActiveFunctor),
	alignof(FSceneViewExtensionIsActiveFunctor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor()
{
	if (!Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.InnerSingleton, Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor.InnerSingleton;
}
// End ScriptStruct FSceneViewExtensionIsActiveFunctor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneViewExtensionContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSceneViewExtensionIsActiveFunctor::StaticStruct, Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor_Statics::NewStructOps, TEXT("SceneViewExtensionIsActiveFunctor"), &Z_Registration_Info_UScriptStruct_SceneViewExtensionIsActiveFunctor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneViewExtensionIsActiveFunctor), 1018436436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneViewExtensionContext_h_2046322775(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneViewExtensionContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneViewExtensionContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
