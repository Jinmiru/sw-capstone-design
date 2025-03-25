// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SpringBone.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SpringBone() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_SpringBone
static_assert(std::is_polymorphic<FAnimNode_SpringBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_SpringBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SpringBone;
class UScriptStruct* FAnimNode_SpringBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SpringBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SpringBone>()
{
	return FAnimNode_SpringBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringBone_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose. */" },
		{ "EditCondition", "bLimitDisplacement" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Stiffness of spring */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Stiffness of spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Damping of spring */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Damping of spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorResetThresh_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If spring stretches more than this, reset it. Useful for catching teleports etc */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If spring stretches more than this, reset it. Useful for catching teleports etc" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoZSpring_MetaData[] = {
		{ "Comment", "/** If true, Z position is always correct, no spring applied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true, Z position is always correct, no spring applied" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in X */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Y */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Z */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Z" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in X */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Y */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Z */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Z" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringBone;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDisplacement;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringDamping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorResetThresh;
#if WITH_EDITORONLY_DATA
	static void NewProp_bNoZSpring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoZSpring;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bLimitDisplacement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitDisplacement;
	static void NewProp_bTranslateX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateX;
	static void NewProp_bTranslateY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateY;
	static void NewProp_bTranslateZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateZ;
	static void NewProp_bRotateX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateX;
	static void NewProp_bRotateY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateY;
	static void NewProp_bRotateZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone = { "SpringBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SpringBone, SpringBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringBone_MetaData), NewProp_SpringBone_MetaData) }; // 4218265988
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement = { "MaxDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SpringBone, MaxDisplacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDisplacement_MetaData), NewProp_MaxDisplacement_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SpringBone, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStiffness_MetaData), NewProp_SpringStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SpringBone, SpringDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringDamping_MetaData), NewProp_SpringDamping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh = { "ErrorResetThresh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SpringBone, ErrorResetThresh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorResetThresh_MetaData), NewProp_ErrorResetThresh_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bNoZSpring_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring = { "bNoZSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoZSpring_MetaData), NewProp_bNoZSpring_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bLimitDisplacement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement = { "bLimitDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitDisplacement_MetaData), NewProp_bLimitDisplacement_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bTranslateX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX = { "bTranslateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslateX_MetaData), NewProp_bTranslateX_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bTranslateY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY = { "bTranslateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslateY_MetaData), NewProp_bTranslateY_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bTranslateZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ = { "bTranslateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslateZ_MetaData), NewProp_bTranslateZ_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bRotateX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX = { "bRotateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateX_MetaData), NewProp_bRotateX_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bRotateY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY = { "bRotateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateY_MetaData), NewProp_bRotateY_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit(void* Obj)
{
	((FAnimNode_SpringBone*)Obj)->bRotateZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ = { "bRotateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateZ_MetaData), NewProp_bRotateZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_SpringBone",
	Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers),
	sizeof(FAnimNode_SpringBone),
	alignof(FAnimNode_SpringBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton;
}
// End ScriptStruct FAnimNode_SpringBone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_SpringBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewStructOps, TEXT("AnimNode_SpringBone"), &Z_Registration_Info_UScriptStruct_AnimNode_SpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SpringBone), 3796137516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_4211410024(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
