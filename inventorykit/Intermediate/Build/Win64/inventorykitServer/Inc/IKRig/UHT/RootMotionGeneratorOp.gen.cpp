// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionGeneratorOp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase();
IKRIG_API UClass* Z_Construct_UClass_URootMotionGeneratorOp();
IKRIG_API UClass* Z_Construct_UClass_URootMotionGeneratorOp_NoRegister();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERootMotionHeightSource();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERootMotionSource();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Enum ERootMotionSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionSource;
static UEnum* ERootMotionSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionSource, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERootMotionSource"));
	}
	return Z_Registration_Info_UEnum_ERootMotionSource.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<ERootMotionSource>()
{
	return ERootMotionSource_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_ERootMotionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// where to copy the motion of the root from\n" },
		{ "CopyFromSourceRoot.Name", "ERootMotionSource::CopyFromSourceRoot" },
		{ "GenerateFromTargetPelvis.Name", "ERootMotionSource::GenerateFromTargetPelvis" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "where to copy the motion of the root from" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionSource::CopyFromSourceRoot", (int64)ERootMotionSource::CopyFromSourceRoot },
		{ "ERootMotionSource::GenerateFromTargetPelvis", (int64)ERootMotionSource::GenerateFromTargetPelvis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"ERootMotionSource",
	"ERootMotionSource",
	Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_ERootMotionSource()
{
	if (!Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton, Z_Construct_UEnum_IKRig_ERootMotionSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionSource.InnerSingleton;
}
// End Enum ERootMotionSource

// Begin Enum ERootMotionHeightSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionHeightSource;
static UEnum* ERootMotionHeightSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERootMotionHeightSource, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERootMotionHeightSource"));
	}
	return Z_Registration_Info_UEnum_ERootMotionHeightSource.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<ERootMotionHeightSource>()
{
	return ERootMotionHeightSource_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// where to copy the height of the root from\n" },
		{ "CopyHeightFromSource.Name", "ERootMotionHeightSource::CopyHeightFromSource" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "SnapToGround.Name", "ERootMotionHeightSource::SnapToGround" },
		{ "ToolTip", "where to copy the height of the root from" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionHeightSource::CopyHeightFromSource", (int64)ERootMotionHeightSource::CopyHeightFromSource },
		{ "ERootMotionHeightSource::SnapToGround", (int64)ERootMotionHeightSource::SnapToGround },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"ERootMotionHeightSource",
	"ERootMotionHeightSource",
	Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_ERootMotionHeightSource()
{
	if (!Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton, Z_Construct_UEnum_IKRig_ERootMotionHeightSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionHeightSource.InnerSingleton;
}
// End Enum ERootMotionHeightSource

// Begin Class URootMotionGeneratorOp
void URootMotionGeneratorOp::StaticRegisterNativesURootMotionGeneratorOp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionGeneratorOp);
UClass* Z_Construct_UClass_URootMotionGeneratorOp_NoRegister()
{
	return URootMotionGeneratorOp::StaticClass();
}
struct Z_Construct_UClass_URootMotionGeneratorOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRootBone_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// The root of the source skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "The root of the source skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRootBone_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// The root of the target skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "The root of the target skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPelvisBone_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// The pelvis of the target skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "The pelvis of the target skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionSource_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// Where to copy the root motion from.\n// Copy From Source Root: copies the motion from the source root bone, but scales it according to relative height difference.\n// Generate From Target Pelvis: uses the retargeted Pelvis motion to generate root motion.\n// NOTE: Generating root motion from the Pelvis \n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "Where to copy the root motion from.\nCopy From Source Root: copies the motion from the source root bone, but scales it according to relative height difference.\nGenerate From Target Pelvis: uses the retargeted Pelvis motion to generate root motion.\nNOTE: Generating root motion from the Pelvis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootHeightSource_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// How to set the height of the root bone.\n// Copy Height From Source: copies the height of the root bone on the source skeleton's root bone.\n// Snap To Ground: sets the root bone height to the ground plane (Z=0).\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "How to set the height of the root bone.\nCopy Height From Source: copies the height of the root bone on the source skeleton's root bone.\nSnap To Ground: sets the root bone height to the ground plane (Z=0)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToNonRetargetedChildren_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// Will transform all children of the target root that are not themselves part of a retarget chain.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "Will transform all children of the target root that are not themselves part of a retarget chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffsetFromPelvis_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// Applies only when generating root motion from the Pelvis.\n// Maintains the offset between the root and pelvis as recorded in the target retarget pose.\n// If false, the root bone is placed directly under the Pelvis bone.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "Applies only when generating root motion from the Pelvis.\nMaintains the offset between the root and pelvis as recorded in the target retarget pose.\nIf false, the root bone is placed directly under the Pelvis bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateWithPelvis_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "Comment", "// Applies only when generating root motion from the Pelvis.\n// When true, the applied offset will be rotated by the Pelvis.\n// (NOTE: This may cause unwanted rotations, for example if Pelvis Yaw is animated.)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "Applies only when generating root motion from the Pelvis.\nWhen true, the applied offset will be rotated by the Pelvis.\n(NOTE: This may cause unwanted rotations, for example if Pelvis Yaw is animated.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// A manual offset to apply in global space to the root bone.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/RootMotionGeneratorOp.h" },
		{ "ToolTip", "A manual offset to apply in global space to the root bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceRootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRootBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPelvisBone;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RootHeightSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RootHeightSource;
	static void NewProp_bPropagateToNonRetargetedChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToNonRetargetedChildren;
	static void NewProp_bMaintainOffsetFromPelvis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffsetFromPelvis;
	static void NewProp_bRotateWithPelvis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateWithPelvis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionGeneratorOp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_SourceRootBone = { "SourceRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, SourceRootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRootBone_MetaData), NewProp_SourceRootBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_TargetRootBone = { "TargetRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, TargetRootBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRootBone_MetaData), NewProp_TargetRootBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_TargetPelvisBone = { "TargetPelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, TargetPelvisBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPelvisBone_MetaData), NewProp_TargetPelvisBone_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootMotionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootMotionSource = { "RootMotionSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, RootMotionSource), Z_Construct_UEnum_IKRig_ERootMotionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionSource_MetaData), NewProp_RootMotionSource_MetaData) }; // 2568952263
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootHeightSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootHeightSource = { "RootHeightSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, RootHeightSource), Z_Construct_UEnum_IKRig_ERootMotionHeightSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootHeightSource_MetaData), NewProp_RootHeightSource_MetaData) }; // 3966241195
void Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bPropagateToNonRetargetedChildren_SetBit(void* Obj)
{
	((URootMotionGeneratorOp*)Obj)->bPropagateToNonRetargetedChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bPropagateToNonRetargetedChildren = { "bPropagateToNonRetargetedChildren", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionGeneratorOp), &Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bPropagateToNonRetargetedChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToNonRetargetedChildren_MetaData), NewProp_bPropagateToNonRetargetedChildren_MetaData) };
void Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bMaintainOffsetFromPelvis_SetBit(void* Obj)
{
	((URootMotionGeneratorOp*)Obj)->bMaintainOffsetFromPelvis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bMaintainOffsetFromPelvis = { "bMaintainOffsetFromPelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionGeneratorOp), &Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bMaintainOffsetFromPelvis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffsetFromPelvis_MetaData), NewProp_bMaintainOffsetFromPelvis_MetaData) };
void Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bRotateWithPelvis_SetBit(void* Obj)
{
	((URootMotionGeneratorOp*)Obj)->bRotateWithPelvis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bRotateWithPelvis = { "bRotateWithPelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionGeneratorOp), &Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bRotateWithPelvis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateWithPelvis_MetaData), NewProp_bRotateWithPelvis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_GlobalOffset = { "GlobalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionGeneratorOp, GlobalOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalOffset_MetaData), NewProp_GlobalOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionGeneratorOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_SourceRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_TargetRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_TargetPelvisBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootMotionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootMotionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootHeightSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_RootHeightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bPropagateToNonRetargetedChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bMaintainOffsetFromPelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_bRotateWithPelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionGeneratorOp_Statics::NewProp_GlobalOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionGeneratorOp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URootMotionGeneratorOp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URetargetOpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionGeneratorOp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionGeneratorOp_Statics::ClassParams = {
	&URootMotionGeneratorOp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URootMotionGeneratorOp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionGeneratorOp_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionGeneratorOp_Statics::Class_MetaDataParams), Z_Construct_UClass_URootMotionGeneratorOp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URootMotionGeneratorOp()
{
	if (!Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton, Z_Construct_UClass_URootMotionGeneratorOp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionGeneratorOp.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<URootMotionGeneratorOp>()
{
	return URootMotionGeneratorOp::StaticClass();
}
URootMotionGeneratorOp::URootMotionGeneratorOp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionGeneratorOp);
URootMotionGeneratorOp::~URootMotionGeneratorOp() {}
// End Class URootMotionGeneratorOp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERootMotionSource_StaticEnum, TEXT("ERootMotionSource"), &Z_Registration_Info_UEnum_ERootMotionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2568952263U) },
		{ ERootMotionHeightSource_StaticEnum, TEXT("ERootMotionHeightSource"), &Z_Registration_Info_UEnum_ERootMotionHeightSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3966241195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionGeneratorOp, URootMotionGeneratorOp::StaticClass, TEXT("URootMotionGeneratorOp"), &Z_Registration_Info_UClass_URootMotionGeneratorOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionGeneratorOp), 982902342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_1496202225(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_RootMotionGeneratorOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
