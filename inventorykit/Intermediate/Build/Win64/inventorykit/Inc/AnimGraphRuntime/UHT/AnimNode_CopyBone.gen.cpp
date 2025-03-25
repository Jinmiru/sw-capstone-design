// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBone.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_CopyBone
static_assert(std::is_polymorphic<FAnimNode_CopyBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_CopyBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CopyBone;
class UScriptStruct* FAnimNode_CopyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CopyBone>()
{
	return FAnimNode_CopyBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller to copy a bone's transform to another one.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Source Bone Name to get transform from */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Source Bone Name to get transform from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Translation should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Translation should be copied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Rotation should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Rotation should be copied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Scale should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Scale should be copied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpace_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Space to convert transforms into prior to copying components */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying components" },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBone, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBone_MetaData), NewProp_SourceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBone, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBone_MetaData), NewProp_TargetBone_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
{
	((FAnimNode_CopyBone*)Obj)->bCopyTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation = { "bCopyTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyTranslation_MetaData), NewProp_bCopyTranslation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
{
	((FAnimNode_CopyBone*)Obj)->bCopyRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation = { "bCopyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyRotation_MetaData), NewProp_bCopyRotation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit(void* Obj)
{
	((FAnimNode_CopyBone*)Obj)->bCopyScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale = { "bCopyScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyScale_MetaData), NewProp_bCopyScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace = { "ControlSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CopyBone, ControlSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSpace_MetaData), NewProp_ControlSpace_MetaData) }; // 385354733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_CopyBone",
	Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers),
	sizeof(FAnimNode_CopyBone),
	alignof(FAnimNode_CopyBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_CopyBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_CopyBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewStructOps, TEXT("AnimNode_CopyBone"), &Z_Registration_Info_UScriptStruct_AnimNode_CopyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CopyBone), 156387346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_1281030600(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
