// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBoneDelta.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBoneDelta() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum CopyBoneDeltaMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CopyBoneDeltaMode;
static UEnum* CopyBoneDeltaMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CopyBoneDeltaMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CopyBoneDeltaMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("CopyBoneDeltaMode"));
	}
	return Z_Registration_Info_UEnum_CopyBoneDeltaMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<CopyBoneDeltaMode>()
{
	return CopyBoneDeltaMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accumulate.Name", "CopyBoneDeltaMode::Accumulate" },
		{ "Copy.Name", "CopyBoneDeltaMode::Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CopyBoneDeltaMode::Accumulate", (int64)CopyBoneDeltaMode::Accumulate },
		{ "CopyBoneDeltaMode::Copy", (int64)CopyBoneDeltaMode::Copy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"CopyBoneDeltaMode",
	"CopyBoneDeltaMode",
	Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode()
{
	if (!Z_Registration_Info_UEnum_CopyBoneDeltaMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CopyBoneDeltaMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CopyBoneDeltaMode.InnerSingleton;
}
// End Enum CopyBoneDeltaMode

// Begin ScriptStruct FAnimNode_CopyBoneDelta
static_assert(std::is_polymorphic<FAnimNode_CopyBoneDelta>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_CopyBoneDelta cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta;
class UScriptStruct* FAnimNode_CopyBoneDelta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBoneDelta"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CopyBoneDelta>()
{
	return FAnimNode_CopyBoneDelta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller to copy a transform relative to the ref pose to the target bone,\n *\x09instead of the copy bone node which copies the absolute transform\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "ToolTip", "Simple controller to copy a transform relative to the ref pose to the target bone,\ninstead of the copy bone node which copies the absolute transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
	static void NewProp_bCopyTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation;
	static void NewProp_bCopyRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation;
	static void NewProp_bCopyScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CopyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CopyMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBoneDelta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBone_MetaData), NewProp_SourceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBone_MetaData), NewProp_TargetBone_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
{
	((FAnimNode_CopyBoneDelta*)Obj)->bCopyTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation = { "bCopyTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyTranslation_MetaData), NewProp_bCopyTranslation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
{
	((FAnimNode_CopyBoneDelta*)Obj)->bCopyRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation = { "bCopyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyRotation_MetaData), NewProp_bCopyRotation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_SetBit(void* Obj)
{
	((FAnimNode_CopyBoneDelta*)Obj)->bCopyScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale = { "bCopyScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyScale_MetaData), NewProp_bCopyScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode = { "CopyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, CopyMode), Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyMode_MetaData), NewProp_CopyMode_MetaData) }; // 366587692
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier = { "TranslationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TranslationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMultiplier_MetaData), NewProp_TranslationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, RotationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMultiplier_MetaData), NewProp_RotationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_CopyBoneDelta",
	Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers),
	sizeof(FAnimNode_CopyBoneDelta),
	alignof(FAnimNode_CopyBoneDelta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta.InnerSingleton;
}
// End ScriptStruct FAnimNode_CopyBoneDelta

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CopyBoneDeltaMode_StaticEnum, TEXT("CopyBoneDeltaMode"), &Z_Registration_Info_UEnum_CopyBoneDeltaMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 366587692U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_CopyBoneDelta::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewStructOps, TEXT("AnimNode_CopyBoneDelta"), &Z_Registration_Info_UScriptStruct_AnimNode_CopyBoneDelta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CopyBoneDelta), 2147810040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_43306279(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
