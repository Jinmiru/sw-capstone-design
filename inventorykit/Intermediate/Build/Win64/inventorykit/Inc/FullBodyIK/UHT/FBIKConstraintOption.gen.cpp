// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FullBodyIK/Public/FBIKConstraintOption.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBIKConstraintOption() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
FULLBODYIK_API UEnum* Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType();
FULLBODYIK_API UEnum* Z_Construct_UEnum_FullBodyIK_EPoleVectorOption();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKBoneLimit();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption();
FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput();
UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References

// Begin Enum EFBIKBoneLimitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBIKBoneLimitType;
static UEnum* EFBIKBoneLimitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("EFBIKBoneLimitType"));
	}
	return Z_Registration_Info_UEnum_EFBIKBoneLimitType.OuterSingleton;
}
template<> FULLBODYIK_API UEnum* StaticEnum<EFBIKBoneLimitType>()
{
	return EFBIKBoneLimitType_StaticEnum();
}
struct Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Name", "EFBIKBoneLimitType::Free" },
		{ "Limit.Name", "EFBIKBoneLimitType::Limit" },
		{ "Locked.Comment", "// currently hard limit\n" },
		{ "Locked.Name", "EFBIKBoneLimitType::Locked" },
		{ "Locked.ToolTip", "currently hard limit" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFBIKBoneLimitType::Free", (int64)EFBIKBoneLimitType::Free },
		{ "EFBIKBoneLimitType::Limit", (int64)EFBIKBoneLimitType::Limit },
		{ "EFBIKBoneLimitType::Locked", (int64)EFBIKBoneLimitType::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	"EFBIKBoneLimitType",
	"EFBIKBoneLimitType",
	Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType()
{
	if (!Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton, Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFBIKBoneLimitType.InnerSingleton;
}
// End Enum EFBIKBoneLimitType

// Begin ScriptStruct FFBIKBoneLimit
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKBoneLimit;
class UScriptStruct* FFBIKBoneLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKBoneLimit, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKBoneLimit"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKBoneLimit.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKBoneLimit>()
{
	return FFBIKBoneLimit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_X_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_Y_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_Z_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "// currently no negative limit, for position we may need min/max\n" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "currently no negative limit, for position we may need min/max" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_X_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_X;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Y_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_Y;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Z_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKBoneLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X = { "LimitType_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_X), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_X_MetaData), NewProp_LimitType_X_MetaData) }; // 1375827182
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y = { "LimitType_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_Y), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_Y_MetaData), NewProp_LimitType_Y_MetaData) }; // 1375827182
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z = { "LimitType_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKBoneLimit, LimitType_Z), Z_Construct_UEnum_FullBodyIK_EFBIKBoneLimitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitType_Z_MetaData), NewProp_LimitType_Z_MetaData) }; // 1375827182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKBoneLimit, Limit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_LimitType_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	&NewStructOps,
	"FBIKBoneLimit",
	Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::PropPointers),
	sizeof(FFBIKBoneLimit),
	alignof(FFBIKBoneLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFBIKBoneLimit()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton, Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBIKBoneLimit.InnerSingleton;
}
// End ScriptStruct FFBIKBoneLimit

// Begin Enum EPoleVectorOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoleVectorOption;
static UEnum* EPoleVectorOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("EPoleVectorOption"));
	}
	return Z_Registration_Info_UEnum_EPoleVectorOption.OuterSingleton;
}
template<> FULLBODYIK_API UEnum* StaticEnum<EPoleVectorOption>()
{
	return EPoleVectorOption_StaticEnum();
}
struct Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Direction.Name", "EPoleVectorOption::Direction" },
		{ "Location.Comment", "/* The polevector will indicate a direction vector in their local bone space */" },
		{ "Location.Name", "EPoleVectorOption::Location" },
		{ "Location.ToolTip", "The polevector will indicate a direction vector in their local bone space" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPoleVectorOption::Direction", (int64)EPoleVectorOption::Direction },
		{ "EPoleVectorOption::Location", (int64)EPoleVectorOption::Location },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	"EPoleVectorOption",
	"EPoleVectorOption",
	Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FullBodyIK_EPoleVectorOption()
{
	if (!Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton, Z_Construct_UEnum_FullBodyIK_EPoleVectorOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoleVectorOption.InnerSingleton;
}
// End Enum EPoleVectorOption

// Begin ScriptStruct FFBIKConstraintOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKConstraintOption;
class UScriptStruct* FFBIKConstraintOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKConstraintOption, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKConstraintOption"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKConstraintOption.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKConstraintOption>()
{
	return FFBIKConstraintOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Bone Name */" },
		{ "Constant", "" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Bone Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Scale of [0, 1] and applied to linear motion strength - linear stiffness works on their local frame*/" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Scale of [0, 1] and applied to linear motion strength - linear stiffness works on their local frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Scale of [0, 1] and applied to angular motion strength, xyz is applied to twist, swing1, swing2 */" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Scale of [0, 1] and applied to angular motion strength, xyz is applied to twist, swing1, swing2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAngularLimit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimit_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Angular delta limit of this joints local transform. [-Limit, Limit] */" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Angular delta limit of this joints local transform. [-Limit, Limit]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePoleVector_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorOption_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "/** Pole Vector in their local space*/" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "Pole Vector in their local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "FFBIKConstraintOption" },
		{ "Comment", "// this is offset rotation applied when constructing the local frame\n" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
		{ "ToolTip", "this is offset rotation applied when constructing the local frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bUseStiffness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearStiffness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularStiffness;
	static void NewProp_bUseAngularLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAngularLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimit;
	static void NewProp_bUsePoleVector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePoleVector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoleVectorOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoleVectorOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKConstraintOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FFBIKConstraintOption*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_SetBit(void* Obj)
{
	((FFBIKConstraintOption*)Obj)->bUseStiffness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness = { "bUseStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStiffness_MetaData), NewProp_bUseStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness = { "LinearStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, LinearStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearStiffness_MetaData), NewProp_LinearStiffness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, AngularStiffness), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularStiffness_MetaData), NewProp_AngularStiffness_MetaData) };
void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_SetBit(void* Obj)
{
	((FFBIKConstraintOption*)Obj)->bUseAngularLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit = { "bUseAngularLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAngularLimit_MetaData), NewProp_bUseAngularLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit = { "AngularLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, AngularLimit), Z_Construct_UScriptStruct_FFBIKBoneLimit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularLimit_MetaData), NewProp_AngularLimit_MetaData) }; // 2155249336
void Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_SetBit(void* Obj)
{
	((FFBIKConstraintOption*)Obj)->bUsePoleVector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector = { "bUsePoleVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFBIKConstraintOption), &Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePoleVector_MetaData), NewProp_bUsePoleVector_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption = { "PoleVectorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, PoleVectorOption), Z_Construct_UEnum_FullBodyIK_EPoleVectorOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorOption_MetaData), NewProp_PoleVectorOption_MetaData) }; // 1529999050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVector_MetaData), NewProp_PoleVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFBIKConstraintOption, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRotation_MetaData), NewProp_OffsetRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_LinearStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUseAngularLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_AngularLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_bUsePoleVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVectorOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_PoleVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewProp_OffsetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	&NewStructOps,
	"FBIKConstraintOption",
	Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::PropPointers),
	sizeof(FFBIKConstraintOption),
	alignof(FFBIKConstraintOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton, Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBIKConstraintOption.InnerSingleton;
}
// End ScriptStruct FFBIKConstraintOption

