// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Root() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_Root
static_assert(std::is_polymorphic<FAnimNode_Root>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Root cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Root;
class UScriptStruct* FAnimNode_Root::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Root"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Root>()
{
	return FAnimNode_Root::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Root_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of an animation tree (sink)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "Root node of an animation tree (sink)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** The name of this root node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "The name of this root node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerGroup_MetaData[] = {
		{ "Comment", "/** The group of this root node, used to group this output with others when used in a layer. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "The group of this root node, used to group this output with others when used in a layer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please, use LayerGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerGroup;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Root>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Root, Result), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1074011079
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Root, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_LayerGroup = { "LayerGroup", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Root, LayerGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerGroup_MetaData), NewProp_LayerGroup_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Root, Group_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_LayerGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_Root",
	Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers),
	sizeof(FAnimNode_Root),
	alignof(FAnimNode_Root),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Root_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Root_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton;
}
// End ScriptStruct FAnimNode_Root

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_Root::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewStructOps, TEXT("AnimNode_Root"), &Z_Registration_Info_UScriptStruct_AnimNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Root), 1318469072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_2055746153(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
