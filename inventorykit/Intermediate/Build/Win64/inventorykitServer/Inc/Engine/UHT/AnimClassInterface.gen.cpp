// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface();
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimBlueprintFunction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintFunction;
class UScriptStruct* FAnimBlueprintFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintFunction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintFunction>()
{
	return FAnimBlueprintFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the input and output of an anim blueprint 'function' */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Describes the input and output of an anim blueprint 'function'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The name of the function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Comment", "/** The group of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The group of the function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeIndex_MetaData[] = {
		{ "Comment", "/** Index of the output node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Index of the output node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** The names of the input poses */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The names of the input poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeIndices_MetaData[] = {
		{ "Comment", "/** Indices of the input nodes */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Indices of the input nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImplemented_MetaData[] = {
		{ "Comment", "/** Whether this function is actually implemented by this class - it could just be a stub */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Whether this function is actually implemented by this class - it could just be a stub" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputPoseNodeIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputPoseNodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeIndices;
	static void NewProp_bImplemented_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImplemented;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex = { "OutputPoseNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBlueprintFunction, OutputPoseNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPoseNodeIndex_MetaData), NewProp_OutputPoseNodeIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPoseNames_MetaData), NewProp_InputPoseNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPoseNodeIndices_MetaData), NewProp_InputPoseNodeIndices_MetaData) };
void Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit(void* Obj)
{
	((FAnimBlueprintFunction*)Obj)->bImplemented = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented = { "bImplemented", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimBlueprintFunction), &Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImplemented_MetaData), NewProp_bImplemented_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimBlueprintFunction",
	Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers),
	sizeof(FAnimBlueprintFunction),
	alignof(FAnimBlueprintFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton;
}
// End ScriptStruct FAnimBlueprintFunction

// Begin ScriptStruct FCachedPoseIndices
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedPoseIndices;
class UScriptStruct* FCachedPoseIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPoseIndices, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedPoseIndices"));
	}
	return Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedPoseIndices>()
{
	return FCachedPoseIndices::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper struct as we dont support nested containers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Wrapper struct as we dont support nested containers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseNodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseNodeIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPoseIndices>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedPoseIndices, OrderedSavedPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderedSavedPoseNodeIndices_MetaData), NewProp_OrderedSavedPoseNodeIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CachedPoseIndices",
	Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers),
	sizeof(FCachedPoseIndices),
	alignof(FCachedPoseIndices),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices()
{
	if (!Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton;
}
// End ScriptStruct FCachedPoseIndices

// Begin ScriptStruct FGraphAssetPlayerInformation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation;
class UScriptStruct* FGraphAssetPlayerInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GraphAssetPlayerInformation"));
	}
	return Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGraphAssetPlayerInformation>()
{
	return FGraphAssetPlayerInformation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphAssetPlayerInformation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphAssetPlayerInformation, PlayerNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNodeIndices_MetaData), NewProp_PlayerNodeIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GraphAssetPlayerInformation",
	Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers),
	sizeof(FGraphAssetPlayerInformation),
	alignof(FGraphAssetPlayerInformation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation()
{
	if (!Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton;
}
// End ScriptStruct FGraphAssetPlayerInformation

// Begin ScriptStruct FAnimGraphBlendOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions;
class UScriptStruct* FAnimGraphBlendOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphBlendOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGraphBlendOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGraphBlendOptions>()
{
	return FAnimGraphBlendOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Blending options for animation graphs in Linked Animation Blueprints. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Blending options for animation graphs in Linked Animation Blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\n\x09* To blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\nTo blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInProfile_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Optional blend profile to use when blending this graph in (if BlendInTime > 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Optional blend profile to use when blending this graph in (if BlendInTime > 0)" },
		{ "UseAsBlendProfile", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\n\x09* To blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\nTo blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutProfile_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Optional blend profile to use when blending this graph out (if BlendOutTime > 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Optional blend profile to use when blending this graph out (if BlendOutTime > 0)" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendInProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendOutProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphBlendOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInTime_MetaData), NewProp_BlendInTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile = { "BlendInProfile", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendInProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInProfile_MetaData), NewProp_BlendInProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTime_MetaData), NewProp_BlendOutTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile = { "BlendOutProfile", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendOutProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutProfile_MetaData), NewProp_BlendOutProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimGraphBlendOptions",
	Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers),
	sizeof(FAnimGraphBlendOptions),
	alignof(FAnimGraphBlendOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton, Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton;
}
// End ScriptStruct FAnimGraphBlendOptions

// Begin Interface UAnimClassInterface
void UAnimClassInterface::StaticRegisterNativesUAnimClassInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimClassInterface);
UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister()
{
	return UAnimClassInterface::StaticClass();
}
struct Z_Construct_UClass_UAnimClassInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimClassInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimClassInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams = {
	&UAnimClassInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimClassInterface()
{
	if (!Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton, Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimClassInterface>()
{
	return UAnimClassInterface::StaticClass();
}
UAnimClassInterface::UAnimClassInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassInterface);
UAnimClassInterface::~UAnimClassInterface() {}
// End Interface UAnimClassInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimBlueprintFunction::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps, TEXT("AnimBlueprintFunction"), &Z_Registration_Info_UScriptStruct_AnimBlueprintFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintFunction), 3199087362U) },
		{ FCachedPoseIndices::StaticStruct, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps, TEXT("CachedPoseIndices"), &Z_Registration_Info_UScriptStruct_CachedPoseIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedPoseIndices), 1211653652U) },
		{ FGraphAssetPlayerInformation::StaticStruct, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewStructOps, TEXT("GraphAssetPlayerInformation"), &Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphAssetPlayerInformation), 166708636U) },
		{ FAnimGraphBlendOptions::StaticStruct, Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewStructOps, TEXT("AnimGraphBlendOptions"), &Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGraphBlendOptions), 3713033072U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimClassInterface, UAnimClassInterface::StaticClass, TEXT("UAnimClassInterface"), &Z_Registration_Info_UClass_UAnimClassInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimClassInterface), 5696892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_4266931556(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
