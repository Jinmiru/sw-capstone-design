// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_MakeDynamicAdditive.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MakeDynamicAdditive() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_MakeDynamicAdditive
static_assert(std::is_polymorphic<FAnimNode_MakeDynamicAdditive>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MakeDynamicAdditive cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive;
class UScriptStruct* FAnimNode_MakeDynamicAdditive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MakeDynamicAdditive"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MakeDynamicAdditive>()
{
	return FAnimNode_MakeDynamicAdditive::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// Reference pose for additive delta calculation\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Reference pose for additive delta calculation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// Pose to make additive\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Pose to make additive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceAdditive_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Do additive delta calculation in mesh space\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Do additive delta calculation in mesh space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Additive;
	static void NewProp_bMeshSpaceAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceAdditive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MakeDynamicAdditive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Additive_MetaData), NewProp_Additive_MetaData) }; // 1074011079
void Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_SetBit(void* Obj)
{
	((FAnimNode_MakeDynamicAdditive*)Obj)->bMeshSpaceAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive = { "bMeshSpaceAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MakeDynamicAdditive), &Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshSpaceAdditive_MetaData), NewProp_bMeshSpaceAdditive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_MakeDynamicAdditive",
	Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers),
	sizeof(FAnimNode_MakeDynamicAdditive),
	alignof(FAnimNode_MakeDynamicAdditive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive.InnerSingleton;
}
// End ScriptStruct FAnimNode_MakeDynamicAdditive

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MakeDynamicAdditive_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_MakeDynamicAdditive::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewStructOps, TEXT("AnimNode_MakeDynamicAdditive"), &Z_Registration_Info_UScriptStruct_AnimNode_MakeDynamicAdditive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MakeDynamicAdditive), 726357899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MakeDynamicAdditive_h_137992303(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MakeDynamicAdditive_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MakeDynamicAdditive_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
