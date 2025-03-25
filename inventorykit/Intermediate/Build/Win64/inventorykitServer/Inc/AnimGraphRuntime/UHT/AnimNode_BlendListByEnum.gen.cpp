// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByEnum() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendListByEnum
static_assert(std::is_polymorphic<FAnimNode_BlendListByEnum>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FAnimNode_BlendListByEnum cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum;
class UScriptStruct* FAnimNode_BlendListByEnum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByEnum"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByEnum>()
{
	return FAnimNode_BlendListByEnum::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Blend List by Enum, it changes based on enum input that enters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "ToolTip", "Blend List by Enum, it changes based on enum input that enters" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumToPoseIndex_MetaData[] = {
		{ "Comment", "// Mapping from enum value to BlendPose index; there will be one entry per entry in the enum; entries out of range always map to pose index 0\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "ToolTip", "Mapping from enum value to BlendPose index; there will be one entry per entry in the enum; entries out of range always map to pose index 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEnumValue_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// The currently selected pose (as an enum value)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByEnum.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The currently selected pose (as an enum value)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnumToPoseIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumToPoseIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveEnumValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByEnum>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_Inner = { "EnumToPoseIndex", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex = { "EnumToPoseIndex", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListByEnum, EnumToPoseIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumToPoseIndex_MetaData), NewProp_EnumToPoseIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue = { "ActiveEnumValue", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListByEnum, ActiveEnumValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEnumValue_MetaData), NewProp_ActiveEnumValue_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_EnumToPoseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewProp_ActiveEnumValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
	&NewStructOps,
	"AnimNode_BlendListByEnum",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::PropPointers), 0),
	sizeof(FAnimNode_BlendListByEnum),
	alignof(FAnimNode_BlendListByEnum),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendListByEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByEnum_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendListByEnum::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum_Statics::NewStructOps, TEXT("AnimNode_BlendListByEnum"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListByEnum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListByEnum), 3955162916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByEnum_h_2918448237(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByEnum_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
