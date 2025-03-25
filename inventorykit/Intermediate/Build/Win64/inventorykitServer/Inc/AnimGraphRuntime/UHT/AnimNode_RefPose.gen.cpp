// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RefPose() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum ERefPoseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERefPoseType;
static UEnum* ERefPoseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERefPoseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERefPoseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERefPoseType"));
	}
	return Z_Registration_Info_UEnum_ERefPoseType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERefPoseType>()
{
	return ERefPoseType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EIT_Additive.Name", "EIT_Additive" },
		{ "EIT_LocalSpace.Name", "EIT_LocalSpace" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIT_LocalSpace", (int64)EIT_LocalSpace },
		{ "EIT_Additive", (int64)EIT_Additive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"ERefPoseType",
	"ERefPoseType",
	Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType()
{
	if (!Z_Registration_Info_UEnum_ERefPoseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERefPoseType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERefPoseType.InnerSingleton;
}
// End Enum ERefPoseType

// Begin ScriptStruct FAnimNode_RefPose
static_assert(std::is_polymorphic<FAnimNode_RefPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RefPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RefPose;
class UScriptStruct* FAnimNode_RefPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RefPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RefPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RefPose, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RefPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RefPose.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RefPose>()
{
	return FAnimNode_RefPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// RefPose pose nodes - ref pose or additive RefPose pose\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
		{ "ToolTip", "RefPose pose nodes - ref pose or additive RefPose pose" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[] = {
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefPoseType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RefPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType = { "RefPoseType", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RefPose, RefPoseType), Z_Construct_UEnum_AnimGraphRuntime_ERefPoseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefPoseType_MetaData), NewProp_RefPoseType_MetaData) }; // 2410029393
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewProp_RefPoseType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_RefPose",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::PropPointers), 0),
	sizeof(FAnimNode_RefPose),
	alignof(FAnimNode_RefPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RefPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RefPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RefPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_RefPose

// Begin ScriptStruct FAnimNode_MeshSpaceRefPose
static_assert(std::is_polymorphic<FAnimNode_MeshSpaceRefPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MeshSpaceRefPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose;
class UScriptStruct* FAnimNode_MeshSpaceRefPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MeshSpaceRefPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MeshSpaceRefPose>()
{
	return FAnimNode_MeshSpaceRefPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RefPose.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MeshSpaceRefPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_MeshSpaceRefPose",
	nullptr,
	0,
	sizeof(FAnimNode_MeshSpaceRefPose),
	alignof(FAnimNode_MeshSpaceRefPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_MeshSpaceRefPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERefPoseType_StaticEnum, TEXT("ERefPoseType"), &Z_Registration_Info_UEnum_ERefPoseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2410029393U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RefPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics::NewStructOps, TEXT("AnimNode_RefPose"), &Z_Registration_Info_UScriptStruct_AnimNode_RefPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RefPose), 4087980649U) },
		{ FAnimNode_MeshSpaceRefPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics::NewStructOps, TEXT("AnimNode_MeshSpaceRefPose"), &Z_Registration_Info_UScriptStruct_AnimNode_MeshSpaceRefPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MeshSpaceRefPose), 2964350477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_2660290956(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
