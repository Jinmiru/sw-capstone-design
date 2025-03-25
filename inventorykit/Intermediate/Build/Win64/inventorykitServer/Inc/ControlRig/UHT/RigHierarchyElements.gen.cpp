// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyElements.h"
#include "ControlRig/Public/Rigs/RigConnectionRules.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyElements() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EConnectorType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlTransformChannel();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBaseElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigComputedTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectionRuleStash();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorState();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurveElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementParentConstraint();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigMultiParentElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigNullElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPreferredEulerAngles();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigReferenceElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodyElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodySettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSingleParentElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSocketElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSocketState();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformElement();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum ERigTransformType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigTransformType;
static UEnum* ERigTransformType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigTransformType"));
	}
	return Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigTransformType::Type>()
{
	return ERigTransformType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigTransformType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CurrentGlobal.Name", "ERigTransformType::CurrentGlobal" },
		{ "CurrentLocal.Name", "ERigTransformType::CurrentLocal" },
		{ "InitialGlobal.Name", "ERigTransformType::InitialGlobal" },
		{ "InitialLocal.Name", "ERigTransformType::InitialLocal" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "NumTransformTypes.Name", "ERigTransformType::NumTransformTypes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigTransformType::InitialLocal", (int64)ERigTransformType::InitialLocal },
		{ "ERigTransformType::CurrentLocal", (int64)ERigTransformType::CurrentLocal },
		{ "ERigTransformType::InitialGlobal", (int64)ERigTransformType::InitialGlobal },
		{ "ERigTransformType::CurrentGlobal", (int64)ERigTransformType::CurrentGlobal },
		{ "ERigTransformType::NumTransformTypes", (int64)ERigTransformType::NumTransformTypes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigTransformType",
	"ERigTransformType::Type",
	Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType()
{
	if (!Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton;
}
// End Enum ERigTransformType

// Begin ScriptStruct FRigComputedTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigComputedTransform;
class UScriptStruct* FRigComputedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigComputedTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigComputedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigComputedTransform>()
{
	return FRigComputedTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigComputedTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigComputedTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigComputedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigComputedTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigComputedTransform",
	Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers),
	sizeof(FRigComputedTransform),
	alignof(FRigComputedTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigComputedTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigComputedTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigComputedTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton;
}
// End ScriptStruct FRigComputedTransform

// Begin ScriptStruct FRigLocalAndGlobalTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform;
class UScriptStruct* FRigLocalAndGlobalTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigLocalAndGlobalTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigLocalAndGlobalTransform>()
{
	return FRigLocalAndGlobalTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigLocalAndGlobalTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLocalAndGlobalTransform, Local), Z_Construct_UScriptStruct_FRigComputedTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Local_MetaData), NewProp_Local_MetaData) }; // 1634504560
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigLocalAndGlobalTransform, Global), Z_Construct_UScriptStruct_FRigComputedTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Global_MetaData), NewProp_Global_MetaData) }; // 1634504560
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigLocalAndGlobalTransform",
	Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers),
	sizeof(FRigLocalAndGlobalTransform),
	alignof(FRigLocalAndGlobalTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton;
}
// End ScriptStruct FRigLocalAndGlobalTransform

// Begin ScriptStruct FRigCurrentAndInitialTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform;
class UScriptStruct* FRigCurrentAndInitialTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurrentAndInitialTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurrentAndInitialTransform>()
{
	return FRigCurrentAndInitialTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurrentAndInitialTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigCurrentAndInitialTransform, Current), Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) }; // 544402178
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigCurrentAndInitialTransform, Initial), Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initial_MetaData), NewProp_Initial_MetaData) }; // 544402178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigCurrentAndInitialTransform",
	Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers),
	sizeof(FRigCurrentAndInitialTransform),
	alignof(FRigCurrentAndInitialTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton;
}
// End ScriptStruct FRigCurrentAndInitialTransform

