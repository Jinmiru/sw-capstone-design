// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphPin() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSimpleMemberReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleMemberReference;
class UScriptStruct* FSimpleMemberReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleMemberReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SimpleMemberReference"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleMemberReference>()
{
	return FSimpleMemberReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[] = {
		{ "Comment", "/** \n\x09 * Most often the Class that this member is defined in. Could be a UPackage \n\x09 * if it is a native delegate signature function (declared globally).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[] = {
		{ "Comment", "/** Name of the member */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of the member" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/** The Guid of the member */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The Guid of the member" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemberParent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemberName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleMemberReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberParent_MetaData), NewProp_MemberParent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberName_MetaData), NewProp_MemberName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberGuid_MetaData), NewProp_MemberGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SimpleMemberReference",
	Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers),
	sizeof(FSimpleMemberReference),
	alignof(FSimpleMemberReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton, Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton;
}
// End ScriptStruct FSimpleMemberReference

// Begin ScriptStruct FEdGraphPinType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphPinType;
class UScriptStruct* FEdGraphPinType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinType"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinType>()
{
	return FEdGraphPinType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct used to define the type of information carried on this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Struct used to define the type of information carried on this pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
		{ "Comment", "/** Category of pin type */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Category of pin type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategory_MetaData[] = {
		{ "Comment", "/** Sub-category of pin type */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category of pin type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[] = {
		{ "Comment", "/** Sub-category object */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryMemberReference_MetaData[] = {
		{ "Comment", "/** Sub-category member reference */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category member reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinValueType_MetaData[] = {
		{ "Comment", "/** Data used to determine value types when bIsMap is true */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Data used to determine value types when bIsMap is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
		{ "Comment", "/** UE_DEPRECATED(4.17) Whether or not this pin represents an array of values */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17) Whether or not this pin represents an array of values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReference_MetaData[] = {
		{ "Comment", "/** Whether or not this pin is a value passed by reference or not */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a value passed by reference or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[] = {
		{ "Comment", "/** Whether or not this pin is a immutable const value */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a immutable const value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeakPointer_MetaData[] = {
		{ "Comment", "/** Whether or not this is a weak reference */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this is a weak reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUObjectWrapper_MetaData[] = {
		{ "Comment", "/** Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSerializeAsSinglePrecisionFloat_MetaData[] = {
		{ "Comment", "/** Set to true if the type was serialized prior to BlueprintPinsUseRealNumbers */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Set to true if the type was serialized prior to BlueprintPinsUseRealNumbers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinCategory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinSubCategory;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PinSubCategoryObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinSubCategoryMemberReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinValueType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
	static void NewProp_bIsArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
	static void NewProp_bIsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
	static void NewProp_bIsConst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConst;
	static void NewProp_bIsWeakPointer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeakPointer;
	static void NewProp_bIsUObjectWrapper_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUObjectWrapper;
	static void NewProp_bSerializeAsSinglePrecisionFloat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializeAsSinglePrecisionFloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, PinCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategory_MetaData), NewProp_PinCategory_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory = { "PinSubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategory_MetaData), NewProp_PinSubCategory_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryObject_MetaData), NewProp_PinSubCategoryObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference = { "PinSubCategoryMemberReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryMemberReference), Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinSubCategoryMemberReference_MetaData), NewProp_PinSubCategoryMemberReference_MetaData) }; // 1680345297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType = { "PinValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinValueType_MetaData), NewProp_PinValueType_MetaData) }; // 3686337115
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinType, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerType_MetaData), NewProp_ContainerType_MetaData) }; // 2563501654
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bIsArray_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArray_MetaData), NewProp_bIsArray_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bIsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReference_MetaData), NewProp_bIsReference_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bIsConst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst = { "bIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConst_MetaData), NewProp_bIsConst_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bIsWeakPointer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer = { "bIsWeakPointer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWeakPointer_MetaData), NewProp_bIsWeakPointer_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bIsUObjectWrapper = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper = { "bIsUObjectWrapper", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUObjectWrapper_MetaData), NewProp_bIsUObjectWrapper_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_SetBit(void* Obj)
{
	((FEdGraphPinType*)Obj)->bSerializeAsSinglePrecisionFloat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat = { "bSerializeAsSinglePrecisionFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSerializeAsSinglePrecisionFloat_MetaData), NewProp_bSerializeAsSinglePrecisionFloat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EdGraphPinType",
	Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers),
	sizeof(FEdGraphPinType),
	alignof(FEdGraphPinType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphPinType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton;
}
// End ScriptStruct FEdGraphPinType

// Begin Enum EBlueprintPinStyleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintPinStyleType;
static UEnum* EBlueprintPinStyleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintPinStyleType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintPinStyleType"));
	}
	return Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlueprintPinStyleType>()
{
	return EBlueprintPinStyleType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BPST_Original.DisplayName", "Circles, Grid, Diamond" },
		{ "BPST_Original.Name", "BPST_Original" },
		{ "BPST_VariantA.DisplayName", "Directional Circles" },
		{ "BPST_VariantA.Name", "BPST_VariantA" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BPST_Original", (int64)BPST_Original },
		{ "BPST_VariantA", (int64)BPST_VariantA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlueprintPinStyleType",
	"EBlueprintPinStyleType",
	Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType()
{
	if (!Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton;
}
// End Enum EBlueprintPinStyleType

// Begin ScriptStruct FEdGraphPinReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphPinReference;
class UScriptStruct* FEdGraphPinReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinReference"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinReference>()
{
	return FEdGraphPinReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningNode_MetaData[] = {
		{ "Comment", "/** The node that owns the pin referred to by this struct. Updated at Set and Save time. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The node that owns the pin referred to by this struct. Updated at Set and Save time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[] = {
		{ "Comment", "/** The pin's unique ID. Updated at Set and Save time. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin's unique ID. Updated at Set and Save time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode = { "OwningNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinReference, OwningNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningNode_MetaData), NewProp_OwningNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphPinReference, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinId_MetaData), NewProp_PinId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EdGraphPinReference",
	Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers),
	sizeof(FEdGraphPinReference),
	alignof(FEdGraphPinReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton;
}
// End ScriptStruct FEdGraphPinReference

// Begin Class UEdGraphPin_Deprecated
void UEdGraphPin_Deprecated::StaticRegisterNativesUEdGraphPin_Deprecated()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphPin_Deprecated);
UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister()
{
	return UEdGraphPin_Deprecated::StaticClass();
}
struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphPin.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[] = {
		{ "Comment", "/** Name of this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of this pin" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinFriendlyName_MetaData[] = {
		{ "Comment", "/** Used as the display name if set */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Used as the display name if set" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinToolTip_MetaData[] = {
		{ "Comment", "/** The tool-tip describing this pin's purpose */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The tool-tip describing this pin's purpose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Comment", "/** Direction of flow of this pin (input or output) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Direction of flow of this pin (input or output)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[] = {
		{ "Comment", "/** The type of information carried on this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The type of information carried on this pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value for this pin (used if the pin has no connections), stored as a string */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Default value for this pin (used if the pin has no connections), stored as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutogeneratedDefaultValue_MetaData[] = {
		{ "Comment", "/** Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[] = {
		{ "Comment", "/** If the default value for this pin should be an object, we store a pointer to it */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an object, we store a pointer to it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextValue_MetaData[] = {
		{ "Comment", "/** If the default value for this pin should be an FText, it is stored here. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an FText, it is stored here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[] = {
		{ "Comment", "/** Set of pins that we are linked to */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Set of pins that we are linked to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[] = {
		{ "Comment", "/** The pins created when a pin is split and hidden */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pins created when a pin is split and hidden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentPin_MetaData[] = {
		{ "Comment", "/** The pin that was split and generated this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin that was split and generated this pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePassThroughConnection_MetaData[] = {
		{ "Comment", "/** Pin that this pin uses for passing through reference connection */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin that this pin uses for passing through reference connection" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "Comment", "/** If true, this connector is currently hidden. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is currently hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotConnectable_MetaData[] = {
		{ "Comment", "/** If true, this connector is unconnectable, and present only to allow the editing of the default text. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is unconnectable, and present only to allow the editing of the default text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsReadOnly_MetaData[] = {
		{ "Comment", "/** If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsIgnored_MetaData[] = {
		{ "Comment", "/** If true, the default value on this pin is ignored and should not be set */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value on this pin is ignored and should not be set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedView_MetaData[] = {
		{ "Comment", "/** If true, the pin may be hidden by user */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin may be hidden by user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsMutableRef_MetaData[] = {
		{ "Comment", "/** If true, the pin is displayed as ref */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin is displayed as ref" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[] = {
		{ "Comment", "/** Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_PinFriendlyName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinToolTip;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AutogeneratedDefaultValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultTextValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedTo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubPins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencePassThroughConnection;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static void NewProp_bNotConnectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotConnectable;
	static void NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsReadOnly;
	static void NewProp_bDefaultValueIsIgnored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsIgnored;
	static void NewProp_bAdvancedView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedView;
	static void NewProp_bDisplayAsMutableRef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsMutableRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphPin_Deprecated>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinName_MetaData), NewProp_PinName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName = { "PinFriendlyName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinFriendlyName_MetaData), NewProp_PinFriendlyName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip = { "PinToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinToolTip_MetaData), NewProp_PinToolTip_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, Direction), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3543720081
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinType_MetaData), NewProp_PinType_MetaData) }; // 831943823
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue = { "AutogeneratedDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, AutogeneratedDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutogeneratedDefaultValue_MetaData), NewProp_AutogeneratedDefaultValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject = { "DefaultObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultObject_MetaData), NewProp_DefaultObject_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue = { "DefaultTextValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultTextValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextValue_MetaData), NewProp_DefaultTextValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner = { "LinkedTo", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, LinkedTo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedTo_MetaData), NewProp_LinkedTo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner = { "SubPins", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins = { "SubPins", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, SubPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubPins_MetaData), NewProp_SubPins_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin = { "ParentPin", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, ParentPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentPin_MetaData), NewProp_ParentPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection = { "ReferencePassThroughConnection", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, ReferencePassThroughConnection), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePassThroughConnection_MetaData), NewProp_ReferencePassThroughConnection_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bNotConnectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable = { "bNotConnectable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotConnectable_MetaData), NewProp_bNotConnectable_MetaData) };
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly = { "bDefaultValueIsReadOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultValueIsReadOnly_MetaData), NewProp_bDefaultValueIsReadOnly_MetaData) };
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsIgnored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored = { "bDefaultValueIsIgnored", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultValueIsIgnored_MetaData), NewProp_bDefaultValueIsIgnored_MetaData) };
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bAdvancedView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView = { "bAdvancedView", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdvancedView_MetaData), NewProp_bAdvancedView_MetaData) };
void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit(void* Obj)
{
	((UEdGraphPin_Deprecated*)Obj)->bDisplayAsMutableRef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef = { "bDisplayAsMutableRef", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayAsMutableRef_MetaData), NewProp_bDisplayAsMutableRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentGuid_MetaData), NewProp_PersistentGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams = {
	&UEdGraphPin_Deprecated::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphPin_Deprecated()
{
	if (!Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton, Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEdGraphPin_Deprecated>()
{
	return UEdGraphPin_Deprecated::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphPin_Deprecated);
UEdGraphPin_Deprecated::~UEdGraphPin_Deprecated() {}
// End Class UEdGraphPin_Deprecated

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlueprintPinStyleType_StaticEnum, TEXT("EBlueprintPinStyleType"), &Z_Registration_Info_UEnum_EBlueprintPinStyleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1341434062U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleMemberReference::StaticStruct, Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewStructOps, TEXT("SimpleMemberReference"), &Z_Registration_Info_UScriptStruct_SimpleMemberReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleMemberReference), 1680345297U) },
		{ FEdGraphPinType::StaticStruct, Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewStructOps, TEXT("EdGraphPinType"), &Z_Registration_Info_UScriptStruct_EdGraphPinType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphPinType), 831943823U) },
		{ FEdGraphPinReference::StaticStruct, Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewStructOps, TEXT("EdGraphPinReference"), &Z_Registration_Info_UScriptStruct_EdGraphPinReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphPinReference), 3539559491U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphPin_Deprecated, UEdGraphPin_Deprecated::StaticClass, TEXT("UEdGraphPin_Deprecated"), &Z_Registration_Info_UClass_UEdGraphPin_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphPin_Deprecated), 2216158909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_3462846109(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