// Begin ScriptStruct FMotionProcessInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionProcessInput;
class UScriptStruct* FMotionProcessInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionProcessInput, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("MotionProcessInput"));
	}
	return Z_Registration_Info_UScriptStruct_MotionProcessInput.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FMotionProcessInput>()
{
	return FMotionProcessInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMotionProcessInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceEffectorRotationTarget_MetaData[] = {
		{ "Category", "FMotionProcessInput" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyWhenReachedToTarget_MetaData[] = {
		{ "Category", "FMotionProcessInput" },
		{ "ModuleRelativePath", "Public/FBIKConstraintOption.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceEffectorRotationTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEffectorRotationTarget;
	static void NewProp_bOnlyApplyWhenReachedToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyWhenReachedToTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionProcessInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_SetBit(void* Obj)
{
	((FMotionProcessInput*)Obj)->bForceEffectorRotationTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget = { "bForceEffectorRotationTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMotionProcessInput), &Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceEffectorRotationTarget_MetaData), NewProp_bForceEffectorRotationTarget_MetaData) };
void Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_SetBit(void* Obj)
{
	((FMotionProcessInput*)Obj)->bOnlyApplyWhenReachedToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget = { "bOnlyApplyWhenReachedToTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMotionProcessInput), &Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyWhenReachedToTarget_MetaData), NewProp_bOnlyApplyWhenReachedToTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bForceEffectorRotationTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewProp_bOnlyApplyWhenReachedToTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionProcessInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
	nullptr,
	&NewStructOps,
	"MotionProcessInput",
	Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::PropPointers),
	sizeof(FMotionProcessInput),
	alignof(FMotionProcessInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionProcessInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionProcessInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput()
{
	if (!Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton, Z_Construct_UScriptStruct_FMotionProcessInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MotionProcessInput.InnerSingleton;
}
// End ScriptStruct FMotionProcessInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFBIKBoneLimitType_StaticEnum, TEXT("EFBIKBoneLimitType"), &Z_Registration_Info_UEnum_EFBIKBoneLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1375827182U) },
		{ EPoleVectorOption_StaticEnum, TEXT("EPoleVectorOption"), &Z_Registration_Info_UEnum_EPoleVectorOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1529999050U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFBIKBoneLimit::StaticStruct, Z_Construct_UScriptStruct_FFBIKBoneLimit_Statics::NewStructOps, TEXT("FBIKBoneLimit"), &Z_Registration_Info_UScriptStruct_FBIKBoneLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKBoneLimit), 2155249336U) },
		{ FFBIKConstraintOption::StaticStruct, Z_Construct_UScriptStruct_FFBIKConstraintOption_Statics::NewStructOps, TEXT("FBIKConstraintOption"), &Z_Registration_Info_UScriptStruct_FBIKConstraintOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKConstraintOption), 3337838231U) },
		{ FMotionProcessInput::StaticStruct, Z_Construct_UScriptStruct_FMotionProcessInput_Statics::NewStructOps, TEXT("MotionProcessInput"), &Z_Registration_Info_UScriptStruct_MotionProcessInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionProcessInput), 4185432749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_1920647409(TEXT("/Script/FullBodyIK"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKConstraintOption_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
