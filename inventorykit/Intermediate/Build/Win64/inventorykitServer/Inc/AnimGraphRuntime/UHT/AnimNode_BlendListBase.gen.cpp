// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListBase() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EBlendListTransitionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendListTransitionType;
static UEnum* EBlendListTransitionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlendListTransitionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlendListTransitionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EBlendListTransitionType"));
	}
	return Z_Registration_Info_UEnum_EBlendListTransitionType.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EBlendListTransitionType>()
{
	return EBlendListTransitionType_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Inertialization.Name", "EBlendListTransitionType::Inertialization" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "StandardBlend.Name", "EBlendListTransitionType::StandardBlend" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlendListTransitionType::StandardBlend", (int64)EBlendListTransitionType::StandardBlend },
		{ "EBlendListTransitionType::Inertialization", (int64)EBlendListTransitionType::Inertialization },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EBlendListTransitionType",
	"EBlendListTransitionType",
	Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType()
{
	if (!Z_Registration_Info_UEnum_EBlendListTransitionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendListTransitionType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlendListTransitionType.InnerSingleton;
}
// End Enum EBlendListTransitionType

// Begin ScriptStruct FAnimNode_BlendListBase
static_assert(std::is_polymorphic<FAnimNode_BlendListBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendListBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase;
class UScriptStruct* FAnimNode_BlendListBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListBase>()
{
	return FAnimNode_BlendListBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Blend list node; has many children\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "ToolTip", "Blend list node; has many children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Config" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[] = {
		{ "Category", "Config" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "BlendType" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetChildOnActivation_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "/** This reinitializes the re-activated child if the child's weight was zero. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "ToolTip", "This reinitializes the re-activated child if the child's weight was zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[] = {
		{ "Category", "BlendType" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
		{ "Category", "BlendType" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPose;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
	static void NewProp_bResetChildOnActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChildOnActivation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_Inner = { "BlendPose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1074011079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose = { "BlendPose", nullptr, (EPropertyFlags)0x0020080000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendPose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendPose_MetaData), NewProp_BlendPose_MetaData) }; // 1074011079
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_Inner = { "BlendTime", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0040000800000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendTime), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_TransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, TransitionType), Z_Construct_UEnum_AnimGraphRuntime_EBlendListTransitionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionType_MetaData), NewProp_TransitionType_MetaData) }; // 3274792410
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendType), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 2114278366
void Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_SetBit(void* Obj)
{
	((FAnimNode_BlendListBase*)Obj)->bResetChildOnActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation = { "bResetChildOnActivation", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_BlendListBase), &Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetChildOnActivation_MetaData), NewProp_bResetChildOnActivation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBlendCurve_MetaData), NewProp_CustomBlendCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_MetaData), NewProp_BlendProfile_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_TransitionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_TransitionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_BlendListBase",
	Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers),
	sizeof(FAnimNode_BlendListBase),
	alignof(FAnimNode_BlendListBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendListBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlendListTransitionType_StaticEnum, TEXT("EBlendListTransitionType"), &Z_Registration_Info_UEnum_EBlendListTransitionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3274792410U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendListBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewStructOps, TEXT("AnimNode_BlendListBase"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListBase), 1554853214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_297926753(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
