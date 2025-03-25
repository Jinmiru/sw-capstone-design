// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_CurveSource.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CurveSource() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSource();
ENGINE_API UClass* Z_Construct_UClass_UCurveSourceInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_CurveSource
static_assert(std::is_polymorphic<FAnimNode_CurveSource>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CurveSource cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CurveSource;
class UScriptStruct* FAnimNode_CurveSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CurveSource, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CurveSource"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CurveSource>()
{
	return FAnimNode_CurveSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Supply curves from some external source (e.g. audio) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
		{ "ToolTip", "Supply curves from some external source (e.g. audio)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[] = {
		{ "Category", "CurveSource" },
		{ "Comment", "/** \n\x09 * The binding of the curve source we want to bind to.\n\x09 * We will bind to an object that implements ICurveSourceInterface. First we check \n\x09 * the actor that owns this (if any), then we check each of its components to see if we should\n\x09 * bind to the source that matches this name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The binding of the curve source we want to bind to.\nWe will bind to an object that implements ICurveSourceInterface. First we check\nthe actor that owns this (if any), then we check each of its components to see if we should\nbind to the source that matches this name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "CurveSource" },
		{ "Comment", "/** How much we wan to blend the curve in by */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "How much we wan to blend the curve in by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveSource_MetaData[] = {
		{ "Comment", "/** Our bound source */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CurveSource.h" },
		{ "ToolTip", "Our bound source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CurveSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CurveSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSource, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSource, SourceBinding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBinding_MetaData), NewProp_SourceBinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSource, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_CurveSource = { "CurveSource", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSource, CurveSource), Z_Construct_UClass_UCurveSourceInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveSource_MetaData), NewProp_CurveSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_SourceBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewProp_CurveSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_CurveSource",
	Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::PropPointers),
	sizeof(FAnimNode_CurveSource),
	alignof(FAnimNode_CurveSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSource()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CurveSource.InnerSingleton;
}
// End ScriptStruct FAnimNode_CurveSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CurveSource_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_CurveSource::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CurveSource_Statics::NewStructOps, TEXT("AnimNode_CurveSource"), &Z_Registration_Info_UScriptStruct_AnimNode_CurveSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CurveSource), 3046695614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CurveSource_h_979246618(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CurveSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CurveSource_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
