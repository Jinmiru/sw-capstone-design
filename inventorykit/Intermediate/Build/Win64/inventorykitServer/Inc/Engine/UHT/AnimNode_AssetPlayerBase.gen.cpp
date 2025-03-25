// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_AssetPlayerBase
static_assert(std::is_polymorphic<FAnimNode_AssetPlayerBase>() == std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>(), "USTRUCT FAnimNode_AssetPlayerBase cannot be polymorphic unless super FAnimNode_AssetPlayerRelevancyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase;
class UScriptStruct* FAnimNode_AssetPlayerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_AssetPlayerBase>()
{
	return FAnimNode_AssetPlayerBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Base class for any asset playing anim node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Base class for any asset playing anim node" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupScope_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Last encountered blendweight for this node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Last encountered blendweight for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalTimeAccumulator_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Accumulated time used to reference the asset in this node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Accumulated time used to reference the asset in this node" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupScope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupScope;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InternalTimeAccumulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupIndex_MetaData), NewProp_GroupIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope = { "GroupScope", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupScope_DEPRECATED), Z_Construct_UEnum_Engine_EAnimSyncGroupScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupScope_MetaData), NewProp_GroupScope_MetaData) }; // 1318482331
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator = { "InternalTimeAccumulator", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, InternalTimeAccumulator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalTimeAccumulator_MetaData), NewProp_InternalTimeAccumulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
	&NewStructOps,
	"AnimNode_AssetPlayerBase",
	Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers),
	sizeof(FAnimNode_AssetPlayerBase),
	alignof(FAnimNode_AssetPlayerBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_AssetPlayerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_AssetPlayerBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewStructOps, TEXT("AnimNode_AssetPlayerBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AssetPlayerBase), 198187710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_3769728992(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
