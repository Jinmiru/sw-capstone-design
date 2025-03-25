// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EBoneModificationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneModificationMode;
static UEnum* EBoneModificationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EBoneModificationMode"));
	}
	return Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EBoneModificationMode>()
{
	return EBoneModificationMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMM_Additive.Comment", "/** The modifier adds to the existing translation, rotation, or scale. */" },
		{ "BMM_Additive.DisplayName", "Add to Existing" },
		{ "BMM_Additive.Name", "BMM_Additive" },
		{ "BMM_Additive.ToolTip", "The modifier adds to the existing translation, rotation, or scale." },
		{ "BMM_Ignore.Comment", "/** The modifier ignores this channel (keeps the existing bone translation, rotation, or scale). */" },
		{ "BMM_Ignore.DisplayName", "Ignore" },
		{ "BMM_Ignore.Name", "BMM_Ignore" },
		{ "BMM_Ignore.ToolTip", "The modifier ignores this channel (keeps the existing bone translation, rotation, or scale)." },
		{ "BMM_Replace.Comment", "/** The modifier replaces the existing translation, rotation, or scale. */" },
		{ "BMM_Replace.DisplayName", "Replace Existing" },
		{ "BMM_Replace.Name", "BMM_Replace" },
		{ "BMM_Replace.ToolTip", "The modifier replaces the existing translation, rotation, or scale." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BMM_Ignore", (int64)BMM_Ignore },
		{ "BMM_Replace", (int64)BMM_Replace },
		{ "BMM_Additive", (int64)BMM_Additive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EBoneModificationMode",
	"EBoneModificationMode",
	Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode()
{
	if (!Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton;
}
// End Enum EBoneModificationMode

// Begin ScriptStruct FAnimNode_ModifyBone
static_assert(std::is_polymorphic<FAnimNode_ModifyBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ModifyBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone;
class UScriptStruct* FAnimNode_ModifyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ModifyBone>()
{
	return FAnimNode_ModifyBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** New rotation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New rotation of bone to apply." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** New Scale of bone to apply. This is only worldspace. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Reference frame to apply Translation in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Reference frame to apply Scale in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToModify_MetaData), NewProp_BoneToModify_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMode_MetaData), NewProp_TranslationMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMode_MetaData), NewProp_ScaleMode_MetaData) }; // 1234177555
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationSpace_MetaData), NewProp_TranslationSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpace_MetaData), NewProp_RotationSpace_MetaData) }; // 385354733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSpace_MetaData), NewProp_ScaleSpace_MetaData) }; // 385354733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_ModifyBone",
	Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers),
	sizeof(FAnimNode_ModifyBone),
	alignof(FAnimNode_ModifyBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_ModifyBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoneModificationMode_StaticEnum, TEXT("EBoneModificationMode"), &Z_Registration_Info_UEnum_EBoneModificationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1234177555U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ModifyBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewStructOps, TEXT("AnimNode_ModifyBone"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyBone), 2592967663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_1897419309(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
