// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyDefines() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigSetKey();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EModularRigResolveState();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlValueType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementResolveState();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigEvent();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigHierarchyNotification();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FModularRigResolveResult();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlModifiedContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValueStorage();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementResolveResult();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigEventContext();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum ERigElementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigElementType;
static UEnum* ERigElementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigElementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigElementType"));
	}
	return Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigElementType>()
{
	return ERigElementType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigElementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "ERigElementType::All" },
		{ "BlueprintType", "true" },
		{ "Bone.Name", "ERigElementType::Bone" },
		{ "Comment", "/* \n * This is rig element types that we support\n * This can be used as a mask so supported as a bitfield\n */" },
		{ "Connector.Name", "ERigElementType::Connector" },
		{ "Control.Name", "ERigElementType::Control" },
		{ "Curve.Name", "ERigElementType::Curve" },
		{ "First.Hidden", "" },
		{ "First.Name", "ERigElementType::First" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "ERigElementType::Last" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "None.Name", "ERigElementType::None" },
		{ "Null.Name", "ERigElementType::Null" },
		{ "Reference.Name", "ERigElementType::Reference" },
		{ "RigidBody.Hidden", "" },
		{ "RigidBody.Name", "ERigElementType::RigidBody" },
		{ "RigVMTypeAllowed", "" },
		{ "Socket.Name", "ERigElementType::Socket" },
		{ "Space.Hidden", "" },
		{ "Space.Name", "ERigElementType::Space" },
		{ "ToolTip", "* This is rig element types that we support\n* This can be used as a mask so supported as a bitfield" },
		{ "ToResetAfterConstructionEvent.Hidden", "" },
		{ "ToResetAfterConstructionEvent.Name", "ERigElementType::ToResetAfterConstructionEvent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigElementType::None", (int64)ERigElementType::None },
		{ "ERigElementType::Bone", (int64)ERigElementType::Bone },
		{ "ERigElementType::Null", (int64)ERigElementType::Null },
		{ "ERigElementType::Space", (int64)ERigElementType::Space },
		{ "ERigElementType::Control", (int64)ERigElementType::Control },
		{ "ERigElementType::Curve", (int64)ERigElementType::Curve },
		{ "ERigElementType::RigidBody", (int64)ERigElementType::RigidBody },
		{ "ERigElementType::Reference", (int64)ERigElementType::Reference },
		{ "ERigElementType::Connector", (int64)ERigElementType::Connector },
		{ "ERigElementType::Socket", (int64)ERigElementType::Socket },
		{ "ERigElementType::First", (int64)ERigElementType::First },
		{ "ERigElementType::Last", (int64)ERigElementType::Last },
		{ "ERigElementType::All", (int64)ERigElementType::All },
		{ "ERigElementType::ToResetAfterConstructionEvent", (int64)ERigElementType::ToResetAfterConstructionEvent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigElementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigElementType",
	"ERigElementType",
	Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigElementType()
{
	if (!Z_Registration_Info_UEnum_ERigElementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigElementType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigElementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigElementType.InnerSingleton;
}
// End Enum ERigElementType

// Begin Enum ERigBoneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigBoneType;
static UEnum* ERigBoneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigBoneType"));
	}
	return Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigBoneType>()
{
	return ERigBoneType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigBoneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Imported.Name", "ERigBoneType::Imported" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "User.Name", "ERigBoneType::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigBoneType::Imported", (int64)ERigBoneType::Imported },
		{ "ERigBoneType::User", (int64)ERigBoneType::User },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigBoneType",
	"ERigBoneType",
	Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType()
{
	if (!Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton;
}
// End Enum ERigBoneType

// Begin Enum ERigMetadataType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigMetadataType;
static UEnum* ERigMetadataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetadataType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigMetadataType"));
	}
	return Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigMetadataType>()
{
	return ERigMetadataType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "ERigMetadataType::Bool" },
		{ "BoolArray.Name", "ERigMetadataType::BoolArray" },
		{ "Comment", "/* \n * The type of meta data stored on an element\n */" },
		{ "Float.Name", "ERigMetadataType::Float" },
		{ "FloatArray.Name", "ERigMetadataType::FloatArray" },
		{ "Int32.Name", "ERigMetadataType::Int32" },
		{ "Int32Array.Name", "ERigMetadataType::Int32Array" },
		{ "Invalid.Comment", "/** MAX - invalid */" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ERigMetadataType::Invalid" },
		{ "Invalid.ToolTip", "MAX - invalid" },
		{ "LinearColor.Name", "ERigMetadataType::LinearColor" },
		{ "LinearColorArray.Name", "ERigMetadataType::LinearColorArray" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Name.Name", "ERigMetadataType::Name" },
		{ "NameArray.Name", "ERigMetadataType::NameArray" },
		{ "Quat.Name", "ERigMetadataType::Quat" },
		{ "QuatArray.Name", "ERigMetadataType::QuatArray" },
		{ "RigElementKey.Name", "ERigMetadataType::RigElementKey" },
		{ "RigElementKeyArray.Name", "ERigMetadataType::RigElementKeyArray" },
		{ "RigVMTypeAllowed", "" },
		{ "Rotator.Name", "ERigMetadataType::Rotator" },
		{ "RotatorArray.Name", "ERigMetadataType::RotatorArray" },
		{ "ToolTip", "* The type of meta data stored on an element" },
		{ "Transform.Name", "ERigMetadataType::Transform" },
		{ "TransformArray.Name", "ERigMetadataType::TransformArray" },
		{ "Vector.Name", "ERigMetadataType::Vector" },
		{ "VectorArray.Name", "ERigMetadataType::VectorArray" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigMetadataType::Bool", (int64)ERigMetadataType::Bool },
		{ "ERigMetadataType::BoolArray", (int64)ERigMetadataType::BoolArray },
		{ "ERigMetadataType::Float", (int64)ERigMetadataType::Float },
		{ "ERigMetadataType::FloatArray", (int64)ERigMetadataType::FloatArray },
		{ "ERigMetadataType::Int32", (int64)ERigMetadataType::Int32 },
		{ "ERigMetadataType::Int32Array", (int64)ERigMetadataType::Int32Array },
		{ "ERigMetadataType::Name", (int64)ERigMetadataType::Name },
		{ "ERigMetadataType::NameArray", (int64)ERigMetadataType::NameArray },
		{ "ERigMetadataType::Vector", (int64)ERigMetadataType::Vector },
		{ "ERigMetadataType::VectorArray", (int64)ERigMetadataType::VectorArray },
		{ "ERigMetadataType::Rotator", (int64)ERigMetadataType::Rotator },
		{ "ERigMetadataType::RotatorArray", (int64)ERigMetadataType::RotatorArray },
		{ "ERigMetadataType::Quat", (int64)ERigMetadataType::Quat },
		{ "ERigMetadataType::QuatArray", (int64)ERigMetadataType::QuatArray },
		{ "ERigMetadataType::Transform", (int64)ERigMetadataType::Transform },
		{ "ERigMetadataType::TransformArray", (int64)ERigMetadataType::TransformArray },
		{ "ERigMetadataType::LinearColor", (int64)ERigMetadataType::LinearColor },
		{ "ERigMetadataType::LinearColorArray", (int64)ERigMetadataType::LinearColorArray },
		{ "ERigMetadataType::RigElementKey", (int64)ERigMetadataType::RigElementKey },
		{ "ERigMetadataType::RigElementKeyArray", (int64)ERigMetadataType::RigElementKeyArray },
		{ "ERigMetadataType::Invalid", (int64)ERigMetadataType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigMetadataType",
	"ERigMetadataType",
	Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType()
{
	if (!Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton;
}
// End Enum ERigMetadataType

// Begin Enum ERigHierarchyNotification
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigHierarchyNotification;
static UEnum* ERigHierarchyNotification_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigHierarchyNotification"));
	}
	return Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigHierarchyNotification>()
{
	return ERigHierarchyNotification_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConnectorSettingChanged.Name", "ERigHierarchyNotification::ConnectorSettingChanged" },
		{ "ControlDrivenListChanged.Name", "ERigHierarchyNotification::ControlDrivenListChanged" },
		{ "ControlSettingChanged.Name", "ERigHierarchyNotification::ControlSettingChanged" },
		{ "ControlShapeTransformChanged.Name", "ERigHierarchyNotification::ControlShapeTransformChanged" },
		{ "ControlVisibilityChanged.Name", "ERigHierarchyNotification::ControlVisibilityChanged" },
		{ "ElementAdded.Name", "ERigHierarchyNotification::ElementAdded" },
		{ "ElementDeselected.Name", "ERigHierarchyNotification::ElementDeselected" },
		{ "ElementRemoved.Name", "ERigHierarchyNotification::ElementRemoved" },
		{ "ElementRenamed.Name", "ERigHierarchyNotification::ElementRenamed" },
		{ "ElementReordered.Name", "ERigHierarchyNotification::ElementReordered" },
		{ "ElementSelected.Name", "ERigHierarchyNotification::ElementSelected" },
		{ "HierarchyCopied.Name", "ERigHierarchyNotification::HierarchyCopied" },
		{ "HierarchyReset.Name", "ERigHierarchyNotification::HierarchyReset" },
		{ "InteractionBracketClosed.Name", "ERigHierarchyNotification::InteractionBracketClosed" },
		{ "InteractionBracketOpened.Name", "ERigHierarchyNotification::InteractionBracketOpened" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigHierarchyNotification::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "ParentChanged.Name", "ERigHierarchyNotification::ParentChanged" },
		{ "ParentWeightsChanged.Name", "ERigHierarchyNotification::ParentWeightsChanged" },
		{ "SocketColorChanged.Name", "ERigHierarchyNotification::SocketColorChanged" },
		{ "SocketDescriptionChanged.Name", "ERigHierarchyNotification::SocketDescriptionChanged" },
		{ "SocketDesiredParentChanged.Name", "ERigHierarchyNotification::SocketDesiredParentChanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigHierarchyNotification::ElementAdded", (int64)ERigHierarchyNotification::ElementAdded },
		{ "ERigHierarchyNotification::ElementRemoved", (int64)ERigHierarchyNotification::ElementRemoved },
		{ "ERigHierarchyNotification::ElementRenamed", (int64)ERigHierarchyNotification::ElementRenamed },
		{ "ERigHierarchyNotification::ElementSelected", (int64)ERigHierarchyNotification::ElementSelected },
		{ "ERigHierarchyNotification::ElementDeselected", (int64)ERigHierarchyNotification::ElementDeselected },
		{ "ERigHierarchyNotification::ParentChanged", (int64)ERigHierarchyNotification::ParentChanged },
		{ "ERigHierarchyNotification::HierarchyReset", (int64)ERigHierarchyNotification::HierarchyReset },
		{ "ERigHierarchyNotification::ControlSettingChanged", (int64)ERigHierarchyNotification::ControlSettingChanged },
		{ "ERigHierarchyNotification::ControlVisibilityChanged", (int64)ERigHierarchyNotification::ControlVisibilityChanged },
		{ "ERigHierarchyNotification::ControlDrivenListChanged", (int64)ERigHierarchyNotification::ControlDrivenListChanged },
		{ "ERigHierarchyNotification::ControlShapeTransformChanged", (int64)ERigHierarchyNotification::ControlShapeTransformChanged },
		{ "ERigHierarchyNotification::ParentWeightsChanged", (int64)ERigHierarchyNotification::ParentWeightsChanged },
		{ "ERigHierarchyNotification::InteractionBracketOpened", (int64)ERigHierarchyNotification::InteractionBracketOpened },
		{ "ERigHierarchyNotification::InteractionBracketClosed", (int64)ERigHierarchyNotification::InteractionBracketClosed },
		{ "ERigHierarchyNotification::ElementReordered", (int64)ERigHierarchyNotification::ElementReordered },
		{ "ERigHierarchyNotification::ConnectorSettingChanged", (int64)ERigHierarchyNotification::ConnectorSettingChanged },
		{ "ERigHierarchyNotification::SocketColorChanged", (int64)ERigHierarchyNotification::SocketColorChanged },
		{ "ERigHierarchyNotification::SocketDescriptionChanged", (int64)ERigHierarchyNotification::SocketDescriptionChanged },
		{ "ERigHierarchyNotification::SocketDesiredParentChanged", (int64)ERigHierarchyNotification::SocketDesiredParentChanged },
		{ "ERigHierarchyNotification::HierarchyCopied", (int64)ERigHierarchyNotification::HierarchyCopied },
		{ "ERigHierarchyNotification::Max", (int64)ERigHierarchyNotification::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigHierarchyNotification",
	"ERigHierarchyNotification",
	Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigHierarchyNotification()
{
	if (!Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton;
}
// End Enum ERigHierarchyNotification

// Begin Enum ERigEvent
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigEvent;
static UEnum* ERigEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigEvent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigEvent"));
	}
	return Z_Registration_Info_UEnum_ERigEvent.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigEvent>()
{
	return ERigEvent_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CloseUndoBracket.Comment", "/** Request to close an Undo bracket in the client */" },
		{ "CloseUndoBracket.Name", "ERigEvent::CloseUndoBracket" },
		{ "CloseUndoBracket.ToolTip", "Request to close an Undo bracket in the client" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigEvent::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "None.Comment", "/** Invalid event */" },
		{ "None.Name", "ERigEvent::None" },
		{ "None.ToolTip", "Invalid event" },
		{ "OpenUndoBracket.Comment", "/** Request to open an Undo bracket in the client */" },
		{ "OpenUndoBracket.Name", "ERigEvent::OpenUndoBracket" },
		{ "OpenUndoBracket.ToolTip", "Request to open an Undo bracket in the client" },
		{ "RequestAutoKey.Comment", "/** Request to Auto-Key the Control in Sequencer */" },
		{ "RequestAutoKey.Name", "ERigEvent::RequestAutoKey" },
		{ "RequestAutoKey.ToolTip", "Request to Auto-Key the Control in Sequencer" },
		{ "RigVMTypeAllowed", "" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigEvent::None", (int64)ERigEvent::None },
		{ "ERigEvent::RequestAutoKey", (int64)ERigEvent::RequestAutoKey },
		{ "ERigEvent::OpenUndoBracket", (int64)ERigEvent::OpenUndoBracket },
		{ "ERigEvent::CloseUndoBracket", (int64)ERigEvent::CloseUndoBracket },
		{ "ERigEvent::Max", (int64)ERigEvent::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigEvent",
	"ERigEvent",
	Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigEvent()
{
	if (!Z_Registration_Info_UEnum_ERigEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigEvent.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigEvent.InnerSingleton;
}
// End Enum ERigEvent

// Begin Enum EControlRigSetKey
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigSetKey;
static UEnum* EControlRigSetKey_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigSetKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigSetKey"));
	}
	return Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigSetKey>()
{
	return EControlRigSetKey_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "//Don't care if a key is set or not, may get set, say if auto key is on somewhere.\n" },
		{ "Always.Name", "EControlRigSetKey::Always" },
		{ "Always.ToolTip", "Don't care if a key is set or not, may get set, say if auto key is on somewhere." },
		{ "Comment", "/** When setting control values what to do with regards to setting key.*/" },
		{ "DoNotCare.Name", "EControlRigSetKey::DoNotCare" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Never.Comment", "//Always set a key here\n" },
		{ "Never.Name", "EControlRigSetKey::Never" },
		{ "Never.ToolTip", "Always set a key here" },
		{ "ToolTip", "When setting control values what to do with regards to setting key." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigSetKey::DoNotCare", (int64)EControlRigSetKey::DoNotCare },
		{ "EControlRigSetKey::Always", (int64)EControlRigSetKey::Always },
		{ "EControlRigSetKey::Never", (int64)EControlRigSetKey::Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigSetKey",
	"EControlRigSetKey",
	Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigSetKey()
{
	if (!Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton;
}
// End Enum EControlRigSetKey

// Begin Enum ERigControlType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlType;
static UEnum* ERigControlType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlType"));
	}
	return Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlType>()
{
	return ERigControlType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "ERigControlType::Bool" },
		{ "EulerTransform.Name", "ERigControlType::EulerTransform" },
		{ "Float.Name", "ERigControlType::Float" },
		{ "Integer.Name", "ERigControlType::Integer" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Position.Name", "ERigControlType::Position" },
		{ "RigVMTypeAllowed", "" },
		{ "Rotator.Name", "ERigControlType::Rotator" },
		{ "Scale.Name", "ERigControlType::Scale" },
		{ "ScaleFloat.Name", "ERigControlType::ScaleFloat" },
		{ "Transform.Hidden", "" },
		{ "Transform.Name", "ERigControlType::Transform" },
		{ "TransformNoScale.Hidden", "" },
		{ "TransformNoScale.Name", "ERigControlType::TransformNoScale" },
		{ "Vector2D.Name", "ERigControlType::Vector2D" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlType::Bool", (int64)ERigControlType::Bool },
		{ "ERigControlType::Float", (int64)ERigControlType::Float },
		{ "ERigControlType::Integer", (int64)ERigControlType::Integer },
		{ "ERigControlType::Vector2D", (int64)ERigControlType::Vector2D },
		{ "ERigControlType::Position", (int64)ERigControlType::Position },
		{ "ERigControlType::Scale", (int64)ERigControlType::Scale },
		{ "ERigControlType::Rotator", (int64)ERigControlType::Rotator },
		{ "ERigControlType::Transform", (int64)ERigControlType::Transform },
		{ "ERigControlType::TransformNoScale", (int64)ERigControlType::TransformNoScale },
		{ "ERigControlType::EulerTransform", (int64)ERigControlType::EulerTransform },
		{ "ERigControlType::ScaleFloat", (int64)ERigControlType::ScaleFloat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlType",
	"ERigControlType",
	Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlType()
{
	if (!Z_Registration_Info_UEnum_ERigControlType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlType.InnerSingleton;
}
// End Enum ERigControlType

// Begin Enum ERigControlAnimationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlAnimationType;
static UEnum* ERigControlAnimationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlAnimationType"));
	}
	return Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAnimationType>()
{
	return ERigControlAnimationType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimationChannel.Comment", "// An animation channel without a 3d shape\n" },
		{ "AnimationChannel.Name", "ERigControlAnimationType::AnimationChannel" },
		{ "AnimationChannel.ToolTip", "An animation channel without a 3d shape" },
		{ "AnimationControl.Comment", "// A visible, animatable control.\n" },
		{ "AnimationControl.Name", "ERigControlAnimationType::AnimationControl" },
		{ "AnimationControl.ToolTip", "A visible, animatable control." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "ProxyControl.Comment", "// A control to drive other controls,\n// not animatable in sequencer.\n" },
		{ "ProxyControl.Name", "ERigControlAnimationType::ProxyControl" },
		{ "ProxyControl.ToolTip", "A control to drive other controls,\nnot animatable in sequencer." },
		{ "VisualCue.Comment", "// Visual feedback only - the control is\n// neither animatable nor selectable.\n" },
		{ "VisualCue.Name", "ERigControlAnimationType::VisualCue" },
		{ "VisualCue.ToolTip", "Visual feedback only - the control is\nneither animatable nor selectable." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlAnimationType::AnimationControl", (int64)ERigControlAnimationType::AnimationControl },
		{ "ERigControlAnimationType::AnimationChannel", (int64)ERigControlAnimationType::AnimationChannel },
		{ "ERigControlAnimationType::ProxyControl", (int64)ERigControlAnimationType::ProxyControl },
		{ "ERigControlAnimationType::VisualCue", (int64)ERigControlAnimationType::VisualCue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlAnimationType",
	"ERigControlAnimationType",
	Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType()
{
	if (!Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton;
}
// End Enum ERigControlAnimationType

// Begin Enum ERigControlValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlValueType;
static UEnum* ERigControlValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlValueType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlValueType"));
	}
	return Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlValueType>()
{
	return ERigControlValueType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Current.Name", "ERigControlValueType::Current" },
		{ "Initial.Name", "ERigControlValueType::Initial" },
		{ "Maximum.Name", "ERigControlValueType::Maximum" },
		{ "Minimum.Name", "ERigControlValueType::Minimum" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlValueType::Initial", (int64)ERigControlValueType::Initial },
		{ "ERigControlValueType::Current", (int64)ERigControlValueType::Current },
		{ "ERigControlValueType::Minimum", (int64)ERigControlValueType::Minimum },
		{ "ERigControlValueType::Maximum", (int64)ERigControlValueType::Maximum },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlValueType",
	"ERigControlValueType",
	Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlValueType()
{
	if (!Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton;
}
// End Enum ERigControlValueType

// Begin Enum ERigControlVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlVisibility;
static UEnum* ERigControlVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlVisibility"));
	}
	return Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlVisibility>()
{
	return ERigControlVisibility_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BasedOnSelection.Comment", "// Visibility Controlled by the selection of driven controls\n" },
		{ "BasedOnSelection.Name", "ERigControlVisibility::BasedOnSelection" },
		{ "BasedOnSelection.ToolTip", "Visibility Controlled by the selection of driven controls" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "RigVMTypeAllowed", "" },
		{ "UserDefined.Comment", "// Visibility controlled by the graph\n" },
		{ "UserDefined.Name", "ERigControlVisibility::UserDefined" },
		{ "UserDefined.ToolTip", "Visibility controlled by the graph" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlVisibility::UserDefined", (int64)ERigControlVisibility::UserDefined },
		{ "ERigControlVisibility::BasedOnSelection", (int64)ERigControlVisibility::BasedOnSelection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlVisibility",
	"ERigControlVisibility",
	Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility()
{
	if (!Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton;
}
// End Enum ERigControlVisibility

// Begin Enum ERigControlAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlAxis;
static UEnum* ERigControlAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlAxis"));
	}
	return Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAxis>()
{
	return ERigControlAxis_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "RigVMTypeAllowed", "" },
		{ "X.Name", "ERigControlAxis::X" },
		{ "Y.Name", "ERigControlAxis::Y" },
		{ "Z.Name", "ERigControlAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigControlAxis::X", (int64)ERigControlAxis::X },
		{ "ERigControlAxis::Y", (int64)ERigControlAxis::Y },
		{ "ERigControlAxis::Z", (int64)ERigControlAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigControlAxis",
	"ERigControlAxis",
	Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis()
{
	if (!Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton;
}
// End Enum ERigControlAxis

// Begin ScriptStruct FRigControlLimitEnabled
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlLimitEnabled;
class UScriptStruct* FRigControlLimitEnabled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlLimitEnabled, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlLimitEnabled"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlLimitEnabled>()
{
	return FRigControlLimitEnabled::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMinimum_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaximum_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMinimum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMinimum;
	static void NewProp_bMaximum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaximum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlLimitEnabled>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_SetBit(void* Obj)
{
	((FRigControlLimitEnabled*)Obj)->bMinimum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum = { "bMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlLimitEnabled), &Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMinimum_MetaData), NewProp_bMinimum_MetaData) };
void Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_SetBit(void* Obj)
{
	((FRigControlLimitEnabled*)Obj)->bMaximum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum = { "bMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlLimitEnabled), &Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaximum_MetaData), NewProp_bMaximum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlLimitEnabled",
	Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers),
	sizeof(FRigControlLimitEnabled),
	alignof(FRigControlLimitEnabled),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton, Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton;
}
// End ScriptStruct FRigControlLimitEnabled

// Begin ScriptStruct FRigControlValueStorage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlValueStorage;
class UScriptStruct* FRigControlValueStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlValueStorage, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlValueStorage"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlValueStorage>()
{
	return FRigControlValueStorage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlValueStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float00_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float01_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float02_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float03_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float10_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float11_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float12_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float13_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float20_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float21_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float22_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float23_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float30_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float31_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float32_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float33_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float00_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float01_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float02_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float03_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float10_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float11_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float12_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float13_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float20_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float21_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float22_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float23_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float30_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float31_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float32_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float33_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float00;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float02;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float03;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float10;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float11;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float12;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float13;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float20;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float21;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float22;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float23;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float30;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float31;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float32;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float33;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float00_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float01_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float02_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float03_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float10_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float11_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float12_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float13_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float20_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float21_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float22_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float23_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float30_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float31_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float32_2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float33_2;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlValueStorage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00 = { "Float00", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float00), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float00_MetaData), NewProp_Float00_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01 = { "Float01", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float01_MetaData), NewProp_Float01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02 = { "Float02", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float02), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float02_MetaData), NewProp_Float02_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03 = { "Float03", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float03), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float03_MetaData), NewProp_Float03_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10 = { "Float10", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float10), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float10_MetaData), NewProp_Float10_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11 = { "Float11", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float11), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float11_MetaData), NewProp_Float11_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12 = { "Float12", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float12), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float12_MetaData), NewProp_Float12_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13 = { "Float13", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float13), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float13_MetaData), NewProp_Float13_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20 = { "Float20", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float20), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float20_MetaData), NewProp_Float20_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21 = { "Float21", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float21), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float21_MetaData), NewProp_Float21_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22 = { "Float22", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float22), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float22_MetaData), NewProp_Float22_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23 = { "Float23", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float23), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float23_MetaData), NewProp_Float23_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30 = { "Float30", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float30), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float30_MetaData), NewProp_Float30_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31 = { "Float31", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float31), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float31_MetaData), NewProp_Float31_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32 = { "Float32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float32), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float32_MetaData), NewProp_Float32_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33 = { "Float33", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float33), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float33_MetaData), NewProp_Float33_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2 = { "Float00_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float00_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float00_2_MetaData), NewProp_Float00_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2 = { "Float01_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float01_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float01_2_MetaData), NewProp_Float01_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2 = { "Float02_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float02_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float02_2_MetaData), NewProp_Float02_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2 = { "Float03_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float03_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float03_2_MetaData), NewProp_Float03_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2 = { "Float10_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float10_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float10_2_MetaData), NewProp_Float10_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2 = { "Float11_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float11_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float11_2_MetaData), NewProp_Float11_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2 = { "Float12_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float12_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float12_2_MetaData), NewProp_Float12_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2 = { "Float13_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float13_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float13_2_MetaData), NewProp_Float13_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2 = { "Float20_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float20_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float20_2_MetaData), NewProp_Float20_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2 = { "Float21_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float21_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float21_2_MetaData), NewProp_Float21_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2 = { "Float22_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float22_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float22_2_MetaData), NewProp_Float22_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2 = { "Float23_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float23_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float23_2_MetaData), NewProp_Float23_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2 = { "Float30_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float30_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float30_2_MetaData), NewProp_Float30_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2 = { "Float31_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float31_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float31_2_MetaData), NewProp_Float31_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2 = { "Float32_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float32_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float32_2_MetaData), NewProp_Float32_2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2 = { "Float33_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValueStorage, Float33_2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float33_2_MetaData), NewProp_Float33_2_MetaData) };
void Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FRigControlValueStorage*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControlValueStorage), &Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlValueStorage",
	Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers),
	sizeof(FRigControlValueStorage),
	alignof(FRigControlValueStorage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlValueStorage()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton, Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton;
}
// End ScriptStruct FRigControlValueStorage

// Begin ScriptStruct FRigControlValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlValue;
class UScriptStruct* FRigControlValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlValue"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlValue>()
{
	return FRigControlValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatStorage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Storage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage = { "FloatStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValue, FloatStorage), Z_Construct_UScriptStruct_FRigControlValueStorage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatStorage_MetaData), NewProp_FloatStorage_MetaData) }; // 209396166
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlValue, Storage_DEPRECATED), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Storage_MetaData), NewProp_Storage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlValue",
	Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers),
	sizeof(FRigControlValue),
	alignof(FRigControlValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton, Z_Construct_UScriptStruct_FRigControlValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton;
}
// End ScriptStruct FRigControlValue

// Begin ScriptStruct FRigControlModifiedContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlModifiedContext;
class UScriptStruct* FRigControlModifiedContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlModifiedContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlModifiedContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlModifiedContext>()
{
	return FRigControlModifiedContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlModifiedContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlModifiedContext",
	nullptr,
	0,
	sizeof(FRigControlModifiedContext),
	alignof(FRigControlModifiedContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlModifiedContext()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton, Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton;
}
// End ScriptStruct FRigControlModifiedContext

// Begin ScriptStruct FRigElementKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKey;
class UScriptStruct* FRigElementKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKey"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKey>()
{
	return FRigElementKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "CustomWidget", "ElementName" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementKey, Type), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1289171826
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementKey, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElementKey",
	Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers),
	sizeof(FRigElementKey),
	alignof(FRigElementKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton;
}
// End ScriptStruct FRigElementKey

// Begin ScriptStruct FRigElementKeyCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKeyCollection;
class UScriptStruct* FRigElementKeyCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyCollection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKeyCollection"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKeyCollection>()
{
	return FRigElementKeyCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKeyCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementKeyCollection, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElementKeyCollection",
	Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers),
	sizeof(FRigElementKeyCollection),
	alignof(FRigElementKeyCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton;
}
// End ScriptStruct FRigElementKeyCollection

// Begin ScriptStruct FRigElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElement;
class UScriptStruct* FRigElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElement>()
{
	return FRigElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElement, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElement, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElement",
	Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers),
	sizeof(FRigElement),
	alignof(FRigElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElement()
{
	if (!Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton, Z_Construct_UScriptStruct_FRigElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton;
}
// End ScriptStruct FRigElement

// Begin ScriptStruct FRigEventContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigEventContext;
class UScriptStruct* FRigEventContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigEventContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigEventContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigEventContext>()
{
	return FRigEventContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigEventContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigEventContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigEventContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigEventContext",
	nullptr,
	0,
	sizeof(FRigEventContext),
	alignof(FRigEventContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigEventContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigEventContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigEventContext()
{
	if (!Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton, Z_Construct_UScriptStruct_FRigEventContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton;
}
// End ScriptStruct FRigEventContext

// Begin Enum ERigElementResolveState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigElementResolveState;
static UEnum* ERigElementResolveState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementResolveState, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigElementResolveState"));
	}
	return Z_Registration_Info_UEnum_ERigElementResolveState.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigElementResolveState>()
{
	return ERigElementResolveState_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DefaultTarget.Name", "ERigElementResolveState::DefaultTarget" },
		{ "InvalidTarget.Name", "ERigElementResolveState::InvalidTarget" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigElementResolveState::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "PossibleTarget.Name", "ERigElementResolveState::PossibleTarget" },
		{ "Unknown.Name", "ERigElementResolveState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigElementResolveState::Unknown", (int64)ERigElementResolveState::Unknown },
		{ "ERigElementResolveState::InvalidTarget", (int64)ERigElementResolveState::InvalidTarget },
		{ "ERigElementResolveState::PossibleTarget", (int64)ERigElementResolveState::PossibleTarget },
		{ "ERigElementResolveState::DefaultTarget", (int64)ERigElementResolveState::DefaultTarget },
		{ "ERigElementResolveState::Max", (int64)ERigElementResolveState::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigElementResolveState",
	"ERigElementResolveState",
	Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigElementResolveState()
{
	if (!Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigElementResolveState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigElementResolveState.InnerSingleton;
}
// End Enum ERigElementResolveState

// Begin ScriptStruct FRigElementResolveResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementResolveResult;
class UScriptStruct* FRigElementResolveResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementResolveResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementResolveResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementResolveResult, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementResolveResult"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementResolveResult.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementResolveResult>()
{
	return FRigElementResolveResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigElementResolveResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementResolveResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementResolveResult, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 1447557315
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementResolveResult, State), Z_Construct_UEnum_ControlRig_ERigElementResolveState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 1139954561
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigElementResolveResult, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigElementResolveResult",
	Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::PropPointers),
	sizeof(FRigElementResolveResult),
	alignof(FRigElementResolveResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigElementResolveResult()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementResolveResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementResolveResult.InnerSingleton, Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigElementResolveResult.InnerSingleton;
}
// End ScriptStruct FRigElementResolveResult

// Begin Enum EModularRigResolveState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularRigResolveState;
static UEnum* EModularRigResolveState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EModularRigResolveState, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EModularRigResolveState"));
	}
	return Z_Registration_Info_UEnum_EModularRigResolveState.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EModularRigResolveState>()
{
	return EModularRigResolveState_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EModularRigResolveState::Error" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EModularRigResolveState::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Success.Name", "EModularRigResolveState::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularRigResolveState::Success", (int64)EModularRigResolveState::Success },
		{ "EModularRigResolveState::Error", (int64)EModularRigResolveState::Error },
		{ "EModularRigResolveState::Max", (int64)EModularRigResolveState::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EModularRigResolveState",
	"EModularRigResolveState",
	Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EModularRigResolveState()
{
	if (!Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton, Z_Construct_UEnum_ControlRig_EModularRigResolveState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularRigResolveState.InnerSingleton;
}
// End Enum EModularRigResolveState

// Begin ScriptStruct FModularRigResolveResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularRigResolveResult;
class UScriptStruct* FModularRigResolveResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigResolveResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularRigResolveResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularRigResolveResult, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ModularRigResolveResult"));
	}
	return Z_Registration_Info_UScriptStruct_ModularRigResolveResult.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FModularRigResolveResult>()
{
	return FModularRigResolveResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularRigResolveResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matches_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Excluded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Matches;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Excluded_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Excluded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularRigResolveResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigResolveResult, Connector), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connector_MetaData), NewProp_Connector_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Matches_Inner = { "Matches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementResolveResult, METADATA_PARAMS(0, nullptr) }; // 1873726576
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Matches = { "Matches", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigResolveResult, Matches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matches_MetaData), NewProp_Matches_MetaData) }; // 1873726576
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Excluded_Inner = { "Excluded", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementResolveResult, METADATA_PARAMS(0, nullptr) }; // 1873726576
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Excluded = { "Excluded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigResolveResult, Excluded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Excluded_MetaData), NewProp_Excluded_MetaData) }; // 1873726576
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigResolveResult, State), Z_Construct_UEnum_ControlRig_EModularRigResolveState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3067643698
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularRigResolveResult, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Connector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Matches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Matches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Excluded_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Excluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ModularRigResolveResult",
	Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::PropPointers),
	sizeof(FModularRigResolveResult),
	alignof(FModularRigResolveResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularRigResolveResult()
{
	if (!Z_Registration_Info_UScriptStruct_ModularRigResolveResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularRigResolveResult.InnerSingleton, Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularRigResolveResult.InnerSingleton;
}
// End ScriptStruct FModularRigResolveResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigElementType_StaticEnum, TEXT("ERigElementType"), &Z_Registration_Info_UEnum_ERigElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1289171826U) },
		{ ERigBoneType_StaticEnum, TEXT("ERigBoneType"), &Z_Registration_Info_UEnum_ERigBoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3895347495U) },
		{ ERigMetadataType_StaticEnum, TEXT("ERigMetadataType"), &Z_Registration_Info_UEnum_ERigMetadataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1546994617U) },
		{ ERigHierarchyNotification_StaticEnum, TEXT("ERigHierarchyNotification"), &Z_Registration_Info_UEnum_ERigHierarchyNotification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 173481387U) },
		{ ERigEvent_StaticEnum, TEXT("ERigEvent"), &Z_Registration_Info_UEnum_ERigEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2763509764U) },
		{ EControlRigSetKey_StaticEnum, TEXT("EControlRigSetKey"), &Z_Registration_Info_UEnum_EControlRigSetKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 738609042U) },
		{ ERigControlType_StaticEnum, TEXT("ERigControlType"), &Z_Registration_Info_UEnum_ERigControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 83158911U) },
		{ ERigControlAnimationType_StaticEnum, TEXT("ERigControlAnimationType"), &Z_Registration_Info_UEnum_ERigControlAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3785156150U) },
		{ ERigControlValueType_StaticEnum, TEXT("ERigControlValueType"), &Z_Registration_Info_UEnum_ERigControlValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294096335U) },
		{ ERigControlVisibility_StaticEnum, TEXT("ERigControlVisibility"), &Z_Registration_Info_UEnum_ERigControlVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 182573794U) },
		{ ERigControlAxis_StaticEnum, TEXT("ERigControlAxis"), &Z_Registration_Info_UEnum_ERigControlAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1515302631U) },
		{ ERigElementResolveState_StaticEnum, TEXT("ERigElementResolveState"), &Z_Registration_Info_UEnum_ERigElementResolveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1139954561U) },
		{ EModularRigResolveState_StaticEnum, TEXT("EModularRigResolveState"), &Z_Registration_Info_UEnum_EModularRigResolveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3067643698U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigControlLimitEnabled::StaticStruct, Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewStructOps, TEXT("RigControlLimitEnabled"), &Z_Registration_Info_UScriptStruct_RigControlLimitEnabled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlLimitEnabled), 4111226886U) },
		{ FRigControlValueStorage::StaticStruct, Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewStructOps, TEXT("RigControlValueStorage"), &Z_Registration_Info_UScriptStruct_RigControlValueStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlValueStorage), 209396166U) },
		{ FRigControlValue::StaticStruct, Z_Construct_UScriptStruct_FRigControlValue_Statics::NewStructOps, TEXT("RigControlValue"), &Z_Registration_Info_UScriptStruct_RigControlValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlValue), 4047065167U) },
		{ FRigControlModifiedContext::StaticStruct, Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::NewStructOps, TEXT("RigControlModifiedContext"), &Z_Registration_Info_UScriptStruct_RigControlModifiedContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlModifiedContext), 593408285U) },
		{ FRigElementKey::StaticStruct, Z_Construct_UScriptStruct_FRigElementKey_Statics::NewStructOps, TEXT("RigElementKey"), &Z_Registration_Info_UScriptStruct_RigElementKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKey), 1447557315U) },
		{ FRigElementKeyCollection::StaticStruct, Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewStructOps, TEXT("RigElementKeyCollection"), &Z_Registration_Info_UScriptStruct_RigElementKeyCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKeyCollection), 1637116294U) },
		{ FRigElement::StaticStruct, Z_Construct_UScriptStruct_FRigElement_Statics::NewStructOps, TEXT("RigElement"), &Z_Registration_Info_UScriptStruct_RigElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElement), 2174708262U) },
		{ FRigEventContext::StaticStruct, Z_Construct_UScriptStruct_FRigEventContext_Statics::NewStructOps, TEXT("RigEventContext"), &Z_Registration_Info_UScriptStruct_RigEventContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigEventContext), 570676820U) },
		{ FRigElementResolveResult::StaticStruct, Z_Construct_UScriptStruct_FRigElementResolveResult_Statics::NewStructOps, TEXT("RigElementResolveResult"), &Z_Registration_Info_UScriptStruct_RigElementResolveResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementResolveResult), 1873726576U) },
		{ FModularRigResolveResult::StaticStruct, Z_Construct_UScriptStruct_FModularRigResolveResult_Statics::NewStructOps, TEXT("ModularRigResolveResult"), &Z_Registration_Info_UScriptStruct_ModularRigResolveResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularRigResolveResult), 810573742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_4271005269(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
