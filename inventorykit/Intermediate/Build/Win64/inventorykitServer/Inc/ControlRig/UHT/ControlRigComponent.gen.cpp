// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigComponent() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigComponent();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigComponent_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigComponentSpace();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UFunction* Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedBone();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedComponent();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedCurve();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedElement();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftComponentReference();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigComponentSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigComponentSpace;
static UEnum* EControlRigComponentSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigComponentSpace"));
	}
	return Z_Registration_Info_UEnum_EControlRigComponentSpace.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigComponentSpace>()
{
	return EControlRigComponentSpace_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorSpace.Comment", "/** The space below the actor's root transform */" },
		{ "ActorSpace.Name", "EControlRigComponentSpace::ActorSpace" },
		{ "ActorSpace.ToolTip", "The space below the actor's root transform" },
		{ "Comment", "/** Enum for controlling which space a transform is applied in. */" },
		{ "ComponentSpace.Comment", "/** The space defined by the Control Rig Component */" },
		{ "ComponentSpace.Name", "EControlRigComponentSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "The space defined by the Control Rig Component" },
		{ "LocalSpace.Comment", "/** The space defined by each element's parent (bone, control etc) */" },
		{ "LocalSpace.Name", "EControlRigComponentSpace::LocalSpace" },
		{ "LocalSpace.ToolTip", "The space defined by each element's parent (bone, control etc)" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigComponentSpace::Max" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "RigSpace.Comment", "/**\n\x09* The space within the rig. Currently the same as Component Space.\n\x09* Inside of control rig this is called 'Global Space'.\n\x09*/" },
		{ "RigSpace.Name", "EControlRigComponentSpace::RigSpace" },
		{ "RigSpace.ToolTip", "The space within the rig. Currently the same as Component Space.\nInside of control rig this is called 'Global Space'." },
		{ "ToolTip", "Enum for controlling which space a transform is applied in." },
		{ "WorldSpace.Comment", "/** World space transform */" },
		{ "WorldSpace.Name", "EControlRigComponentSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "World space transform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigComponentSpace::WorldSpace", (int64)EControlRigComponentSpace::WorldSpace },
		{ "EControlRigComponentSpace::ActorSpace", (int64)EControlRigComponentSpace::ActorSpace },
		{ "EControlRigComponentSpace::ComponentSpace", (int64)EControlRigComponentSpace::ComponentSpace },
		{ "EControlRigComponentSpace::RigSpace", (int64)EControlRigComponentSpace::RigSpace },
		{ "EControlRigComponentSpace::LocalSpace", (int64)EControlRigComponentSpace::LocalSpace },
		{ "EControlRigComponentSpace::Max", (int64)EControlRigComponentSpace::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigComponentSpace",
	"EControlRigComponentSpace",
	Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigComponentSpace()
{
	if (!Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigComponentSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigComponentSpace.InnerSingleton;
}
// End Enum EControlRigComponentSpace

// Begin Enum EControlRigComponentMapDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigComponentMapDirection;
static UEnum* EControlRigComponentMapDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigComponentMapDirection"));
	}
	return Z_Registration_Info_UEnum_EControlRigComponentMapDirection.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigComponentMapDirection>()
{
	return EControlRigComponentMapDirection_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum for controlling how an element should be mapped. */" },
		{ "Input.Name", "EControlRigComponentMapDirection::Input" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "Output.Comment", "// An input driving a rig element\n" },
		{ "Output.Name", "EControlRigComponentMapDirection::Output" },
		{ "Output.ToolTip", "An input driving a rig element" },
		{ "ToolTip", "Enum for controlling how an element should be mapped." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigComponentMapDirection::Input", (int64)EControlRigComponentMapDirection::Input },
		{ "EControlRigComponentMapDirection::Output", (int64)EControlRigComponentMapDirection::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigComponentMapDirection",
	"EControlRigComponentMapDirection",
	Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection()
{
	if (!Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigComponentMapDirection.InnerSingleton;
}
// End Enum EControlRigComponentMapDirection

// Begin ScriptStruct FControlRigComponentMappedElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement;
class UScriptStruct* FControlRigComponentMappedElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigComponentMappedElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigComponentMappedElement"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigComponentMappedElement>()
{
	return FControlRigComponentMappedElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Mapped Element" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentReference_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The component to map to the Control Rig\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The component to map to the Control Rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformIndex_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// An optional index that can be used with components\n// with multiple transforms (for example the InstancedStaticMeshComponent)\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "An optional index that can be used with components\nwith multiple transforms (for example the InstancedStaticMeshComponent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformName_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// An optional name that can be used with components\n// that have sockets (for example the SkeletalMeshComponent)\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "An optional name that can be used with components\nthat have sockets (for example the SkeletalMeshComponent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The type of element this is mapped to\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The type of element this is mapped to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The name of the element to map to\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The name of the element to map to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The direction (input / output) to be used for mapping an element\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The direction (input / output) to be used for mapping an element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The offset transform to apply\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The offset transform to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// defines how much the mapped element should be driven\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "defines how much the mapped element should be driven" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// space in which the mapping happens\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "space in which the mapping happens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransformIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransformName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ElementName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigComponentMappedElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, ComponentReference), Z_Construct_UScriptStruct_FSoftComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentReference_MetaData), NewProp_ComponentReference_MetaData) }; // 3850706817
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_TransformIndex = { "TransformIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, TransformIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformIndex_MetaData), NewProp_TransformIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_TransformName = { "TransformName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, TransformName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformName_MetaData), NewProp_TransformName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementType_MetaData), NewProp_ElementType_MetaData) }; // 1289171826
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, ElementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementName_MetaData), NewProp_ElementName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, Direction), Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3400686565
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1897648003
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, ElementIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementIndex_MetaData), NewProp_ElementIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_SubIndex = { "SubIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedElement, SubIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubIndex_MetaData), NewProp_SubIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ComponentReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_TransformIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_TransformName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_ElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewProp_SubIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigComponentMappedElement",
	Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::PropPointers),
	sizeof(FControlRigComponentMappedElement),
	alignof(FControlRigComponentMappedElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedElement()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.InnerSingleton, Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement.InnerSingleton;
}
// End ScriptStruct FControlRigComponentMappedElement

// Begin ScriptStruct FControlRigComponentMappedComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent;
class UScriptStruct* FControlRigComponentMappedComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigComponentMappedComponent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigComponentMappedComponent"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigComponentMappedComponent>()
{
	return FControlRigComponentMappedComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Mapped Component" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// The type of element this is mapped to\n" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The type of element this is mapped to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ElementName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigComponentMappedComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedComponent, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedComponent, ElementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementName_MetaData), NewProp_ElementName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedComponent, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementType_MetaData), NewProp_ElementType_MetaData) }; // 1289171826
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedComponent, Direction), Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3400686565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_ElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigComponentMappedComponent",
	Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::PropPointers),
	sizeof(FControlRigComponentMappedComponent),
	alignof(FControlRigComponentMappedComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedComponent()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.InnerSingleton, Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent.InnerSingleton;
}
// End ScriptStruct FControlRigComponentMappedComponent

// Begin ScriptStruct FControlRigComponentMappedBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone;
class UScriptStruct* FControlRigComponentMappedBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigComponentMappedBone, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigComponentMappedBone"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigComponentMappedBone>()
{
	return FControlRigComponentMappedBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Mapped Bone" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigComponentMappedBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedBone, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedBone, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigComponentMappedBone",
	Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::PropPointers),
	sizeof(FControlRigComponentMappedBone),
	alignof(FControlRigComponentMappedBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedBone()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.InnerSingleton, Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone.InnerSingleton;
}
// End ScriptStruct FControlRigComponentMappedBone

// Begin ScriptStruct FControlRigComponentMappedCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve;
class UScriptStruct* FControlRigComponentMappedCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigComponentMappedCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigComponentMappedCurve"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigComponentMappedCurve>()
{
	return FControlRigComponentMappedCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Mapped Curve" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigComponentMappedCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedCurve, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigComponentMappedCurve, Target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigComponentMappedCurve",
	Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::PropPointers),
	sizeof(FControlRigComponentMappedCurve),
	alignof(FControlRigComponentMappedCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigComponentMappedCurve()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.InnerSingleton, Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve.InnerSingleton;
}
// End ScriptStruct FControlRigComponentMappedCurve

