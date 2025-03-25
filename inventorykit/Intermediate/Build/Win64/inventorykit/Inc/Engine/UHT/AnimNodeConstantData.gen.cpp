// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNodeConstantData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeConstantData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeConstantData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNodeConstantData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeConstantData;
class UScriptStruct* FAnimNodeConstantData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeConstantData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeConstantData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeConstantData>()
{
	return FAnimNodeConstantData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Any constant class data an anim node uses should be derived from this type.\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "Any constant class data an anim node uses should be derived from this type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimClassInterface_MetaData[] = {
		{ "Comment", "/** The class we are part of */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "The class we are part of" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The index of the node for this constant data block in the class that it is held in. \n\x09 * INDEX_NONE if this node is not in a generated class or is per-instance data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "The index of the node for this constant data block in the class that it is held in.\nINDEX_NONE if this node is not in a generated class or is per-instance data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimClassInterface;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeConstantData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface = { "AnimClassInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeConstantData, AnimClassInterface), Z_Construct_UClass_UAnimClassInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimClassInterface_MetaData), NewProp_AnimClassInterface_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNodeConstantData, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNodeConstantData",
	Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers),
	sizeof(FAnimNodeConstantData),
	alignof(FAnimNodeConstantData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeConstantData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton;
}
// End ScriptStruct FAnimNodeConstantData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNodeConstantData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewStructOps, TEXT("AnimNodeConstantData"), &Z_Registration_Info_UScriptStruct_AnimNodeConstantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeConstantData), 1543167562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_510521360(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
