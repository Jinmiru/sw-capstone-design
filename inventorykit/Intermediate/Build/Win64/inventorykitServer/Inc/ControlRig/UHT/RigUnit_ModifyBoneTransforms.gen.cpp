// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ModifyBoneTransforms() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ModifyBoneTransforms_PerBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone;
class UScriptStruct* FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms_PerBone"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms_PerBone>()
{
	return FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "FRigUnit_ModifyBoneTransforms_PerBone" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The name of the Bone to set the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "FRigUnit_ModifyBoneTransforms_PerBone" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The transform value to set for the given Bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms_PerBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms_PerBone, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms_PerBone, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_ModifyBoneTransforms_PerBone",
	Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers),
	sizeof(FRigUnit_ModifyBoneTransforms_PerBone),
	alignof(FRigUnit_ModifyBoneTransforms_PerBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton;
}
// End ScriptStruct FRigUnit_ModifyBoneTransforms_PerBone

// Begin ScriptStruct FRigUnit_ModifyBoneTransforms_WorkData
static_assert(std::is_polymorphic<FRigUnit_ModifyBoneTransforms_WorkData>() == std::is_polymorphic<FRigUnit_ModifyTransforms_WorkData>(), "USTRUCT FRigUnit_ModifyBoneTransforms_WorkData cannot be polymorphic unless super FRigUnit_ModifyTransforms_WorkData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData;
class UScriptStruct* FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms_WorkData>()
{
	return FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData,
	&NewStructOps,
	"RigUnit_ModifyBoneTransforms_WorkData",
	nullptr,
	0,
	sizeof(FRigUnit_ModifyBoneTransforms_WorkData),
	alignof(FRigUnit_ModifyBoneTransforms_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_ModifyBoneTransforms_WorkData

// Begin ScriptStruct FRigUnit_ModifyBoneTransforms
static_assert(std::is_polymorphic<FRigUnit_ModifyBoneTransforms>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ModifyBoneTransforms cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms;
class UScriptStruct* FRigUnit_ModifyBoneTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ModifyBoneTransforms_Execute;
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("BoneToModify"), TEXT("TArray<FRigUnit_ModifyBoneTransforms_PerBone>"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WeightMinimum"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WeightMaximum"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("Mode"), TEXT("EControlRigModifyBoneMode"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_ModifyBoneTransforms_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ModifyBoneTransforms::Execute"), &FRigUnit_ModifyBoneTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton, Arguments_FRigUnit_ModifyBoneTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms>()
{
	return FRigUnit_ModifyBoneTransforms::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * ModifyBonetransforms is used to perform a change in the hierarchy by setting one or more bones' transforms.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Modify Transforms" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "ModifyBone" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "ModifyBonetransforms is used to perform a change in the hierarchy by setting one or more bones' transforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The bones to modify.\n\x09 */" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The bones to modify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * At 1 this sets the transform, between 0 and 1 the transform is blended with previous results.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "At 1 this sets the transform, between 0 and 1 the transform is blended with previous results." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The minimum of the weight - defaults to 0.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The minimum of the weight - defaults to 0.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The maximum of the weight - defaults to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The maximum of the weight - defaults to 1.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space, additive or override.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space, additive or override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneToModify;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMinimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMaximum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_Inner = { "BoneToModify", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone, METADATA_PARAMS(0, nullptr) }; // 678014349
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, BoneToModify), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToModify_MetaData), NewProp_BoneToModify_MetaData) }; // 678014349
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum = { "WeightMinimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WeightMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMinimum_MetaData), NewProp_WeightMinimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum = { "WeightMaximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WeightMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMaximum_MetaData), NewProp_WeightMaximum_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, Mode), Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1031077644
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WorkData), Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 2709010464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_ModifyBoneTransforms",
	Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers),
	sizeof(FRigUnit_ModifyBoneTransforms),
	alignof(FRigUnit_ModifyBoneTransforms),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton;
}
void FRigUnit_ModifyBoneTransforms::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ModifyBoneTransforms::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify_0_Array(BoneToModify);
	StaticExecute(
		InExecuteContext,
		BoneToModify_0_Array,
		Weight,
		WeightMinimum,
		WeightMaximum,
		Mode,
		WorkData
	);
}
// End ScriptStruct FRigUnit_ModifyBoneTransforms

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms_PerBone"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms_PerBone), 678014349U) },
		{ FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms_WorkData), 2709010464U) },
		{ FRigUnit_ModifyBoneTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms), 3194237576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_2655765604(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