// Begin Delegate FControlRigComponentDelegate
struct Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics
{
	struct _Script_ControlRig_eventControlRigComponentDelegate_Parms
	{
		UControlRigComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Bindable event for external objects to hook into ControlRig-level execution */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Bindable event for external objects to hook into ControlRig-level execution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ControlRig_eventControlRigComponentDelegate_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ControlRig, nullptr, "ControlRigComponentDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::_Script_ControlRig_eventControlRigComponentDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::_Script_ControlRig_eventControlRigComponentDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FControlRigComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& ControlRigComponentDelegate, UControlRigComponent* Component)
{
	struct _Script_ControlRig_eventControlRigComponentDelegate_Parms
	{
		UControlRigComponent* Component;
	};
	_Script_ControlRig_eventControlRigComponentDelegate_Parms Parms;
	Parms.Component=Component;
	ControlRigComponentDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FControlRigComponentDelegate

// Begin Class UControlRigComponent Function AddMappedCompleteSkeletalMesh
struct Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics
{
	struct ControlRigComponent_eventAddMappedCompleteSkeletalMesh_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		EControlRigComponentMapDirection InDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Adds all matching bones to the rig, should not be used before OnPreInitialize Event */" },
		{ "CPP_Default_InDirection", "Output" },
		{ "DisplayName", "Add Mapped Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Adds all matching bones to the rig, should not be used before OnPreInitialize Event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedCompleteSkeletalMesh_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedCompleteSkeletalMesh_Parms, InDirection), Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirection_MetaData), NewProp_InDirection_MetaData) }; // 3400686565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_InDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "AddMappedCompleteSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::ControlRigComponent_eventAddMappedCompleteSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::ControlRigComponent_eventAddMappedCompleteSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execAddMappedCompleteSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_ENUM(EControlRigComponentMapDirection,Z_Param_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappedCompleteSkeletalMesh(Z_Param_SkeletalMeshComponent,EControlRigComponentMapDirection(Z_Param_InDirection));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function AddMappedCompleteSkeletalMesh

// Begin Class UControlRigComponent Function AddMappedComponents
struct Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics
{
	struct ControlRigComponent_eventAddMappedComponents_Parms
	{
		TArray<FControlRigComponentMappedComponent> Components;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedComponent, METADATA_PARAMS(0, nullptr) }; // 543384502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedComponents_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 543384502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "AddMappedComponents", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::ControlRigComponent_eventAddMappedComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::ControlRigComponent_eventAddMappedComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_AddMappedComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_AddMappedComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execAddMappedComponents)
{
	P_GET_TARRAY(FControlRigComponentMappedComponent,Z_Param_Components);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappedComponents(Z_Param_Components);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function AddMappedComponents

// Begin Class UControlRigComponent Function AddMappedElements
struct Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics
{
	struct ControlRigComponent_eventAddMappedElements_Parms
	{
		TArray<FControlRigComponentMappedElement> NewMappedElements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Adds the provided mapped elements to the component, should not be used before OnPreInitialize Event*/" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Adds the provided mapped elements to the component, should not be used before OnPreInitialize Event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMappedElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMappedElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::NewProp_NewMappedElements_Inner = { "NewMappedElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedElement, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::NewProp_NewMappedElements = { "NewMappedElements", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedElements_Parms, NewMappedElements), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::NewProp_NewMappedElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::NewProp_NewMappedElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "AddMappedElements", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::ControlRigComponent_eventAddMappedElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::ControlRigComponent_eventAddMappedElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_AddMappedElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_AddMappedElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execAddMappedElements)
{
	P_GET_TARRAY(FControlRigComponentMappedElement,Z_Param_NewMappedElements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappedElements(Z_Param_NewMappedElements);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function AddMappedElements

// Begin Class UControlRigComponent Function AddMappedSkeletalMesh
struct Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics
{
	struct ControlRigComponent_eventAddMappedSkeletalMesh_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		TArray<FControlRigComponentMappedBone> Bones;
		TArray<FControlRigComponentMappedCurve> Curves;
		EControlRigComponentMapDirection InDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event */" },
		{ "CPP_Default_InDirection", "Output" },
		{ "DisplayName", "Add Mapped Skeletal Mesh Bone Array" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Adds a series of mapped bones to the rig, should not be used before OnPreInitialize Event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedSkeletalMesh_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedBone, METADATA_PARAMS(0, nullptr) }; // 3578241513
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedSkeletalMesh_Parms, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3578241513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedCurve, METADATA_PARAMS(0, nullptr) }; // 605120432
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedSkeletalMesh_Parms, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 605120432
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventAddMappedSkeletalMesh_Parms, InDirection), Z_Construct_UEnum_ControlRig_EControlRigComponentMapDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirection_MetaData), NewProp_InDirection_MetaData) }; // 3400686565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Bones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Curves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_InDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "AddMappedSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::ControlRigComponent_eventAddMappedSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::ControlRigComponent_eventAddMappedSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execAddMappedSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_TARRAY(FControlRigComponentMappedBone,Z_Param_Bones);
	P_GET_TARRAY(FControlRigComponentMappedCurve,Z_Param_Curves);
	P_GET_ENUM(EControlRigComponentMapDirection,Z_Param_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMappedSkeletalMesh(Z_Param_SkeletalMeshComponent,Z_Param_Bones,Z_Param_Curves,EControlRigComponentMapDirection(Z_Param_InDirection));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function AddMappedSkeletalMesh

// Begin Class UControlRigComponent Function CanExecute
struct Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics
{
	struct ControlRigComponent_eventCanExecute_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Returns true if the Component can execute its Control Rig */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns true if the Component can execute its Control Rig" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigComponent_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventCanExecute_Parms), &Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "CanExecute", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::ControlRigComponent_eventCanExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::ControlRigComponent_eventCanExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_CanExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_CanExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execCanExecute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExecute();
	P_NATIVE_END;
}
// End Class UControlRigComponent Function CanExecute

// Begin Class UControlRigComponent Function ClearMappedElements
struct Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Removes all mapped elements from the component */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Removes all mapped elements from the component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "ClearMappedElements", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UControlRigComponent_ClearMappedElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_ClearMappedElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execClearMappedElements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMappedElements();
	P_NATIVE_END;
}
// End Class UControlRigComponent Function ClearMappedElements

// Begin Class UControlRigComponent Function DoesElementExist
struct Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics
{
	struct ControlRigComponent_eventDoesElementExist_Parms
	{
		FName Name;
		ERigElementType ElementType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/**\n\x09 * Returns true if an element given a type and name exists in the rig\n\x09 * @param Name The name for the element to look up\n\x09 * @param ElementType The type of element to look up\n\x09 *\n\x09 * @return true if the element exists\n\x09 */" },
		{ "CPP_Default_ElementType", "Bone" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns true if an element given a type and name exists in the rig\n@param Name The name for the element to look up\n@param ElementType The type of element to look up\n\n@return true if the element exists" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventDoesElementExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventDoesElementExist_Parms, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(0, nullptr) }; // 1289171826
void Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigComponent_eventDoesElementExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventDoesElementExist_Parms), &Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ElementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "DoesElementExist", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::ControlRigComponent_eventDoesElementExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::ControlRigComponent_eventDoesElementExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_DoesElementExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_DoesElementExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execDoesElementExist)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_ENUM(ERigElementType,Z_Param_ElementType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesElementExist(Z_Param_Name,ERigElementType(Z_Param_ElementType));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function DoesElementExist

// Begin Class UControlRigComponent Function GetAbsoluteTime
struct Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics
{
	struct ControlRigComponent_eventGetAbsoluteTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Get the ControlRig's local time in seconds since its last initialize */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Get the ControlRig's local time in seconds since its last initialize" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetAbsoluteTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetAbsoluteTime", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::ControlRigComponent_eventGetAbsoluteTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::ControlRigComponent_eventGetAbsoluteTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetAbsoluteTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbsoluteTime();
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetAbsoluteTime

// Begin Class UControlRigComponent Function GetBoneTransform
struct Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics
{
	struct ControlRigComponent_eventGetBoneTransform_Parms
	{
		FName BoneName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the transform of the bone in the requested space \n\x09 * @param BoneName The name of the bone to retrieve the transform for\n\x09 * @param Space The space to retrieve the transform in\n\x09 *\n\x09 * @return the transform of the bone in the requested space\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the transform of the bone in the requested space\n@param BoneName The name of the bone to retrieve the transform for\n@param Space The space to retrieve the transform in\n\n@return the transform of the bone in the requested space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetBoneTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetBoneTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetBoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::ControlRigComponent_eventGetBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::ControlRigComponent_eventGetBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetBoneTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransform(Z_Param_BoneName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetBoneTransform

// Begin Class UControlRigComponent Function GetControlBool
struct Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics
{
	struct ControlRigComponent_eventGetControlBool_Parms
	{
		FName ControlName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a bool control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 *\n\x09 * @return The bool value of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a bool control\n@param ControlName The name of the control to retrieve the value for\n\n@return The bool value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlBool_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigComponent_eventGetControlBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventGetControlBool_Parms), &Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlBool", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::ControlRigComponent_eventGetControlBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::ControlRigComponent_eventGetControlBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetControlBool(Z_Param_ControlName);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlBool

// Begin Class UControlRigComponent Function GetControlFloat
struct Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics
{
	struct ControlRigComponent_eventGetControlFloat_Parms
	{
		FName ControlName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a float control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 *\n\x09 * @return The float value of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a float control\n@param ControlName The name of the control to retrieve the value for\n\n@return The float value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlFloat_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlFloat", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::ControlRigComponent_eventGetControlFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::ControlRigComponent_eventGetControlFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetControlFloat(Z_Param_ControlName);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlFloat

// Begin Class UControlRigComponent Function GetControlInt
struct Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics
{
	struct ControlRigComponent_eventGetControlInt_Parms
	{
		FName ControlName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of an integer control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 *\n\x09 * @return The int32 value of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of an integer control\n@param ControlName The name of the control to retrieve the value for\n\n@return The int32 value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlInt_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlInt", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::ControlRigComponent_eventGetControlInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::ControlRigComponent_eventGetControlInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetControlInt(Z_Param_ControlName);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlInt

// Begin Class UControlRigComponent Function GetControlOffset
struct Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics
{
	struct ControlRigComponent_eventGetControlOffset_Parms
	{
		FName ControlName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the offset transform of a control \n\x09 * @param ControlName The name of the control to retrieve the offset transform for\n\x09 * @param Space The space to retrieve the offset transform in\n\x09 *\n\x09 * @return The offset transform of a control \n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the offset transform of a control\n@param ControlName The name of the control to retrieve the offset transform for\n@param Space The space to retrieve the offset transform in\n\n@return The offset transform of a control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlOffset_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlOffset_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlOffset", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::ControlRigComponent_eventGetControlOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::ControlRigComponent_eventGetControlOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlOffset)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetControlOffset(Z_Param_ControlName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlOffset

// Begin Class UControlRigComponent Function GetControlPosition
struct Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics
{
	struct ControlRigComponent_eventGetControlPosition_Parms
	{
		FName ControlName;
		EControlRigComponentSpace Space;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a position control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 * @param Space The space to retrieve the control's value in\n\x09 *\n\x09 * @return The position value of the control\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a position control\n@param ControlName The name of the control to retrieve the value for\n@param Space The space to retrieve the control's value in\n\n@return The position value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlPosition_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlPosition_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlPosition", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::ControlRigComponent_eventGetControlPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::ControlRigComponent_eventGetControlPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlPosition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetControlPosition(Z_Param_ControlName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlPosition

// Begin Class UControlRigComponent Function GetControlRig
struct Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics
{
	struct ControlRigComponent_eventGetControlRig_Parms
	{
		UControlRig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Get the ControlRig hosted by this component */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Get the ControlRig hosted by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlRig", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::ControlRigComponent_eventGetControlRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::ControlRigComponent_eventGetControlRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlRig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UControlRig**)Z_Param__Result=P_THIS->GetControlRig();
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlRig

// Begin Class UControlRigComponent Function GetControlRotator
struct Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics
{
	struct ControlRigComponent_eventGetControlRotator_Parms
	{
		FName ControlName;
		EControlRigComponentSpace Space;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a rotator control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 * @param Space The space to retrieve the control's value in\n\x09 *\n\x09 * @return The rotator value of the control\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a rotator control\n@param ControlName The name of the control to retrieve the value for\n@param Space The space to retrieve the control's value in\n\n@return The rotator value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlRotator_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlRotator_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlRotator", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::ControlRigComponent_eventGetControlRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::ControlRigComponent_eventGetControlRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlRotator)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetControlRotator(Z_Param_ControlName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlRotator

// Begin Class UControlRigComponent Function GetControlScale
struct Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics
{
	struct ControlRigComponent_eventGetControlScale_Parms
	{
		FName ControlName;
		EControlRigComponentSpace Space;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a scale control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 * @param Space The space to retrieve the control's value in\n\x09 *\n\x09 * @return The scale value of the control\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a scale control\n@param ControlName The name of the control to retrieve the value for\n@param Space The space to retrieve the control's value in\n\n@return The scale value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlScale_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlScale_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlScale", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::ControlRigComponent_eventGetControlScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::ControlRigComponent_eventGetControlScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlScale)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetControlScale(Z_Param_ControlName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlScale

// Begin Class UControlRigComponent Function GetControlTransform
struct Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics
{
	struct ControlRigComponent_eventGetControlTransform_Parms
	{
		FName ControlName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a transform control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 * @param Space The space to retrieve the control's value in\n\x09 *\n\x09 * @return The transform value of the control\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a transform control\n@param ControlName The name of the control to retrieve the value for\n@param Space The space to retrieve the control's value in\n\n@return The transform value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlTransform_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::ControlRigComponent_eventGetControlTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::ControlRigComponent_eventGetControlTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetControlTransform(Z_Param_ControlName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlTransform

// Begin Class UControlRigComponent Function GetControlVector2D
struct Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics
{
	struct ControlRigComponent_eventGetControlVector2D_Parms
	{
		FName ControlName;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the value of a Vector3D control \n\x09 * @param ControlName The name of the control to retrieve the value for\n\x09 *\n\x09 * @return The Vector3D value of the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the value of a Vector3D control\n@param ControlName The name of the control to retrieve the value for\n\n@return The Vector3D value of the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlVector2D_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetControlVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetControlVector2D", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::ControlRigComponent_eventGetControlVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::ControlRigComponent_eventGetControlVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetControlVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetControlVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetControlVector2D)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetControlVector2D(Z_Param_ControlName);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetControlVector2D

// Begin Class UControlRigComponent Function GetElementNames
struct Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics
{
	struct ControlRigComponent_eventGetElementNames_Parms
	{
		ERigElementType ElementType;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/**\n\x09 * Returns all of the names for a given element type (Bone, Control, etc)\n\x09 * @param ElementType The type of elements to return the names for\n\x09 *\n\x09 * @return all of the names for a given element type (Bone, Control, etc)\n\x09 */" },
		{ "CPP_Default_ElementType", "Bone" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns all of the names for a given element type (Bone, Control, etc)\n@param ElementType The type of elements to return the names for\n\n@return all of the names for a given element type (Bone, Control, etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetElementNames_Parms, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(0, nullptr) }; // 1289171826
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetElementNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ElementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetElementNames", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::ControlRigComponent_eventGetElementNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::ControlRigComponent_eventGetElementNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetElementNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetElementNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetElementNames)
{
	P_GET_ENUM(ERigElementType,Z_Param_ElementType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetElementNames(ERigElementType(Z_Param_ElementType));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetElementNames

// Begin Class UControlRigComponent Function GetInitialBoneTransform
struct Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics
{
	struct ControlRigComponent_eventGetInitialBoneTransform_Parms
	{
		FName BoneName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the initial transform of the bone in the requested space \n\x09 * @param BoneName The name of the bone to retrieve the transform for\n\x09 * @param Space The space to retrieve the transform in\n\x09 *\n\x09 * @return the initial transform of the bone in the requested space\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the initial transform of the bone in the requested space\n@param BoneName The name of the bone to retrieve the transform for\n@param Space The space to retrieve the transform in\n\n@return the initial transform of the bone in the requested space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialBoneTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialBoneTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialBoneTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetInitialBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::ControlRigComponent_eventGetInitialBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::ControlRigComponent_eventGetInitialBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetInitialBoneTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetInitialBoneTransform(Z_Param_BoneName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetInitialBoneTransform

// Begin Class UControlRigComponent Function GetInitialSpaceTransform
struct Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics
{
	struct ControlRigComponent_eventGetInitialSpaceTransform_Parms
	{
		FName SpaceName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the initial transform of the space in the requested space \n\x09 * @param SpaceName The name of the space to retrieve the transform for\n\x09 * @param Space The space to retrieve the transform in\n\x09 *\n\x09 * @return the initial transform of the space in the requested space\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the initial transform of the space in the requested space\n@param SpaceName The name of the space to retrieve the transform for\n@param Space The space to retrieve the transform in\n\n@return the initial transform of the space in the requested space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_SpaceName = { "SpaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialSpaceTransform_Parms, SpaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialSpaceTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetInitialSpaceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_SpaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetInitialSpaceTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::ControlRigComponent_eventGetInitialSpaceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::ControlRigComponent_eventGetInitialSpaceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetInitialSpaceTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpaceName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetInitialSpaceTransform(Z_Param_SpaceName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetInitialSpaceTransform

// Begin Class UControlRigComponent Function GetSpaceTransform
struct Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics
{
	struct ControlRigComponent_eventGetSpaceTransform_Parms
	{
		FName SpaceName;
		EControlRigComponentSpace Space;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Returns the transform of the space in the requested space \n\x09 * @param SpaceName The name of the space to retrieve the transform for\n\x09 * @param Space The space to retrieve the transform in\n\x09 *\n\x09 * @return the transform of the space in the requested space\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Returns the transform of the space in the requested space\n@param SpaceName The name of the space to retrieve the transform for\n@param Space The space to retrieve the transform in\n\n@return the transform of the space in the requested space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpaceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_SpaceName = { "SpaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetSpaceTransform_Parms, SpaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetSpaceTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventGetSpaceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_SpaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "GetSpaceTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::ControlRigComponent_eventGetSpaceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::ControlRigComponent_eventGetSpaceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execGetSpaceTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpaceName);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetSpaceTransform(Z_Param_SpaceName,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function GetSpaceTransform

// Begin Class UControlRigComponent Function Initialize
struct Z_Construct_UFunction_UControlRigComponent_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Initializes the rig's memory and calls the construction event */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Initializes the rig's memory and calls the construction event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UControlRigComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// End Class UControlRigComponent Function Initialize

// Begin Class UControlRigComponent Function OnPostConstruction
struct ControlRigComponent_eventOnPostConstruction_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPostConstruction = FName(TEXT("OnPostConstruction"));
void UControlRigComponent::OnPostConstruction(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPostConstruction_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPostConstruction),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPostConstruction_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPostConstruction", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPostConstruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPostConstruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPostConstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPostConstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPostConstruction)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostConstruction_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPostConstruction

// Begin Class UControlRigComponent Function OnPostForwardsSolve
struct ControlRigComponent_eventOnPostForwardsSolve_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPostForwardsSolve = FName(TEXT("OnPostForwardsSolve"));
void UControlRigComponent::OnPostForwardsSolve(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPostForwardsSolve_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPostForwardsSolve),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "DisplayName", "On Post Forwards Solve" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPostForwardsSolve_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPostForwardsSolve", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPostForwardsSolve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPostForwardsSolve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPostForwardsSolve)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostForwardsSolve_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPostForwardsSolve

// Begin Class UControlRigComponent Function OnPostInitialize
struct ControlRigComponent_eventOnPostInitialize_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPostInitialize = FName(TEXT("OnPostInitialize"));
void UControlRigComponent::OnPostInitialize(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPostInitialize_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPostInitialize),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPostInitialize_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPostInitialize", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPostInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPostInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPostInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPostInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPostInitialize)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostInitialize_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPostInitialize

// Begin Class UControlRigComponent Function OnPreConstruction
struct ControlRigComponent_eventOnPreConstruction_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPreConstruction = FName(TEXT("OnPreConstruction"));
void UControlRigComponent::OnPreConstruction(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPreConstruction_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPreConstruction),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPreConstruction_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPreConstruction", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPreConstruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPreConstruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPreConstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPreConstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPreConstruction)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreConstruction_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPreConstruction

// Begin Class UControlRigComponent Function OnPreForwardsSolve
struct ControlRigComponent_eventOnPreForwardsSolve_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPreForwardsSolve = FName(TEXT("OnPreForwardsSolve"));
void UControlRigComponent::OnPreForwardsSolve(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPreForwardsSolve_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPreForwardsSolve),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "DisplayName", "On Pre Forwards Solve" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPreForwardsSolve_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPreForwardsSolve", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPreForwardsSolve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPreForwardsSolve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPreForwardsSolve)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreForwardsSolve_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPreForwardsSolve

// Begin Class UControlRigComponent Function OnPreInitialize
struct ControlRigComponent_eventOnPreInitialize_Parms
{
	UControlRigComponent* Component;
};
static FName NAME_UControlRigComponent_OnPreInitialize = FName(TEXT("OnPreInitialize"));
void UControlRigComponent::OnPreInitialize(UControlRigComponent* Component)
{
	ControlRigComponent_eventOnPreInitialize_Parms Parms;
	Parms.Component=Component;
	ProcessEvent(FindFunctionChecked(NAME_UControlRigComponent_OnPreInitialize),&Parms);
}
struct Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventOnPreInitialize_Parms, Component), Z_Construct_UClass_UControlRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "OnPreInitialize", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::PropPointers), sizeof(ControlRigComponent_eventOnPreInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigComponent_eventOnPreInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_OnPreInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_OnPreInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execOnPreInitialize)
{
	P_GET_OBJECT(UControlRigComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreInitialize_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function OnPreInitialize

// Begin Class UControlRigComponent Function SetBoneInitialTransformsFromSkeletalMesh
struct Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics
{
	struct ControlRigComponent_eventSetBoneInitialTransformsFromSkeletalMesh_Parms
	{
		USkeletalMesh* InSkeletalMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Setup the initial transforms / ref pose of the bones based on a skeletal mesh */" },
		{ "DisplayName", "Set Bone Initial Transforms From Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Setup the initial transforms / ref pose of the bones based on a skeletal mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetBoneInitialTransformsFromSkeletalMesh_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::NewProp_InSkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetBoneInitialTransformsFromSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::ControlRigComponent_eventSetBoneInitialTransformsFromSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::ControlRigComponent_eventSetBoneInitialTransformsFromSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetBoneInitialTransformsFromSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoneInitialTransformsFromSkeletalMesh(Z_Param_InSkeletalMesh);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetBoneInitialTransformsFromSkeletalMesh

// Begin Class UControlRigComponent Function SetBoneTransform
struct Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics
{
	struct ControlRigComponent_eventSetBoneTransform_Parms
	{
		FName BoneName;
		FTransform Transform;
		EControlRigComponentSpace Space;
		float Weight;
		bool bPropagateToChildren;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the transform of the bone in the requested space \n\x09 * @param BoneName The name of the bone to set the transform for\n\x09 * @param Space The space to set the transform in\n\x09 * @param Weight The weight of how much the change should be applied (0.0 to 1.0)\n\x09 * @param bPropagateToChildren If true the child bones will be moved together with the affected bone\n\x09 */" },
		{ "CPP_Default_bPropagateToChildren", "true" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "CPP_Default_Weight", "1.000000" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the transform of the bone in the requested space\n@param BoneName The name of the bone to set the transform for\n@param Space The space to set the transform in\n@param Weight The weight of how much the change should be applied (0.0 to 1.0)\n@param bPropagateToChildren If true the child bones will be moved together with the affected bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetBoneTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetBoneTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetBoneTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetBoneTransform_Parms, Weight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((ControlRigComponent_eventSetBoneTransform_Parms*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventSetBoneTransform_Parms), &Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::NewProp_bPropagateToChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::ControlRigComponent_eventSetBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::ControlRigComponent_eventSetBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetBoneTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
	P_GET_UBOOL(Z_Param_bPropagateToChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoneTransform(Z_Param_BoneName,Z_Param_Transform,EControlRigComponentSpace(Z_Param_Space),Z_Param_Weight,Z_Param_bPropagateToChildren);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetBoneTransform

// Begin Class UControlRigComponent Function SetControlBool
struct Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics
{
	struct ControlRigComponent_eventSetControlBool_Parms
	{
		FName ControlName;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a bool control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a bool control\n@param ControlName The name of the control to set\n@param Value The new value for the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlBool_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((ControlRigComponent_eventSetControlBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventSetControlBool_Parms), &Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlBool", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::ControlRigComponent_eventSetControlBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::ControlRigComponent_eventSetControlBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlBool)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlBool(Z_Param_ControlName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlBool

// Begin Class UControlRigComponent Function SetControlFloat
struct Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics
{
	struct ControlRigComponent_eventSetControlFloat_Parms
	{
		FName ControlName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a float control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a float control\n@param ControlName The name of the control to set\n@param Value The new value for the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlFloat_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlFloat", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::ControlRigComponent_eventSetControlFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::ControlRigComponent_eventSetControlFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlFloat(Z_Param_ControlName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlFloat

// Begin Class UControlRigComponent Function SetControlInt
struct Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics
{
	struct ControlRigComponent_eventSetControlInt_Parms
	{
		FName ControlName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of an integer control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of an integer control\n@param ControlName The name of the control to set\n@param Value The new value for the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlInt_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlInt", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::ControlRigComponent_eventSetControlInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::ControlRigComponent_eventSetControlInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlInt)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlInt(Z_Param_ControlName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlInt

// Begin Class UControlRigComponent Function SetControlOffset
struct Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics
{
	struct ControlRigComponent_eventSetControlOffset_Parms
	{
		FName ControlName;
		FTransform OffsetTransform;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the offset transform of a control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param OffsetTransform The new offset trasnform for the control\n\x09 * @param Space The space to set the offset transform in\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the offset transform of a control\n@param ControlName The name of the control to set\n@param OffsetTransform The new offset trasnform for the control\n@param Space The space to set the offset transform in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlOffset_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlOffset_Parms, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlOffset_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_OffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlOffset", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::ControlRigComponent_eventSetControlOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::ControlRigComponent_eventSetControlOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlOffset)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FTransform,Z_Param_OffsetTransform);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlOffset(Z_Param_ControlName,Z_Param_OffsetTransform,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlOffset

// Begin Class UControlRigComponent Function SetControlPosition
struct Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics
{
	struct ControlRigComponent_eventSetControlPosition_Parms
	{
		FName ControlName;
		FVector Value;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a position control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 * @param Space The space to set the value in\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a position control\n@param ControlName The name of the control to set\n@param Value The new value for the control\n@param Space The space to set the value in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlPosition_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlPosition_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlPosition_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlPosition", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::ControlRigComponent_eventSetControlPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::ControlRigComponent_eventSetControlPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlPosition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlPosition(Z_Param_ControlName,Z_Param_Value,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlPosition

// Begin Class UControlRigComponent Function SetControlRigClass
struct Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics
{
	struct ControlRigComponent_eventSetControlRigClass_Parms
	{
		TSubclassOf<UControlRig> InControlRigClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InControlRigClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::NewProp_InControlRigClass = { "InControlRigClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlRigClass_Parms, InControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::NewProp_InControlRigClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlRigClass", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::ControlRigComponent_eventSetControlRigClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::ControlRigComponent_eventSetControlRigClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlRigClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlRigClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlRigClass)
{
	P_GET_OBJECT(UClass,Z_Param_InControlRigClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlRigClass(Z_Param_InControlRigClass);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlRigClass

// Begin Class UControlRigComponent Function SetControlRotator
struct Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics
{
	struct ControlRigComponent_eventSetControlRotator_Parms
	{
		FName ControlName;
		FRotator Value;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a rotator control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 * @param Space The space to set the value in\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a rotator control\n@param ControlName The name of the control to set\n@param Value The new value for the control\n@param Space The space to set the value in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlRotator_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlRotator_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlRotator", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::ControlRigComponent_eventSetControlRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::ControlRigComponent_eventSetControlRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlRotator)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FRotator,Z_Param_Value);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlRotator(Z_Param_ControlName,Z_Param_Value,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlRotator

// Begin Class UControlRigComponent Function SetControlScale
struct Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics
{
	struct ControlRigComponent_eventSetControlScale_Parms
	{
		FName ControlName;
		FVector Value;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a scale control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 * @param Space The space to set the value in\n\x09 */" },
		{ "CPP_Default_Space", "LocalSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a scale control\n@param ControlName The name of the control to set\n@param Value The new value for the control\n@param Space The space to set the value in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlScale_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlScale_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlScale_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlScale", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::ControlRigComponent_eventSetControlScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::ControlRigComponent_eventSetControlScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlScale)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlScale(Z_Param_ControlName,Z_Param_Value,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlScale

// Begin Class UControlRigComponent Function SetControlTransform
struct Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics
{
	struct ControlRigComponent_eventSetControlTransform_Parms
	{
		FName ControlName;
		FTransform Value;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a transform control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 * @param Space The space to set the value in\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a transform control\n@param ControlName The name of the control to set\n@param Value The new value for the control\n@param Space The space to set the value in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlTransform_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlTransform_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::ControlRigComponent_eventSetControlTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::ControlRigComponent_eventSetControlTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FTransform,Z_Param_Value);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlTransform(Z_Param_ControlName,Z_Param_Value,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlTransform

// Begin Class UControlRigComponent Function SetControlVector2D
struct Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics
{
	struct ControlRigComponent_eventSetControlVector2D_Parms
	{
		FName ControlName;
		FVector2D Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the value of a vector2D control \n\x09 * @param ControlName The name of the control to set\n\x09 * @param Value The new value for the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the value of a vector2D control\n@param ControlName The name of the control to set\n@param Value The new value for the control" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlVector2D_Parms, ControlName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetControlVector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetControlVector2D", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::ControlRigComponent_eventSetControlVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::ControlRigComponent_eventSetControlVector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetControlVector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetControlVector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetControlVector2D)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlVector2D(Z_Param_ControlName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetControlVector2D

// Begin Class UControlRigComponent Function SetInitialBoneTransform
struct Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics
{
	struct ControlRigComponent_eventSetInitialBoneTransform_Parms
	{
		FName BoneName;
		FTransform InitialTransform;
		EControlRigComponentSpace Space;
		bool bPropagateToChildren;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the initial transform of the bone in the requested space \n\x09 * @param BoneName The name of the bone to set the transform for\n\x09 * @param InitialTransform The initial transform to set for the bone\n\x09 * @param Space The space to set the transform in\n\x09 * @param bPropagateToChildren If true the child bones will be moved together with the affected bone\n\x09 */" },
		{ "CPP_Default_bPropagateToChildren", "false" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the initial transform of the bone in the requested space\n@param BoneName The name of the bone to set the transform for\n@param InitialTransform The initial transform to set for the bone\n@param Space The space to set the transform in\n@param bPropagateToChildren If true the child bones will be moved together with the affected bone" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialBoneTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialBoneTransform_Parms, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialBoneTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
void Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((ControlRigComponent_eventSetInitialBoneTransform_Parms*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigComponent_eventSetInitialBoneTransform_Parms), &Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_InitialTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::NewProp_bPropagateToChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetInitialBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::ControlRigComponent_eventSetInitialBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::ControlRigComponent_eventSetInitialBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetInitialBoneTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FTransform,Z_Param_InitialTransform);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_GET_UBOOL(Z_Param_bPropagateToChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialBoneTransform(Z_Param_BoneName,Z_Param_InitialTransform,EControlRigComponentSpace(Z_Param_Space),Z_Param_bPropagateToChildren);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetInitialBoneTransform

// Begin Class UControlRigComponent Function SetInitialSpaceTransform
struct Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics
{
	struct ControlRigComponent_eventSetInitialSpaceTransform_Parms
	{
		FName SpaceName;
		FTransform InitialTransform;
		EControlRigComponentSpace Space;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** \n\x09 * Sets the transform of the space in the requested space \n\x09 * @param SpaceName The name of the space to set the transform for\n\x09 * @param Space The space to set the transform in\n\x09 */" },
		{ "CPP_Default_Space", "RigSpace" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Sets the transform of the space in the requested space\n@param SpaceName The name of the space to set the transform for\n@param Space The space to set the transform in" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpaceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_SpaceName = { "SpaceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialSpaceTransform_Parms, SpaceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialSpaceTransform_Parms, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetInitialSpaceTransform_Parms, Space), Z_Construct_UEnum_ControlRig_EControlRigComponentSpace, METADATA_PARAMS(0, nullptr) }; // 1897648003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_SpaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_InitialTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_Space_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetInitialSpaceTransform", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::ControlRigComponent_eventSetInitialSpaceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::ControlRigComponent_eventSetInitialSpaceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetInitialSpaceTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpaceName);
	P_GET_STRUCT(FTransform,Z_Param_InitialTransform);
	P_GET_ENUM(EControlRigComponentSpace,Z_Param_Space);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInitialSpaceTransform(Z_Param_SpaceName,Z_Param_InitialTransform,EControlRigComponentSpace(Z_Param_Space));
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetInitialSpaceTransform

// Begin Class UControlRigComponent Function SetMappedElements
struct Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics
{
	struct ControlRigComponent_eventSetMappedElements_Parms
	{
		TArray<FControlRigComponentMappedElement> NewMappedElements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Replaces the mapped elements on the component with the provided array, should not be used before OnPreInitialize Event */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Replaces the mapped elements on the component with the provided array, should not be used before OnPreInitialize Event" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMappedElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMappedElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::NewProp_NewMappedElements_Inner = { "NewMappedElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedElement, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::NewProp_NewMappedElements = { "NewMappedElements", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetMappedElements_Parms, NewMappedElements), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::NewProp_NewMappedElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::NewProp_NewMappedElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetMappedElements", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::ControlRigComponent_eventSetMappedElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::ControlRigComponent_eventSetMappedElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetMappedElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetMappedElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetMappedElements)
{
	P_GET_TARRAY(FControlRigComponentMappedElement,Z_Param_NewMappedElements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMappedElements(Z_Param_NewMappedElements);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetMappedElements

// Begin Class UControlRigComponent Function SetObjectBinding
struct Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics
{
	struct ControlRigComponent_eventSetObjectBinding_Parms
	{
		UObject* InObjectToBind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjectToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::NewProp_InObjectToBind = { "InObjectToBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventSetObjectBinding_Parms, InObjectToBind), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::NewProp_InObjectToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "SetObjectBinding", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::ControlRigComponent_eventSetObjectBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::ControlRigComponent_eventSetObjectBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_SetObjectBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_SetObjectBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execSetObjectBinding)
{
	P_GET_OBJECT(UObject,Z_Param_InObjectToBind);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectBinding(Z_Param_InObjectToBind);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function SetObjectBinding

// Begin Class UControlRigComponent Function Update
struct Z_Construct_UFunction_UControlRigComponent_Update_Statics
{
	struct ControlRigComponent_eventUpdate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Updates and ticks the rig. */" },
		{ "CPP_Default_DeltaTime", "0.000000" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Updates and ticks the rig." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigComponent_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigComponent_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigComponent_Update_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigComponent_Update_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_Update_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigComponent, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_UControlRigComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_Update_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigComponent_Update_Statics::ControlRigComponent_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigComponent_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigComponent_Update_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigComponent_Update_Statics::ControlRigComponent_eventUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigComponent_Update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigComponent_Update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigComponent::execUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Update(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UControlRigComponent Function Update

// Begin Class UControlRigComponent
void UControlRigComponent::StaticRegisterNativesUControlRigComponent()
{
	UClass* Class = UControlRigComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMappedCompleteSkeletalMesh", &UControlRigComponent::execAddMappedCompleteSkeletalMesh },
		{ "AddMappedComponents", &UControlRigComponent::execAddMappedComponents },
		{ "AddMappedElements", &UControlRigComponent::execAddMappedElements },
		{ "AddMappedSkeletalMesh", &UControlRigComponent::execAddMappedSkeletalMesh },
		{ "CanExecute", &UControlRigComponent::execCanExecute },
		{ "ClearMappedElements", &UControlRigComponent::execClearMappedElements },
		{ "DoesElementExist", &UControlRigComponent::execDoesElementExist },
		{ "GetAbsoluteTime", &UControlRigComponent::execGetAbsoluteTime },
		{ "GetBoneTransform", &UControlRigComponent::execGetBoneTransform },
		{ "GetControlBool", &UControlRigComponent::execGetControlBool },
		{ "GetControlFloat", &UControlRigComponent::execGetControlFloat },
		{ "GetControlInt", &UControlRigComponent::execGetControlInt },
		{ "GetControlOffset", &UControlRigComponent::execGetControlOffset },
		{ "GetControlPosition", &UControlRigComponent::execGetControlPosition },
		{ "GetControlRig", &UControlRigComponent::execGetControlRig },
		{ "GetControlRotator", &UControlRigComponent::execGetControlRotator },
		{ "GetControlScale", &UControlRigComponent::execGetControlScale },
		{ "GetControlTransform", &UControlRigComponent::execGetControlTransform },
		{ "GetControlVector2D", &UControlRigComponent::execGetControlVector2D },
		{ "GetElementNames", &UControlRigComponent::execGetElementNames },
		{ "GetInitialBoneTransform", &UControlRigComponent::execGetInitialBoneTransform },
		{ "GetInitialSpaceTransform", &UControlRigComponent::execGetInitialSpaceTransform },
		{ "GetSpaceTransform", &UControlRigComponent::execGetSpaceTransform },
		{ "Initialize", &UControlRigComponent::execInitialize },
		{ "OnPostConstruction", &UControlRigComponent::execOnPostConstruction },
		{ "OnPostForwardsSolve", &UControlRigComponent::execOnPostForwardsSolve },
		{ "OnPostInitialize", &UControlRigComponent::execOnPostInitialize },
		{ "OnPreConstruction", &UControlRigComponent::execOnPreConstruction },
		{ "OnPreForwardsSolve", &UControlRigComponent::execOnPreForwardsSolve },
		{ "OnPreInitialize", &UControlRigComponent::execOnPreInitialize },
		{ "SetBoneInitialTransformsFromSkeletalMesh", &UControlRigComponent::execSetBoneInitialTransformsFromSkeletalMesh },
		{ "SetBoneTransform", &UControlRigComponent::execSetBoneTransform },
		{ "SetControlBool", &UControlRigComponent::execSetControlBool },
		{ "SetControlFloat", &UControlRigComponent::execSetControlFloat },
		{ "SetControlInt", &UControlRigComponent::execSetControlInt },
		{ "SetControlOffset", &UControlRigComponent::execSetControlOffset },
		{ "SetControlPosition", &UControlRigComponent::execSetControlPosition },
		{ "SetControlRigClass", &UControlRigComponent::execSetControlRigClass },
		{ "SetControlRotator", &UControlRigComponent::execSetControlRotator },
		{ "SetControlScale", &UControlRigComponent::execSetControlScale },
		{ "SetControlTransform", &UControlRigComponent::execSetControlTransform },
		{ "SetControlVector2D", &UControlRigComponent::execSetControlVector2D },
		{ "SetInitialBoneTransform", &UControlRigComponent::execSetInitialBoneTransform },
		{ "SetInitialSpaceTransform", &UControlRigComponent::execSetInitialSpaceTransform },
		{ "SetMappedElements", &UControlRigComponent::execSetMappedElements },
		{ "SetObjectBinding", &UControlRigComponent::execSetObjectBinding },
		{ "Update", &UControlRigComponent::execUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigComponent);
UClass* Z_Construct_UClass_UControlRigComponent_NoRegister()
{
	return UControlRigComponent::StaticClass();
}
struct Z_Construct_UClass_UControlRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Animation" },
		{ "Comment", "/** A component that hosts an animation ControlRig, manages control components and marshals data between the two */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ControlRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "A component that hosts an animation ControlRig, manages control components and marshals data between the two" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[] = {
		{ "BlueprintSetter", "SetControlRigClass" },
		{ "Category", "ControlRig" },
		{ "Comment", "/** The class of control rig to instantiate */" },
		{ "DisallowCreateNew", "" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The class of control rig to instantiate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreInitializeDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired just before this component's ControlRig is initialized */" },
		{ "DisplayName", "On Pre Initialize" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired just before this component's ControlRig is initialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostInitializeDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired after this component's ControlRig is initialized */" },
		{ "DisplayName", "On Post Initialize" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired after this component's ControlRig is initialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreConstructionDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired before this component's ControlRig is setup */" },
		{ "DisplayName", "On Pre Construction" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired before this component's ControlRig is setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostConstructionDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired after this component's ControlRig is setup */" },
		{ "DisplayName", "On Post Construction" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired after this component's ControlRig is setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreForwardsSolveDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired before this component's ControlRig's forwards solve */" },
		{ "DisplayName", "On Pre Forwards Solve" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired before this component's ControlRig's forwards solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostForwardsSolveDelegate_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Event fired after this component's ControlRig's forwards solve */" },
		{ "DisplayName", "On Post Forwards Solve" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "Event fired after this component's ControlRig's forwards solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedElements_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedElements_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLazyEvaluation_MetaData[] = {
		{ "Category", "Lazy Evaluation" },
		{ "Comment", "/** When checked the rig will only run if any of the mapped inputs has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the rig will only run if any of the mapped inputs has changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyEvaluationPositionThreshold_MetaData[] = {
		{ "Category", "Lazy Evaluation" },
		{ "Comment", "// The delta threshold for a translation / position difference. 0.0 disables position differences.\n" },
		{ "DisplayName", "Position Threshold" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The delta threshold for a translation / position difference. 0.0 disables position differences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyEvaluationRotationThreshold_MetaData[] = {
		{ "Category", "Lazy Evaluation" },
		{ "Comment", "// The delta threshold for a rotation difference (in degrees). 0.0 disables rotation differences.\n" },
		{ "DisplayName", "Rotation Threshold" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The delta threshold for a rotation difference (in degrees). 0.0 disables rotation differences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyEvaluationScaleThreshold_MetaData[] = {
		{ "Category", "Lazy Evaluation" },
		{ "Comment", "// The delta threshold for a scale difference. 0.0 disables scale differences.\n" },
		{ "DisplayName", "Scale Threshold" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "The delta threshold for a scale difference. 0.0 disables scale differences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetTransformBeforeTick_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When checked the transforms are reset before a tick / update of the rig */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the transforms are reset before a tick / update of the rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetInitialsBeforeConstruction_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When checked the initial transforms on bones, nulls and controls are reset prior to a construction event */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the initial transforms on bones, nulls and controls are reset prior to a construction event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateRigOnTick_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When checked this ensures to run the rig's update on the component's tick automatically */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked this ensures to run the rig's update on the component's tick automatically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInEditor_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** When checked the rig is run in the editor viewport without running / simulation the game */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the rig is run in the editor viewport without running / simulation the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBones_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** When checked the rig's bones are drawn using debug drawing similar to the animation editor viewport */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the rig's bones are drawn using debug drawing similar to the animation editor viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugDrawing_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** When checked the rig's debug drawing instructions are drawn in the viewport */" },
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
		{ "ToolTip", "When checked the rig's debug drawing instructions are drawn in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreInitializeDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostInitializeDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreConstructionDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostConstructionDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreForwardsSolveDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostForwardsSolveDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDefinedElements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MappedElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedElements;
	static void NewProp_bEnableLazyEvaluation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLazyEvaluation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyEvaluationPositionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyEvaluationRotationThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LazyEvaluationScaleThreshold;
	static void NewProp_bResetTransformBeforeTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTransformBeforeTick;
	static void NewProp_bResetInitialsBeforeConstruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInitialsBeforeConstruction;
	static void NewProp_bUpdateRigOnTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRigOnTick;
	static void NewProp_bUpdateInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInEditor;
	static void NewProp_bDrawBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBones;
	static void NewProp_bShowDebugDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugDrawing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigComponent_AddMappedCompleteSkeletalMesh, "AddMappedCompleteSkeletalMesh" }, // 2544837353
		{ &Z_Construct_UFunction_UControlRigComponent_AddMappedComponents, "AddMappedComponents" }, // 2820651998
		{ &Z_Construct_UFunction_UControlRigComponent_AddMappedElements, "AddMappedElements" }, // 1439506120
		{ &Z_Construct_UFunction_UControlRigComponent_AddMappedSkeletalMesh, "AddMappedSkeletalMesh" }, // 517406701
		{ &Z_Construct_UFunction_UControlRigComponent_CanExecute, "CanExecute" }, // 1262265206
		{ &Z_Construct_UFunction_UControlRigComponent_ClearMappedElements, "ClearMappedElements" }, // 686965205
		{ &Z_Construct_UFunction_UControlRigComponent_DoesElementExist, "DoesElementExist" }, // 4191016969
		{ &Z_Construct_UFunction_UControlRigComponent_GetAbsoluteTime, "GetAbsoluteTime" }, // 928181524
		{ &Z_Construct_UFunction_UControlRigComponent_GetBoneTransform, "GetBoneTransform" }, // 2547792423
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlBool, "GetControlBool" }, // 2625814268
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlFloat, "GetControlFloat" }, // 3544713749
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlInt, "GetControlInt" }, // 283436475
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlOffset, "GetControlOffset" }, // 1887327610
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlPosition, "GetControlPosition" }, // 2451392203
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlRig, "GetControlRig" }, // 4193642658
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlRotator, "GetControlRotator" }, // 748748576
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlScale, "GetControlScale" }, // 604381067
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlTransform, "GetControlTransform" }, // 1293124447
		{ &Z_Construct_UFunction_UControlRigComponent_GetControlVector2D, "GetControlVector2D" }, // 1163293941
		{ &Z_Construct_UFunction_UControlRigComponent_GetElementNames, "GetElementNames" }, // 2083561149
		{ &Z_Construct_UFunction_UControlRigComponent_GetInitialBoneTransform, "GetInitialBoneTransform" }, // 3977459980
		{ &Z_Construct_UFunction_UControlRigComponent_GetInitialSpaceTransform, "GetInitialSpaceTransform" }, // 2925428089
		{ &Z_Construct_UFunction_UControlRigComponent_GetSpaceTransform, "GetSpaceTransform" }, // 2457527678
		{ &Z_Construct_UFunction_UControlRigComponent_Initialize, "Initialize" }, // 3207211762
		{ &Z_Construct_UFunction_UControlRigComponent_OnPostConstruction, "OnPostConstruction" }, // 3252913949
		{ &Z_Construct_UFunction_UControlRigComponent_OnPostForwardsSolve, "OnPostForwardsSolve" }, // 3766908950
		{ &Z_Construct_UFunction_UControlRigComponent_OnPostInitialize, "OnPostInitialize" }, // 2324299558
		{ &Z_Construct_UFunction_UControlRigComponent_OnPreConstruction, "OnPreConstruction" }, // 707199576
		{ &Z_Construct_UFunction_UControlRigComponent_OnPreForwardsSolve, "OnPreForwardsSolve" }, // 2757774702
		{ &Z_Construct_UFunction_UControlRigComponent_OnPreInitialize, "OnPreInitialize" }, // 1830163874
		{ &Z_Construct_UFunction_UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh, "SetBoneInitialTransformsFromSkeletalMesh" }, // 4143028107
		{ &Z_Construct_UFunction_UControlRigComponent_SetBoneTransform, "SetBoneTransform" }, // 2554279429
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlBool, "SetControlBool" }, // 1045879126
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlFloat, "SetControlFloat" }, // 1242731878
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlInt, "SetControlInt" }, // 2787693304
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlOffset, "SetControlOffset" }, // 1703904813
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlPosition, "SetControlPosition" }, // 3410450224
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlRigClass, "SetControlRigClass" }, // 1985116616
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlRotator, "SetControlRotator" }, // 3866420180
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlScale, "SetControlScale" }, // 2150774982
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlTransform, "SetControlTransform" }, // 3043410964
		{ &Z_Construct_UFunction_UControlRigComponent_SetControlVector2D, "SetControlVector2D" }, // 866861995
		{ &Z_Construct_UFunction_UControlRigComponent_SetInitialBoneTransform, "SetInitialBoneTransform" }, // 1498778353
		{ &Z_Construct_UFunction_UControlRigComponent_SetInitialSpaceTransform, "SetInitialSpaceTransform" }, // 4287496294
		{ &Z_Construct_UFunction_UControlRigComponent_SetMappedElements, "SetMappedElements" }, // 89933640
		{ &Z_Construct_UFunction_UControlRigComponent_SetObjectBinding, "SetObjectBinding" }, // 1048356630
		{ &Z_Construct_UFunction_UControlRigComponent_Update, "Update" }, // 3736698827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigClass_MetaData), NewProp_ControlRigClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreInitializeDelegate = { "OnPreInitializeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPreInitializeDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreInitializeDelegate_MetaData), NewProp_OnPreInitializeDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostInitializeDelegate = { "OnPostInitializeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPostInitializeDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostInitializeDelegate_MetaData), NewProp_OnPostInitializeDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreConstructionDelegate = { "OnPreConstructionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPreConstructionDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreConstructionDelegate_MetaData), NewProp_OnPreConstructionDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostConstructionDelegate = { "OnPostConstructionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPostConstructionDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostConstructionDelegate_MetaData), NewProp_OnPostConstructionDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreForwardsSolveDelegate = { "OnPreForwardsSolveDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPreForwardsSolveDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreForwardsSolveDelegate_MetaData), NewProp_OnPreForwardsSolveDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostForwardsSolveDelegate = { "OnPostForwardsSolveDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, OnPostForwardsSolveDelegate), Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostForwardsSolveDelegate_MetaData), NewProp_OnPostForwardsSolveDelegate_MetaData) }; // 1258481678
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_UserDefinedElements_Inner = { "UserDefinedElements", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedElement, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_UserDefinedElements = { "UserDefinedElements", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, UserDefinedElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedElements_MetaData), NewProp_UserDefinedElements_MetaData) }; // 3476659484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_MappedElements_Inner = { "MappedElements", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigComponentMappedElement, METADATA_PARAMS(0, nullptr) }; // 3476659484
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_MappedElements = { "MappedElements", nullptr, (EPropertyFlags)0x0010008000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, MappedElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedElements_MetaData), NewProp_MappedElements_MetaData) }; // 3476659484
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bEnableLazyEvaluation_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bEnableLazyEvaluation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bEnableLazyEvaluation = { "bEnableLazyEvaluation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bEnableLazyEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLazyEvaluation_MetaData), NewProp_bEnableLazyEvaluation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationPositionThreshold = { "LazyEvaluationPositionThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, LazyEvaluationPositionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyEvaluationPositionThreshold_MetaData), NewProp_LazyEvaluationPositionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationRotationThreshold = { "LazyEvaluationRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, LazyEvaluationRotationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyEvaluationRotationThreshold_MetaData), NewProp_LazyEvaluationRotationThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationScaleThreshold = { "LazyEvaluationScaleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, LazyEvaluationScaleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyEvaluationScaleThreshold_MetaData), NewProp_LazyEvaluationScaleThreshold_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetTransformBeforeTick_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bResetTransformBeforeTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetTransformBeforeTick = { "bResetTransformBeforeTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetTransformBeforeTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetTransformBeforeTick_MetaData), NewProp_bResetTransformBeforeTick_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetInitialsBeforeConstruction_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bResetInitialsBeforeConstruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetInitialsBeforeConstruction = { "bResetInitialsBeforeConstruction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetInitialsBeforeConstruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetInitialsBeforeConstruction_MetaData), NewProp_bResetInitialsBeforeConstruction_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateRigOnTick_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bUpdateRigOnTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateRigOnTick = { "bUpdateRigOnTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateRigOnTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateRigOnTick_MetaData), NewProp_bUpdateRigOnTick_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateInEditor_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bUpdateInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateInEditor = { "bUpdateInEditor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInEditor_MetaData), NewProp_bUpdateInEditor_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bDrawBones_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bDrawBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bDrawBones = { "bDrawBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bDrawBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawBones_MetaData), NewProp_bDrawBones_MetaData) };
void Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bShowDebugDrawing_SetBit(void* Obj)
{
	((UControlRigComponent*)Obj)->bShowDebugDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bShowDebugDrawing = { "bShowDebugDrawing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigComponent), &Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bShowDebugDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugDrawing_MetaData), NewProp_bShowDebugDrawing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRigComponent_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigComponent, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRig_MetaData), NewProp_ControlRig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_ControlRigClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreInitializeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostInitializeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreConstructionDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostConstructionDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPreForwardsSolveDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_OnPostForwardsSolveDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_UserDefinedElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_UserDefinedElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_MappedElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_MappedElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bEnableLazyEvaluation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationPositionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_LazyEvaluationScaleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetTransformBeforeTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bResetInitialsBeforeConstruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateRigOnTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bUpdateInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bDrawBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_bShowDebugDrawing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigComponent_Statics::NewProp_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigComponent_Statics::ClassParams = {
	&UControlRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigComponent()
{
	if (!Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton, Z_Construct_UClass_UControlRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigComponent.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigComponent>()
{
	return UControlRigComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigComponent);
UControlRigComponent::~UControlRigComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigComponent)
// End Class UControlRigComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigComponentSpace_StaticEnum, TEXT("EControlRigComponentSpace"), &Z_Registration_Info_UEnum_EControlRigComponentSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1897648003U) },
		{ EControlRigComponentMapDirection_StaticEnum, TEXT("EControlRigComponentMapDirection"), &Z_Registration_Info_UEnum_EControlRigComponentMapDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3400686565U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigComponentMappedElement::StaticStruct, Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics::NewStructOps, TEXT("ControlRigComponentMappedElement"), &Z_Registration_Info_UScriptStruct_ControlRigComponentMappedElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigComponentMappedElement), 3476659484U) },
		{ FControlRigComponentMappedComponent::StaticStruct, Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics::NewStructOps, TEXT("ControlRigComponentMappedComponent"), &Z_Registration_Info_UScriptStruct_ControlRigComponentMappedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigComponentMappedComponent), 543384502U) },
		{ FControlRigComponentMappedBone::StaticStruct, Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics::NewStructOps, TEXT("ControlRigComponentMappedBone"), &Z_Registration_Info_UScriptStruct_ControlRigComponentMappedBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigComponentMappedBone), 3578241513U) },
		{ FControlRigComponentMappedCurve::StaticStruct, Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics::NewStructOps, TEXT("ControlRigComponentMappedCurve"), &Z_Registration_Info_UScriptStruct_ControlRigComponentMappedCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigComponentMappedCurve), 605120432U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigComponent, UControlRigComponent::StaticClass, TEXT("UControlRigComponent"), &Z_Registration_Info_UClass_UControlRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigComponent), 2419658659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_3109566101(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