// Begin ScriptStruct FRigPreferredEulerAngles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles;
class UScriptStruct* FRigPreferredEulerAngles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPreferredEulerAngles, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPreferredEulerAngles"));
	}
	return Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPreferredEulerAngles>()
{
	return FRigPreferredEulerAngles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPreferredEulerAngles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPreferredEulerAngles, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPreferredEulerAngles, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigPreferredEulerAngles, Initial), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initial_MetaData), NewProp_Initial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigPreferredEulerAngles",
	Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers),
	sizeof(FRigPreferredEulerAngles),
	alignof(FRigPreferredEulerAngles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigPreferredEulerAngles()
{
	if (!Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton, Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton;
}
// End ScriptStruct FRigPreferredEulerAngles

// Begin ScriptStruct FRigBaseElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBaseElement;
class UScriptStruct* FRigBaseElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBaseElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBaseElement>()
{
	return FRigBaseElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBaseElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAtInstructionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreatedAtInstructionIndex;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBaseElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 1447557315
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseElement, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex = { "SubIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseElement, SubIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubIndex_MetaData), NewProp_SubIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex = { "CreatedAtInstructionIndex", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBaseElement, CreatedAtInstructionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedAtInstructionIndex_MetaData), NewProp_CreatedAtInstructionIndex_MetaData) };
void Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((FRigBaseElement*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigBaseElement), &Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigBaseElement",
	Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers),
	sizeof(FRigBaseElement),
	alignof(FRigBaseElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBaseElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBaseElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton, Z_Construct_UScriptStruct_FRigBaseElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton;
}
// End ScriptStruct FRigBaseElement

// Begin ScriptStruct FRigTransformElement
static_assert(std::is_polymorphic<FRigTransformElement>() == std::is_polymorphic<FRigBaseElement>(), "USTRUCT FRigTransformElement cannot be polymorphic unless super FRigBaseElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformElement;
class UScriptStruct* FRigTransformElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTransformElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTransformElement>()
{
	return FRigTransformElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigTransformElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "RigElement" },
		{ "DisplayAfter", "Index" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigTransformElement, Pose), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 592467243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseElement,
	&NewStructOps,
	"RigTransformElement",
	Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers),
	sizeof(FRigTransformElement),
	alignof(FRigTransformElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigTransformElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigTransformElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton;
}
// End ScriptStruct FRigTransformElement

// Begin ScriptStruct FRigSingleParentElement
static_assert(std::is_polymorphic<FRigSingleParentElement>() == std::is_polymorphic<FRigTransformElement>(), "USTRUCT FRigSingleParentElement cannot be polymorphic unless super FRigTransformElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSingleParentElement;
class UScriptStruct* FRigSingleParentElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSingleParentElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSingleParentElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSingleParentElement>()
{
	return FRigSingleParentElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigSingleParentElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSingleParentElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigTransformElement,
	&NewStructOps,
	"RigSingleParentElement",
	nullptr,
	0,
	sizeof(FRigSingleParentElement),
	alignof(FRigSingleParentElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigSingleParentElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton, Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton;
}
// End ScriptStruct FRigSingleParentElement

// Begin ScriptStruct FRigElementWeight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementWeight;
class UScriptStruct* FRigElementWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementWeight, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementWeight"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementWeight>()
{
	return FRigElementWeight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementWeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementWeight, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementWeight, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementWeight, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElementWeight",
	Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers),
	sizeof(FRigElementWeight),
	alignof(FRigElementWeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementWeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton, Z_Construct_UScriptStruct_FRigElementWeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton;
}
// End ScriptStruct FRigElementWeight

// Begin ScriptStruct FRigElementParentConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementParentConstraint;
class UScriptStruct* FRigElementParentConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementParentConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementParentConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementParentConstraint>()
{
	return FRigElementParentConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementParentConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElementParentConstraint",
	nullptr,
	0,
	sizeof(FRigElementParentConstraint),
	alignof(FRigElementParentConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementParentConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton;
}
// End ScriptStruct FRigElementParentConstraint

// Begin ScriptStruct FRigMultiParentElement
static_assert(std::is_polymorphic<FRigMultiParentElement>() == std::is_polymorphic<FRigTransformElement>(), "USTRUCT FRigMultiParentElement cannot be polymorphic unless super FRigTransformElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigMultiParentElement;
class UScriptStruct* FRigMultiParentElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigMultiParentElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigMultiParentElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigMultiParentElement>()
{
	return FRigMultiParentElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigMultiParentElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigMultiParentElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigTransformElement,
	&NewStructOps,
	"RigMultiParentElement",
	nullptr,
	0,
	sizeof(FRigMultiParentElement),
	alignof(FRigMultiParentElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigMultiParentElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton, Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton;
}
// End ScriptStruct FRigMultiParentElement

// Begin ScriptStruct FRigBoneElement
static_assert(std::is_polymorphic<FRigBoneElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigBoneElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBoneElement;
class UScriptStruct* FRigBoneElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBoneElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBoneElement>()
{
	return FRigBoneElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBoneElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneType_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBoneElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType = { "BoneType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBoneElement, BoneType), Z_Construct_UEnum_ControlRig_ERigBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneType_MetaData), NewProp_BoneType_MetaData) }; // 3895347495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigSingleParentElement,
	&NewStructOps,
	"RigBoneElement",
	Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers),
	sizeof(FRigBoneElement),
	alignof(FRigBoneElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBoneElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBoneElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton, Z_Construct_UScriptStruct_FRigBoneElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton;
}
// End ScriptStruct FRigBoneElement

// Begin ScriptStruct FRigNullElement
static_assert(std::is_polymorphic<FRigNullElement>() == std::is_polymorphic<FRigMultiParentElement>(), "USTRUCT FRigNullElement cannot be polymorphic unless super FRigMultiParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigNullElement;
class UScriptStruct* FRigNullElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigNullElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigNullElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigNullElement>()
{
	return FRigNullElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigNullElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigNullElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigNullElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigMultiParentElement,
	&NewStructOps,
	"RigNullElement",
	nullptr,
	0,
	sizeof(FRigNullElement),
	alignof(FRigNullElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNullElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigNullElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigNullElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton, Z_Construct_UScriptStruct_FRigNullElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton;
}
// End ScriptStruct FRigNullElement

// Begin ScriptStruct FRigControlElementCustomization
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlElementCustomization;
class UScriptStruct* FRigControlElementCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElementCustomization, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlElementCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlElementCustomization>()
{
	return FRigControlElementCustomization::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableSpaces_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedSpaces_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableSpaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableSpaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedSpaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedSpaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlElementCustomization>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_Inner = { "AvailableSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces = { "AvailableSpaces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElementCustomization, AvailableSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableSpaces_MetaData), NewProp_AvailableSpaces_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_Inner = { "RemovedSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces = { "RemovedSpaces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElementCustomization, RemovedSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedSpaces_MetaData), NewProp_RemovedSpaces_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlElementCustomization",
	Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers),
	sizeof(FRigControlElementCustomization),
	alignof(FRigControlElementCustomization),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton, Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton;
}
// End ScriptStruct FRigControlElementCustomization

// Begin Enum ERigControlTransformChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlTransformChannel;
static UEnum* ERigControlTransformChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlTransformChannel"));
	}
	return Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlTransformChannel>()
{
	return ERigControlTransformChannel_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "Pitch.Name", "ERigControlTransformChannel::Pitch" },
		{ "Roll.Name", "ERigControlTransformChannel::Roll" },
		{ "ScaleX.Name", "ERigControlTransformChannel::ScaleX" },
		{ "ScaleY.Name", "ERigControlTransformChannel::ScaleY" },
		{ "ScaleZ.Name", "ERigControlTransformChannel::ScaleZ" },
		{ "TranslationX.Name", "ERigControlTransformChannel::TranslationX" },
		{ "TranslationY.Name", "ERigControlTransformChannel::TranslationY" },
		{ "TranslationZ.Name", "ERigControlTransformChannel::TranslationZ" },
		{ "Yaw.Name", "ERigControlTransformChannel::Yaw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlTransformChannel::TranslationX", (int64)ERigControlTransformChannel::TranslationX },
		{ "ERigControlTransformChannel::TranslationY", (int64)ERigControlTransformChannel::TranslationY },
		{ "ERigControlTransformChannel::TranslationZ", (int64)ERigControlTransformChannel::TranslationZ },
		{ "ERigControlTransformChannel::Pitch", (int64)ERigControlTransformChannel::Pitch },
		{ "ERigControlTransformChannel::Yaw", (int64)ERigControlTransformChannel::Yaw },
		{ "ERigControlTransformChannel::Roll", (int64)ERigControlTransformChannel::Roll },
		{ "ERigControlTransformChannel::ScaleX", (int64)ERigControlTransformChannel::ScaleX },
		{ "ERigControlTransformChannel::ScaleY", (int64)ERigControlTransformChannel::ScaleY },
		{ "ERigControlTransformChannel::ScaleZ", (int64)ERigControlTransformChannel::ScaleZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlTransformChannel",
	"ERigControlTransformChannel",
	Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlTransformChannel()
{
	if (!Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton;
}
// End Enum ERigControlTransformChannel

// Begin ScriptStruct FRigControlSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlSettings;
class UScriptStruct* FRigControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlSettings>()
{
	return FRigControlSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationType_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[] = {
		{ "Category", "Control" },
		{ "DisplayName", "Value Type" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** the primary axis to use for float controls */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "the primary axis to use for float controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurve_MetaData[] = {
		{ "Comment", "/** If Created from a Curve  Container*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If Created from a Curve  Container" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitEnabled_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the control has limits. */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "True if the control has limits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLimits_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/**\n\x09 * True if the limits should be drawn in debug.\n\x09 * For this to be enabled you need to have at least one min and max limit turned on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "True if the limits should be drawn in debug.\nFor this to be enabled you need to have at least one min and max limit turned on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The minimum limit of the control's value */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The minimum limit of the control's value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The maximum limit of the control's value */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The maximum limit of the control's value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShapeVisible_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Set to true if the shape is currently visible in 3d */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Set to true if the shape is currently visible in 3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeVisibility_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Defines how the shape visibility should be changed */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Defines how the shape visibility should be changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/* This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTransientControl_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is transient and only visible in the control rig editor */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If the control is transient and only visible in the control rig editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlEnum_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is integer it can use this enum to choose values */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If the control is integer it can use this enum to choose values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Customization_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * The User interface customization used for a control\n\x09 * This will be used as the default content for the space picker and other widgets\n\x09 */" },
		{ "DisplayName", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The User interface customization used for a control\nThis will be used as the default content for the space picker and other widgets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivenControls_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * The list of driven controls for this proxy control.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The list of driven controls for this proxy control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupWithParentControl_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * If set to true the animation channel will be grouped with the parent control in sequencer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If set to true the animation channel will be grouped with the parent control in sequencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpaceSwitching_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Allow to space switch only to the available spaces\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Allow to space switch only to the available spaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredChannels_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Filtered Visible Transform channels. If this is empty everything is visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Filtered Visible Transform channels. If this is empty everything is visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredRotationOrder_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * The euler rotation order this control prefers for animation, if we aren't using default UE rotator\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The euler rotation order this control prefers for animation, if we aren't using default UE rotator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreferredRotationOrder_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Whether to use a specified rotation order or just use the default FRotator order and conversion functions\n\x09*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Whether to use a specified rotation order or just use the default FRotator order and conversion functions" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimatable_MetaData[] = {
		{ "Comment", "/**\n\x09 * Deprecated properties.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use animation_type instead." },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Deprecated properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShapeEnabled_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use animation_type or shape_visible instead." },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryAxis;
	static void NewProp_bIsCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitEnabled_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitEnabled;
	static void NewProp_bDrawLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumValue;
	static void NewProp_bShapeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapeVisible;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeVisibility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeColor;
	static void NewProp_bIsTransientControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransientControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlEnum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Customization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrivenControls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DrivenControls;
	static void NewProp_bGroupWithParentControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupWithParentControl;
	static void NewProp_bRestrictSpaceSwitching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpaceSwitching;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilteredChannels_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilteredChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredRotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredRotationOrder;
	static void NewProp_bUsePreferredRotationOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreferredRotationOrder;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAnimatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimatable;
	static void NewProp_bShapeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapeEnabled;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, AnimationType), Z_Construct_UEnum_ControlRig_ERigControlAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationType_MetaData), NewProp_AnimationType_MetaData) }; // 3785156150
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, ControlType), Z_Construct_UEnum_ControlRig_ERigControlType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlType_MetaData), NewProp_ControlType_MetaData) }; // 83158911
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, PrimaryAxis), Z_Construct_UEnum_ControlRig_ERigControlAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) }; // 1515302631
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bIsCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve = { "bIsCurve", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurve_MetaData), NewProp_bIsCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_Inner = { "LimitEnabled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigControlLimitEnabled, METADATA_PARAMS(0, nullptr) }; // 4111226886
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled = { "LimitEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, LimitEnabled), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitEnabled_MetaData), NewProp_LimitEnabled_MetaData) }; // 4111226886
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bDrawLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits = { "bDrawLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLimits_MetaData), NewProp_bDrawLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, MinimumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumValue_MetaData), NewProp_MinimumValue_MetaData) }; // 4047065167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, MaximumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumValue_MetaData), NewProp_MaximumValue_MetaData) }; // 4047065167
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bShapeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible = { "bShapeVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShapeVisible_MetaData), NewProp_bShapeVisible_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility = { "ShapeVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, ShapeVisibility), Z_Construct_UEnum_ControlRig_ERigControlVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeVisibility_MetaData), NewProp_ShapeVisibility_MetaData) }; // 182573794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, ShapeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeName_MetaData), NewProp_ShapeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor = { "ShapeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, ShapeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeColor_MetaData), NewProp_ShapeColor_MetaData) };
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bIsTransientControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl = { "bIsTransientControl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTransientControl_MetaData), NewProp_bIsTransientControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum = { "ControlEnum", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, ControlEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlEnum_MetaData), NewProp_ControlEnum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization = { "Customization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, Customization), Z_Construct_UScriptStruct_FRigControlElementCustomization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Customization_MetaData), NewProp_Customization_MetaData) }; // 2658307847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_Inner = { "DrivenControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls = { "DrivenControls", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, DrivenControls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivenControls_MetaData), NewProp_DrivenControls_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bGroupWithParentControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl = { "bGroupWithParentControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupWithParentControl_MetaData), NewProp_bGroupWithParentControl_MetaData) };
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bRestrictSpaceSwitching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching = { "bRestrictSpaceSwitching", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictSpaceSwitching_MetaData), NewProp_bRestrictSpaceSwitching_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner = { "FilteredChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ControlRig_ERigControlTransformChannel, METADATA_PARAMS(0, nullptr) }; // 913932468
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels = { "FilteredChannels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, FilteredChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredChannels_MetaData), NewProp_FilteredChannels_MetaData) }; // 913932468
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PreferredRotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PreferredRotationOrder = { "PreferredRotationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlSettings, PreferredRotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredRotationOrder_MetaData), NewProp_PreferredRotationOrder_MetaData) }; // 1031303920
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bUsePreferredRotationOrder_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bUsePreferredRotationOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bUsePreferredRotationOrder = { "bUsePreferredRotationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bUsePreferredRotationOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePreferredRotationOrder_MetaData), NewProp_bUsePreferredRotationOrder_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bAnimatable_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable = { "bAnimatable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimatable_MetaData), NewProp_bAnimatable_MetaData) };
void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_SetBit(void* Obj)
{
	((FRigControlSettings*)Obj)->bShapeEnabled_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled = { "bShapeEnabled", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShapeEnabled_MetaData), NewProp_bShapeEnabled_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PreferredRotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PreferredRotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bUsePreferredRotationOrder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlSettings",
	Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers),
	sizeof(FRigControlSettings),
	alignof(FRigControlSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigControlSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton;
}
// End ScriptStruct FRigControlSettings

// Begin ScriptStruct FRigControlElement
static_assert(std::is_polymorphic<FRigControlElement>() == std::is_polymorphic<FRigMultiParentElement>(), "USTRUCT FRigControlElement cannot be polymorphic unless super FRigMultiParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlElement;
class UScriptStruct* FRigControlElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlElement>()
{
	return FRigControlElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredEulerAngles_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredEulerAngles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElement, Settings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 391665119
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElement, Offset), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) }; // 592467243
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElement, Shape), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 592467243
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles = { "PreferredEulerAngles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlElement, PreferredEulerAngles), Z_Construct_UScriptStruct_FRigPreferredEulerAngles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredEulerAngles_MetaData), NewProp_PreferredEulerAngles_MetaData) }; // 3331992473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigMultiParentElement,
	&NewStructOps,
	"RigControlElement",
	Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers),
	sizeof(FRigControlElement),
	alignof(FRigControlElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton, Z_Construct_UScriptStruct_FRigControlElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton;
}
// End ScriptStruct FRigControlElement

// Begin ScriptStruct FRigCurveElement
static_assert(std::is_polymorphic<FRigCurveElement>() == std::is_polymorphic<FRigBaseElement>(), "USTRUCT FRigCurveElement cannot be polymorphic unless super FRigBaseElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurveElement;
class UScriptStruct* FRigCurveElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurveElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurveElement>()
{
	return FRigCurveElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigCurveElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurveElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurveElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseElement,
	&NewStructOps,
	"RigCurveElement",
	nullptr,
	0,
	sizeof(FRigCurveElement),
	alignof(FRigCurveElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurveElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigCurveElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigCurveElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton, Z_Construct_UScriptStruct_FRigCurveElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton;
}
// End ScriptStruct FRigCurveElement

// Begin ScriptStruct FRigRigidBodySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRigidBodySettings;
class UScriptStruct* FRigRigidBodySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRigidBodySettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRigidBodySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRigidBodySettings>()
{
	return FRigRigidBodySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRigidBodySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigRigidBodySettings, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigRigidBodySettings",
	Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers),
	sizeof(FRigRigidBodySettings),
	alignof(FRigRigidBodySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodySettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton;
}
// End ScriptStruct FRigRigidBodySettings

// Begin ScriptStruct FRigRigidBodyElement
static_assert(std::is_polymorphic<FRigRigidBodyElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigRigidBodyElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRigidBodyElement;
class UScriptStruct* FRigRigidBodyElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRigidBodyElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRigidBodyElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRigidBodyElement>()
{
	return FRigRigidBodyElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRigidBodyElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigRigidBodyElement, Settings), Z_Construct_UScriptStruct_FRigRigidBodySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3343594529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigSingleParentElement,
	&NewStructOps,
	"RigRigidBodyElement",
	Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers),
	sizeof(FRigRigidBodyElement),
	alignof(FRigRigidBodyElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodyElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton, Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton;
}
// End ScriptStruct FRigRigidBodyElement

// Begin ScriptStruct FRigReferenceElement
static_assert(std::is_polymorphic<FRigReferenceElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigReferenceElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigReferenceElement;
class UScriptStruct* FRigReferenceElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigReferenceElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigReferenceElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigReferenceElement>()
{
	return FRigReferenceElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigReferenceElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigReferenceElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigReferenceElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigSingleParentElement,
	&NewStructOps,
	"RigReferenceElement",
	nullptr,
	0,
	sizeof(FRigReferenceElement),
	alignof(FRigReferenceElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigReferenceElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigReferenceElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigReferenceElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton, Z_Construct_UScriptStruct_FRigReferenceElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton;
}
// End ScriptStruct FRigReferenceElement

// Begin Enum EConnectorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConnectorType;
static UEnum* EConnectorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConnectorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConnectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EConnectorType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EConnectorType"));
	}
	return Z_Registration_Info_UEnum_EConnectorType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EConnectorType>()
{
	return EConnectorType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EConnectorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "Primary.Name", "EConnectorType::Primary" },
		{ "Secondary.Comment", "// Single primary connector, non-optional and always visible. When dropped on another element, this connector will resolve to that element.\n" },
		{ "Secondary.Name", "EConnectorType::Secondary" },
		{ "Secondary.ToolTip", "Single primary connector, non-optional and always visible. When dropped on another element, this connector will resolve to that element." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConnectorType::Primary", (int64)EConnectorType::Primary },
		{ "EConnectorType::Secondary", (int64)EConnectorType::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EConnectorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EConnectorType",
	"EConnectorType",
	Z_Construct_UEnum_ControlRig_EConnectorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConnectorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EConnectorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EConnectorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EConnectorType()
{
	if (!Z_Registration_Info_UEnum_EConnectorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConnectorType.InnerSingleton, Z_Construct_UEnum_ControlRig_EConnectorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConnectorType.InnerSingleton;
}
// End Enum EConnectorType

// Begin ScriptStruct FRigConnectorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigConnectorSettings;
class UScriptStruct* FRigConnectorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigConnectorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigConnectorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigConnectorSettings>()
{
	return FRigConnectorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigConnectorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConnectorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorSettings, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorSettings, Type), Z_Construct_UEnum_ControlRig_EConnectorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 466183792
void Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bOptional_SetBit(void* Obj)
{
	((FRigConnectorSettings*)Obj)->bOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigConnectorSettings), &Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptional_MetaData), NewProp_bOptional_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigConnectionRuleStash, METADATA_PARAMS(0, nullptr) }; // 3484496758
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorSettings, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 3484496758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_bOptional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigConnectorSettings",
	Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::PropPointers),
	sizeof(FRigConnectorSettings),
	alignof(FRigConnectorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigConnectorSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorSettings.InnerSingleton;
}
// End ScriptStruct FRigConnectorSettings

// Begin ScriptStruct FRigConnectorState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigConnectorState;
class UScriptStruct* FRigConnectorState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigConnectorState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorState, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigConnectorState"));
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorState.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigConnectorState>()
{
	return FRigConnectorState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigConnectorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedTarget_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConnectorState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_ResolvedTarget = { "ResolvedTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorState, ResolvedTarget), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedTarget_MetaData), NewProp_ResolvedTarget_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorState, Settings), Z_Construct_UScriptStruct_FRigConnectorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3308319107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigConnectorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_ResolvedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConnectorState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigConnectorState",
	Z_Construct_UScriptStruct_FRigConnectorState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorState_Statics::PropPointers),
	sizeof(FRigConnectorState),
	alignof(FRigConnectorState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigConnectorState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorState()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigConnectorState.InnerSingleton, Z_Construct_UScriptStruct_FRigConnectorState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorState.InnerSingleton;
}
// End ScriptStruct FRigConnectorState

// Begin ScriptStruct FRigConnectorElement
static_assert(std::is_polymorphic<FRigConnectorElement>() == std::is_polymorphic<FRigBaseElement>(), "USTRUCT FRigConnectorElement cannot be polymorphic unless super FRigBaseElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigConnectorElement;
class UScriptStruct* FRigConnectorElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigConnectorElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigConnectorElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigConnectorElement>()
{
	return FRigConnectorElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigConnectorElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConnectorElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigConnectorElement_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectorElement, Settings), Z_Construct_UScriptStruct_FRigConnectorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3308319107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigConnectorElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectorElement_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConnectorElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigBaseElement,
	&NewStructOps,
	"RigConnectorElement",
	Z_Construct_UScriptStruct_FRigConnectorElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorElement_Statics::PropPointers),
	sizeof(FRigConnectorElement),
	alignof(FRigConnectorElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectorElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigConnectorElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigConnectorElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectorElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigConnectorElement.InnerSingleton, Z_Construct_UScriptStruct_FRigConnectorElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigConnectorElement.InnerSingleton;
}
// End ScriptStruct FRigConnectorElement

// Begin ScriptStruct FRigSocketState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSocketState;
class UScriptStruct* FRigSocketState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSocketState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSocketState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketState, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSocketState"));
	}
	return Z_Registration_Info_UScriptStruct_RigSocketState.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSocketState>()
{
	return FRigSocketState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigSocketState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocalTransform_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Connector" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocalTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSocketState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigSocketState, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigSocketState, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_InitialLocalTransform = { "InitialLocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigSocketState, InitialLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocalTransform_MetaData), NewProp_InitialLocalTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigSocketState, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigSocketState, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigSocketState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_InitialLocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSocketState_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSocketState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSocketState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigSocketState",
	Z_Construct_UScriptStruct_FRigSocketState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSocketState_Statics::PropPointers),
	sizeof(FRigSocketState),
	alignof(FRigSocketState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSocketState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigSocketState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigSocketState()
{
	if (!Z_Registration_Info_UScriptStruct_RigSocketState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSocketState.InnerSingleton, Z_Construct_UScriptStruct_FRigSocketState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigSocketState.InnerSingleton;
}
// End ScriptStruct FRigSocketState

// Begin ScriptStruct FRigSocketElement
static_assert(std::is_polymorphic<FRigSocketElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigSocketElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSocketElement;
class UScriptStruct* FRigSocketElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSocketElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSocketElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSocketElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigSocketElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSocketElement>()
{
	return FRigSocketElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigSocketElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSocketElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSocketElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigSingleParentElement,
	&NewStructOps,
	"RigSocketElement",
	nullptr,
	0,
	sizeof(FRigSocketElement),
	alignof(FRigSocketElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSocketElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigSocketElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigSocketElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigSocketElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSocketElement.InnerSingleton, Z_Construct_UScriptStruct_FRigSocketElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigSocketElement.InnerSingleton;
}
// End ScriptStruct FRigSocketElement

// Begin ScriptStruct FRigHierarchyCopyPasteContentPerElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement;
class UScriptStruct* FRigHierarchyCopyPasteContentPerElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyCopyPasteContentPerElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyCopyPasteContentPerElement>()
{
	return FRigHierarchyCopyPasteContentPerElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyCopyPasteContentPerElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 1447557315
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parents_MetaData), NewProp_Parents_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_Inner = { "ParentWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(0, nullptr) }; // 719614589
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights = { "ParentWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, ParentWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWeights_MetaData), NewProp_ParentWeights_MetaData) }; // 719614589
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Pose), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 592467243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigHierarchyCopyPasteContentPerElement",
	Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers),
	sizeof(FRigHierarchyCopyPasteContentPerElement),
	alignof(FRigHierarchyCopyPasteContentPerElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton;
}
// End ScriptStruct FRigHierarchyCopyPasteContentPerElement

// Begin ScriptStruct FRigHierarchyCopyPasteContent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent;
class UScriptStruct* FRigHierarchyCopyPasteContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyCopyPasteContent"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyCopyPasteContent>()
{
	return FRigHierarchyCopyPasteContent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[] = {
		{ "Comment", "// Maintain properties below for backwards compatibility pre-5.0\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Maintain properties below for backwards compatibility pre-5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Types_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Types_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Contents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyCopyPasteContent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement, METADATA_PARAMS(0, nullptr) }; // 3482380751
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) }; // 3482380751
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(0, nullptr) }; // 1289171826
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Types), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Types_MetaData), NewProp_Types_MetaData) }; // 1289171826
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_Inner = { "Contents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Contents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contents_MetaData), NewProp_Contents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_Inner = { "LocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms = { "LocalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, LocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransforms_MetaData), NewProp_LocalTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_Inner = { "GlobalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms = { "GlobalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, GlobalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTransforms_MetaData), NewProp_GlobalTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigHierarchyCopyPasteContent",
	Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers),
	sizeof(FRigHierarchyCopyPasteContent),
	alignof(FRigHierarchyCopyPasteContent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton;
}
// End ScriptStruct FRigHierarchyCopyPasteContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigTransformType_StaticEnum, TEXT("ERigTransformType"), &Z_Registration_Info_UEnum_ERigTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3342553616U) },
		{ ERigControlTransformChannel_StaticEnum, TEXT("ERigControlTransformChannel"), &Z_Registration_Info_UEnum_ERigControlTransformChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 913932468U) },
		{ EConnectorType_StaticEnum, TEXT("EConnectorType"), &Z_Registration_Info_UEnum_EConnectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 466183792U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigComputedTransform::StaticStruct, Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewStructOps, TEXT("RigComputedTransform"), &Z_Registration_Info_UScriptStruct_RigComputedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigComputedTransform), 1634504560U) },
		{ FRigLocalAndGlobalTransform::StaticStruct, Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewStructOps, TEXT("RigLocalAndGlobalTransform"), &Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigLocalAndGlobalTransform), 544402178U) },
		{ FRigCurrentAndInitialTransform::StaticStruct, Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewStructOps, TEXT("RigCurrentAndInitialTransform"), &Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurrentAndInitialTransform), 592467243U) },
		{ FRigPreferredEulerAngles::StaticStruct, Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewStructOps, TEXT("RigPreferredEulerAngles"), &Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPreferredEulerAngles), 3331992473U) },
		{ FRigBaseElement::StaticStruct, Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewStructOps, TEXT("RigBaseElement"), &Z_Registration_Info_UScriptStruct_RigBaseElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBaseElement), 1414132407U) },
		{ FRigTransformElement::StaticStruct, Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewStructOps, TEXT("RigTransformElement"), &Z_Registration_Info_UScriptStruct_RigTransformElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformElement), 1224297084U) },
		{ FRigSingleParentElement::StaticStruct, Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::NewStructOps, TEXT("RigSingleParentElement"), &Z_Registration_Info_UScriptStruct_RigSingleParentElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSingleParentElement), 2602029743U) },
		{ FRigElementWeight::StaticStruct, Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewStructOps, TEXT("RigElementWeight"), &Z_Registration_Info_UScriptStruct_RigElementWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementWeight), 719614589U) },
		{ FRigElementParentConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::NewStructOps, TEXT("RigElementParentConstraint"), &Z_Registration_Info_UScriptStruct_RigElementParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementParentConstraint), 4020317790U) },
		{ FRigMultiParentElement::StaticStruct, Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::NewStructOps, TEXT("RigMultiParentElement"), &Z_Registration_Info_UScriptStruct_RigMultiParentElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigMultiParentElement), 2068060946U) },
		{ FRigBoneElement::StaticStruct, Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewStructOps, TEXT("RigBoneElement"), &Z_Registration_Info_UScriptStruct_RigBoneElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBoneElement), 1160818468U) },
		{ FRigNullElement::StaticStruct, Z_Construct_UScriptStruct_FRigNullElement_Statics::NewStructOps, TEXT("RigNullElement"), &Z_Registration_Info_UScriptStruct_RigNullElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigNullElement), 120256390U) },
		{ FRigControlElementCustomization::StaticStruct, Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewStructOps, TEXT("RigControlElementCustomization"), &Z_Registration_Info_UScriptStruct_RigControlElementCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlElementCustomization), 2658307847U) },
		{ FRigControlSettings::StaticStruct, Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewStructOps, TEXT("RigControlSettings"), &Z_Registration_Info_UScriptStruct_RigControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlSettings), 391665119U) },
		{ FRigControlElement::StaticStruct, Z_Construct_UScriptStruct_FRigControlElement_Statics::NewStructOps, TEXT("RigControlElement"), &Z_Registration_Info_UScriptStruct_RigControlElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlElement), 755259183U) },
		{ FRigCurveElement::StaticStruct, Z_Construct_UScriptStruct_FRigCurveElement_Statics::NewStructOps, TEXT("RigCurveElement"), &Z_Registration_Info_UScriptStruct_RigCurveElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurveElement), 818050465U) },
		{ FRigRigidBodySettings::StaticStruct, Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewStructOps, TEXT("RigRigidBodySettings"), &Z_Registration_Info_UScriptStruct_RigRigidBodySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRigidBodySettings), 3343594529U) },
		{ FRigRigidBodyElement::StaticStruct, Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewStructOps, TEXT("RigRigidBodyElement"), &Z_Registration_Info_UScriptStruct_RigRigidBodyElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRigidBodyElement), 1898536381U) },
		{ FRigReferenceElement::StaticStruct, Z_Construct_UScriptStruct_FRigReferenceElement_Statics::NewStructOps, TEXT("RigReferenceElement"), &Z_Registration_Info_UScriptStruct_RigReferenceElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigReferenceElement), 668518884U) },
		{ FRigConnectorSettings::StaticStruct, Z_Construct_UScriptStruct_FRigConnectorSettings_Statics::NewStructOps, TEXT("RigConnectorSettings"), &Z_Registration_Info_UScriptStruct_RigConnectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigConnectorSettings), 3308319107U) },
		{ FRigConnectorState::StaticStruct, Z_Construct_UScriptStruct_FRigConnectorState_Statics::NewStructOps, TEXT("RigConnectorState"), &Z_Registration_Info_UScriptStruct_RigConnectorState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigConnectorState), 3795758427U) },
		{ FRigConnectorElement::StaticStruct, Z_Construct_UScriptStruct_FRigConnectorElement_Statics::NewStructOps, TEXT("RigConnectorElement"), &Z_Registration_Info_UScriptStruct_RigConnectorElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigConnectorElement), 1212122056U) },
		{ FRigSocketState::StaticStruct, Z_Construct_UScriptStruct_FRigSocketState_Statics::NewStructOps, TEXT("RigSocketState"), &Z_Registration_Info_UScriptStruct_RigSocketState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSocketState), 465894932U) },
		{ FRigSocketElement::StaticStruct, Z_Construct_UScriptStruct_FRigSocketElement_Statics::NewStructOps, TEXT("RigSocketElement"), &Z_Registration_Info_UScriptStruct_RigSocketElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSocketElement), 1277125602U) },
		{ FRigHierarchyCopyPasteContentPerElement::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewStructOps, TEXT("RigHierarchyCopyPasteContentPerElement"), &Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyCopyPasteContentPerElement), 3482380751U) },
		{ FRigHierarchyCopyPasteContent::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewStructOps, TEXT("RigHierarchyCopyPasteContent"), &Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyCopyPasteContent), 1125708873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_2817017265(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
