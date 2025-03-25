// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_RelevantAssetPlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RelevantAssetPlayerBase() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_AssetPlayerRelevancyBase
static_assert(std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_AssetPlayerRelevancyBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase;
class UScriptStruct* FAnimNode_AssetPlayerRelevancyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerRelevancyBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_AssetPlayerRelevancyBase>()
{
	return FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Base class for any asset playing anim node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_RelevantAssetPlayerBase.h" },
		{ "ToolTip", "Base class for any asset playing anim node" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerRelevancyBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_AssetPlayerRelevancyBase",
	nullptr,
	0,
	sizeof(FAnimNode_AssetPlayerRelevancyBase),
	alignof(FAnimNode_AssetPlayerRelevancyBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_AssetPlayerRelevancyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_AssetPlayerRelevancyBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::NewStructOps, TEXT("AnimNode_AssetPlayerRelevancyBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AssetPlayerRelevancyBase), 2632595318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_2666972358(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
