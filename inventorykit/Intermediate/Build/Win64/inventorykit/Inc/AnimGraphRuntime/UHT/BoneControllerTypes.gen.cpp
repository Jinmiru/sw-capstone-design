// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/BoneControllerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneControllerTypes() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWarpingVectorValue();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EWarpingEvaluationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpingEvaluationMode;
static UEnum* EWarpingEvaluationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EWarpingEvaluationMode"));
	}
	return Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EWarpingEvaluationMode>()
{
	return EWarpingEvaluationMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Specifies the evaluation mode of an animation warping node\n" },
		{ "Graph.Comment", "// Animation warping evaluation parameters are graph-driven. This means some\n// properties of the node are automatically computed using the accumulated \n// root motion delta contribution of the animation graph leading into it.\n" },
		{ "Graph.Name", "EWarpingEvaluationMode::Graph" },
		{ "Graph.ToolTip", "Animation warping evaluation parameters are graph-driven. This means some\nproperties of the node are automatically computed using the accumulated\nroot motion delta contribution of the animation graph leading into it." },
		{ "Manual.Comment", "// Animation warping evaluation parameters are driven by user settings.\n" },
		{ "Manual.Name", "EWarpingEvaluationMode::Manual" },
		{ "Manual.ToolTip", "Animation warping evaluation parameters are driven by user settings." },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "Specifies the evaluation mode of an animation warping node" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarpingEvaluationMode::Manual", (int64)EWarpingEvaluationMode::Manual },
		{ "EWarpingEvaluationMode::Graph", (int64)EWarpingEvaluationMode::Graph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EWarpingEvaluationMode",
	"EWarpingEvaluationMode",
	Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode()
{
	if (!Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton;
}
// End Enum EWarpingEvaluationMode

// Begin Enum EWarpingVectorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpingVectorMode;
static UEnum* EWarpingVectorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EWarpingVectorMode"));
	}
	return Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EWarpingVectorMode>()
{
	return EWarpingVectorMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorSpaceVector.Comment", "// Actor-space input vector\n" },
		{ "ActorSpaceVector.Name", "EWarpingVectorMode::ActorSpaceVector" },
		{ "ActorSpaceVector.ToolTip", "Actor-space input vector" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// The supported spaces of a corresponding input vector value\n" },
		{ "ComponentSpaceVector.Comment", "// Component-space input vector\n" },
		{ "ComponentSpaceVector.Name", "EWarpingVectorMode::ComponentSpaceVector" },
		{ "ComponentSpaceVector.ToolTip", "Component-space input vector" },
		{ "IKFootRootLocalSpaceVector.Comment", "// IK Foot Root relative local-space input vector\n" },
		{ "IKFootRootLocalSpaceVector.Name", "EWarpingVectorMode::IKFootRootLocalSpaceVector" },
		{ "IKFootRootLocalSpaceVector.ToolTip", "IK Foot Root relative local-space input vector" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "The supported spaces of a corresponding input vector value" },
		{ "WorldSpaceVector.Comment", "// World-space input vector\n" },
		{ "WorldSpaceVector.Name", "EWarpingVectorMode::WorldSpaceVector" },
		{ "WorldSpaceVector.ToolTip", "World-space input vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarpingVectorMode::ComponentSpaceVector", (int64)EWarpingVectorMode::ComponentSpaceVector },
		{ "EWarpingVectorMode::ActorSpaceVector", (int64)EWarpingVectorMode::ActorSpaceVector },
		{ "EWarpingVectorMode::WorldSpaceVector", (int64)EWarpingVectorMode::WorldSpaceVector },
		{ "EWarpingVectorMode::IKFootRootLocalSpaceVector", (int64)EWarpingVectorMode::IKFootRootLocalSpaceVector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EWarpingVectorMode",
	"EWarpingVectorMode",
	Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode()
{
	if (!Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton;
}
// End Enum EWarpingVectorMode

// Begin ScriptStruct FWarpingVectorValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarpingVectorValue;
class UScriptStruct* FWarpingVectorValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarpingVectorValue, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("WarpingVectorValue"));
	}
	return Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FWarpingVectorValue>()
{
	return FWarpingVectorValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarpingVectorValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vector values which may be specified in a configured space\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "Vector values which may be specified in a configured space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Space of the corresponding Vector value\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Space of the corresponding Vector value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Specifies a vector relative to the space defined by Mode\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Specifies a vector relative to the space defined by Mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarpingVectorValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarpingVectorValue, Mode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1581483854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarpingVectorValue, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"WarpingVectorValue",
	Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers),
	sizeof(FWarpingVectorValue),
	alignof(FWarpingVectorValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarpingVectorValue()
{
	if (!Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton, Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton;
}
// End ScriptStruct FWarpingVectorValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarpingEvaluationMode_StaticEnum, TEXT("EWarpingEvaluationMode"), &Z_Registration_Info_UEnum_EWarpingEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1328068945U) },
		{ EWarpingVectorMode_StaticEnum, TEXT("EWarpingVectorMode"), &Z_Registration_Info_UEnum_EWarpingVectorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1581483854U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarpingVectorValue::StaticStruct, Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewStructOps, TEXT("WarpingVectorValue"), &Z_Registration_Info_UScriptStruct_WarpingVectorValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarpingVectorValue), 3420153107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_635360021(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
