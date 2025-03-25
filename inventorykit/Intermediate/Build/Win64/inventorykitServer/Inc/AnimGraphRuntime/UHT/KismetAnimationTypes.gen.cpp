// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/KismetAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationTypes() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FPositionHistory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PositionHistory;
class UScriptStruct* FPositionHistory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPositionHistory, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PositionHistory"));
	}
	return Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPositionHistory>()
{
	return FPositionHistory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPositionHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""An easing type defining how to ease float values.\n *\x09The FPositionHistory is a container to record position changes\n *\x09over time. This is used to calculate velocity of a bone, for example.\n *\x09The FPositionArray also tracks the last index used to allow for \n *\x09reuse of entries (instead of appending to the array all the time).\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "An easing type defining how to ease float values.\nThe FPositionHistory is a container to record position changes\nover time. This is used to calculate velocity of a bone, for example.\nThe FPositionArray also tracks the last index used to allow for\nreuse of entries (instead of appending to the array all the time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The recorded positions */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The recorded positions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The range for this particular history */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The range for this particular history" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPositionHistory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPositionHistory, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPositionHistory, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPositionHistory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"PositionHistory",
	Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers),
	sizeof(FPositionHistory),
	alignof(FPositionHistory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory()
{
	if (!Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton, Z_Construct_UScriptStruct_FPositionHistory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton;
}
// End ScriptStruct FPositionHistory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPositionHistory::StaticStruct, Z_Construct_UScriptStruct_FPositionHistory_Statics::NewStructOps, TEXT("PositionHistory"), &Z_Registration_Info_UScriptStruct_PositionHistory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPositionHistory), 1598883762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_846521075(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
