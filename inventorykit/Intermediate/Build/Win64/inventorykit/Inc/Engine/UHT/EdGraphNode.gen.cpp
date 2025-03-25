// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGraphNodeContextMenuContext();
ENGINE_API UClass* Z_Construct_UClass_UGraphNodeContextMenuContext_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeTitleType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FEdGraphTerminalType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphTerminalType;
class UScriptStruct* FEdGraphTerminalType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphTerminalType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphTerminalType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphTerminalType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphTerminalType"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphTerminalType.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphTerminalType>()
{
	return FEdGraphTerminalType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n  * Struct used to define information for terminal types, e.g. types that can be contained\n  * by a container. Currently can represent strong/weak references to a type (only UObjects), \n  * a structure, or a primitive. Support for \"Container of Containers\" is done by wrapping \n  * a structure, rather than implicitly defining names for containers.\n  */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Struct used to define information for terminal types, e.g. types that can be contained\nby a container. Currently can represent strong/weak references to a type (only UObjects),\na structure, or a primitive. Support for \"Container of Containers\" is done by wrapping\na structure, rather than implicitly defining names for containers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalCategory_MetaData[] = {
		{ "Comment", "/** Category */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategory_MetaData[] = {
		{ "Comment", "/** Sub-category */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Sub-category" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategoryObject_MetaData[] = {
		{ "Comment", "/** Sub-category object */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Sub-category object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsConst_MetaData[] = {
		{ "Comment", "/** Whether or not this pin is a immutable const value */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether or not this pin is a immutable const value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsWeakPointer_MetaData[] = {
		{ "Comment", "/** Whether or not this is a weak reference */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether or not this is a weak reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsUObjectWrapper_MetaData[] = {
		{ "Comment", "/** Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TerminalCategory;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TerminalSubCategory;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TerminalSubCategoryObject;
	static void NewProp_bTerminalIsConst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsConst;
	static void NewProp_bTerminalIsWeakPointer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsWeakPointer;
	static void NewProp_bTerminalIsUObjectWrapper_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsUObjectWrapper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphTerminalType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory = { "TerminalCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalCategory_MetaData), NewProp_TerminalCategory_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory = { "TerminalSubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalSubCategory_MetaData), NewProp_TerminalSubCategory_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject = { "TerminalSubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalSubCategoryObject_MetaData), NewProp_TerminalSubCategoryObject_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_SetBit(void* Obj)
{
	((FEdGraphTerminalType*)Obj)->bTerminalIsConst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst = { "bTerminalIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEdGraphTerminalType), &Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTerminalIsConst_MetaData), NewProp_bTerminalIsConst_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_SetBit(void* Obj)
{
	((FEdGraphTerminalType*)Obj)->bTerminalIsWeakPointer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer = { "bTerminalIsWeakPointer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEdGraphTerminalType), &Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTerminalIsWeakPointer_MetaData), NewProp_bTerminalIsWeakPointer_MetaData) };
void Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsUObjectWrapper_SetBit(void* Obj)
{
	((FEdGraphTerminalType*)Obj)->bTerminalIsUObjectWrapper = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsUObjectWrapper = { "bTerminalIsUObjectWrapper", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEdGraphTerminalType), &Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsUObjectWrapper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTerminalIsUObjectWrapper_MetaData), NewProp_bTerminalIsUObjectWrapper_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsUObjectWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EdGraphTerminalType",
	Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers),
	sizeof(FEdGraphTerminalType),
	alignof(FEdGraphTerminalType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphTerminalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphTerminalType.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EdGraphTerminalType.InnerSingleton;
}
// End ScriptStruct FEdGraphTerminalType

// Begin Enum EEdGraphPinDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdGraphPinDirection;
static UEnum* EEdGraphPinDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEdGraphPinDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEdGraphPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEdGraphPinDirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEdGraphPinDirection"));
	}
	return Z_Registration_Info_UEnum_EEdGraphPinDirection.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EEdGraphPinDirection>()
{
	return EEdGraphPinDirection_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum used to define which way data flows into or out of this pin. */" },
		{ "EGPD_Input.Name", "EGPD_Input" },
		{ "EGPD_MAX.Name", "EGPD_MAX" },
		{ "EGPD_Output.Name", "EGPD_Output" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Enum used to define which way data flows into or out of this pin." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGPD_Input", (int64)EGPD_Input },
		{ "EGPD_Output", (int64)EGPD_Output },
		{ "EGPD_MAX", (int64)EGPD_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EEdGraphPinDirection",
	"EEdGraphPinDirection",
	Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection()
{
	if (!Z_Registration_Info_UEnum_EEdGraphPinDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdGraphPinDirection.InnerSingleton, Z_Construct_UEnum_Engine_EEdGraphPinDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEdGraphPinDirection.InnerSingleton;
}
// End Enum EEdGraphPinDirection

// Begin Enum EPinContainerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPinContainerType;
static UEnum* EPinContainerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPinContainerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPinContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPinContainerType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPinContainerType"));
	}
	return Z_Registration_Info_UEnum_EPinContainerType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPinContainerType>()
{
	return EPinContainerType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPinContainerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EPinContainerType::Array" },
		{ "Comment", "/** Enum used to define what container type a pin represents. */" },
		{ "Map.Name", "EPinContainerType::Map" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "None.Name", "EPinContainerType::None" },
		{ "Set.Name", "EPinContainerType::Set" },
		{ "ToolTip", "Enum used to define what container type a pin represents." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPinContainerType::None", (int64)EPinContainerType::None },
		{ "EPinContainerType::Array", (int64)EPinContainerType::Array },
		{ "EPinContainerType::Set", (int64)EPinContainerType::Set },
		{ "EPinContainerType::Map", (int64)EPinContainerType::Map },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPinContainerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPinContainerType",
	"EPinContainerType",
	Z_Construct_UEnum_Engine_EPinContainerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPinContainerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPinContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPinContainerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPinContainerType()
{
	if (!Z_Registration_Info_UEnum_EPinContainerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPinContainerType.InnerSingleton, Z_Construct_UEnum_Engine_EPinContainerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPinContainerType.InnerSingleton;
}
// End Enum EPinContainerType

// Begin Enum ENodeTitleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeTitleType;
static UEnum* ENodeTitleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeTitleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeTitleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeTitleType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENodeTitleType"));
	}
	return Z_Registration_Info_UEnum_ENodeTitleType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENodeTitleType::Type>()
{
	return ENodeTitleType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENodeTitleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum to indicate what sort of title we want. */" },
		{ "EditableTitle.Comment", "/** Returns the editable title (which might not be a title at all). */" },
		{ "EditableTitle.Name", "ENodeTitleType::EditableTitle" },
		{ "EditableTitle.ToolTip", "Returns the editable title (which might not be a title at all)." },
		{ "FullTitle.Comment", "/** The full title, may be multiple lines. */" },
		{ "FullTitle.Name", "ENodeTitleType::FullTitle" },
		{ "FullTitle.ToolTip", "The full title, may be multiple lines." },
		{ "ListView.Comment", "/** More concise, single line title. */" },
		{ "ListView.Name", "ENodeTitleType::ListView" },
		{ "ListView.ToolTip", "More concise, single line title." },
		{ "MAX_TitleTypes.Name", "ENodeTitleType::MAX_TitleTypes" },
		{ "MenuTitle.Comment", "/** Menu Title for context menus to be displayed in context menus referencing the node. */" },
		{ "MenuTitle.Name", "ENodeTitleType::MenuTitle" },
		{ "MenuTitle.ToolTip", "Menu Title for context menus to be displayed in context menus referencing the node." },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Enum to indicate what sort of title we want." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENodeTitleType::FullTitle", (int64)ENodeTitleType::FullTitle },
		{ "ENodeTitleType::ListView", (int64)ENodeTitleType::ListView },
		{ "ENodeTitleType::EditableTitle", (int64)ENodeTitleType::EditableTitle },
		{ "ENodeTitleType::MenuTitle", (int64)ENodeTitleType::MenuTitle },
		{ "ENodeTitleType::MAX_TitleTypes", (int64)ENodeTitleType::MAX_TitleTypes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENodeTitleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENodeTitleType",
	"ENodeTitleType::Type",
	Z_Construct_UEnum_Engine_ENodeTitleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeTitleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeTitleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENodeTitleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENodeTitleType()
{
	if (!Z_Registration_Info_UEnum_ENodeTitleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeTitleType.InnerSingleton, Z_Construct_UEnum_Engine_ENodeTitleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeTitleType.InnerSingleton;
}
// End Enum ENodeTitleType

// Begin Enum ENodeAdvancedPins
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeAdvancedPins;
static UEnum* ENodeAdvancedPins_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeAdvancedPins.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeAdvancedPins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeAdvancedPins, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENodeAdvancedPins"));
	}
	return Z_Registration_Info_UEnum_ENodeAdvancedPins.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENodeAdvancedPins::Type>()
{
	return ENodeAdvancedPins_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum to indicate if a node has advanced-display-pins, and whether they are shown. */" },
		{ "Hidden.Comment", "/** There are some advanced pins, and they are hidden. */" },
		{ "Hidden.Name", "ENodeAdvancedPins::Hidden" },
		{ "Hidden.ToolTip", "There are some advanced pins, and they are hidden." },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "NoPins.Comment", "/** No advanced pins. */" },
		{ "NoPins.Name", "ENodeAdvancedPins::NoPins" },
		{ "NoPins.ToolTip", "No advanced pins." },
		{ "Shown.Comment", "/** There are some advanced pins, and they are shown. */" },
		{ "Shown.Name", "ENodeAdvancedPins::Shown" },
		{ "Shown.ToolTip", "There are some advanced pins, and they are shown." },
		{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and whether they are shown." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENodeAdvancedPins::NoPins", (int64)ENodeAdvancedPins::NoPins },
		{ "ENodeAdvancedPins::Shown", (int64)ENodeAdvancedPins::Shown },
		{ "ENodeAdvancedPins::Hidden", (int64)ENodeAdvancedPins::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENodeAdvancedPins",
	"ENodeAdvancedPins::Type",
	Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins()
{
	if (!Z_Registration_Info_UEnum_ENodeAdvancedPins.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeAdvancedPins.InnerSingleton, Z_Construct_UEnum_Engine_ENodeAdvancedPins_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeAdvancedPins.InnerSingleton;
}
// End Enum ENodeAdvancedPins

// Begin Enum ENodeEnabledState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeEnabledState;
static UEnum* ENodeEnabledState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeEnabledState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeEnabledState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeEnabledState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENodeEnabledState"));
	}
	return Z_Registration_Info_UEnum_ENodeEnabledState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENodeEnabledState>()
{
	return ENodeEnabledState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENodeEnabledState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum to indicate a node's enabled state. */" },
		{ "DevelopmentOnly.Comment", "/** Node is enabled for development only. */" },
		{ "DevelopmentOnly.Name", "ENodeEnabledState::DevelopmentOnly" },
		{ "DevelopmentOnly.ToolTip", "Node is enabled for development only." },
		{ "Disabled.Comment", "/** Node is disabled. */" },
		{ "Disabled.Name", "ENodeEnabledState::Disabled" },
		{ "Disabled.ToolTip", "Node is disabled." },
		{ "Enabled.Comment", "/** Node is enabled. */" },
		{ "Enabled.Name", "ENodeEnabledState::Enabled" },
		{ "Enabled.ToolTip", "Node is enabled." },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Enum to indicate a node's enabled state." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENodeEnabledState::Enabled", (int64)ENodeEnabledState::Enabled },
		{ "ENodeEnabledState::Disabled", (int64)ENodeEnabledState::Disabled },
		{ "ENodeEnabledState::DevelopmentOnly", (int64)ENodeEnabledState::DevelopmentOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENodeEnabledState",
	"ENodeEnabledState",
	Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState()
{
	if (!Z_Registration_Info_UEnum_ENodeEnabledState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeEnabledState.InnerSingleton, Z_Construct_UEnum_Engine_ENodeEnabledState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeEnabledState.InnerSingleton;
}
// End Enum ENodeEnabledState

// Begin Class UGraphNodeContextMenuContext
void UGraphNodeContextMenuContext::StaticRegisterNativesUGraphNodeContextMenuContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphNodeContextMenuContext);
UClass* Z_Construct_UClass_UGraphNodeContextMenuContext_NoRegister()
{
	return UGraphNodeContextMenuContext::StaticClass();
}
struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** This is the context for GetContextMenuActions and GetNodeContextMenuActions calls. */" },
		{ "IncludePath", "EdGraph/EdGraphNode.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "This is the context for GetContextMenuActions and GetNodeContextMenuActions calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[] = {
		{ "Comment", "/** The blueprint associated with this context; may be NULL for non-Kismet related graphs. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The blueprint associated with this context; may be NULL for non-Kismet related graphs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Comment", "/** The graph associated with this context. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The graph associated with this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Comment", "/** The node associated with this context. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The node associated with this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDebugging_MetaData[] = {
		{ "Comment", "/** Whether the graph editor is currently part of a debugging session (any non-debugging commands should be disabled). */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether the graph editor is currently part of a debugging session (any non-debugging commands should be disabled)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static void NewProp_bIsDebugging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDebugging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphNodeContextMenuContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphNodeContextMenuContext, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprint_MetaData), NewProp_Blueprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphNodeContextMenuContext, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphNodeContextMenuContext, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
void Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_bIsDebugging_SetBit(void* Obj)
{
	((UGraphNodeContextMenuContext*)Obj)->bIsDebugging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_bIsDebugging = { "bIsDebugging", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGraphNodeContextMenuContext), &Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_bIsDebugging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDebugging_MetaData), NewProp_bIsDebugging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::NewProp_bIsDebugging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::ClassParams = {
	&UGraphNodeContextMenuContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphNodeContextMenuContext()
{
	if (!Z_Registration_Info_UClass_UGraphNodeContextMenuContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphNodeContextMenuContext.OuterSingleton, Z_Construct_UClass_UGraphNodeContextMenuContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphNodeContextMenuContext.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGraphNodeContextMenuContext>()
{
	return UGraphNodeContextMenuContext::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphNodeContextMenuContext);
UGraphNodeContextMenuContext::~UGraphNodeContextMenuContext() {}
// End Class UGraphNodeContextMenuContext

// Begin Class UEdGraphNode
void UEdGraphNode::StaticRegisterNativesUEdGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode);
UClass* Z_Construct_UClass_UEdGraphNode_NoRegister()
{
	return UEdGraphNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphNode.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPins_MetaData[] = {
		{ "Comment", "/** List of connector pins */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "List of connector pins" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePosX_MetaData[] = {
		{ "Comment", "/** X position of node in the editor */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "X position of node in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePosY_MetaData[] = {
		{ "Comment", "/** Y position of node in the editor */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Y position of node in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeWidth_MetaData[] = {
		{ "Comment", "/** Width of node in the editor; only used when the node can be resized */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Width of node in the editor; only used when the node can be resized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeHeight_MetaData[] = {
		{ "Comment", "/** Height of node in the editor; only used when the node can be resized */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Height of node in the editor; only used when the node can be resized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedPinDisplay_MetaData[] = {
		{ "Comment", "/** Enum to indicate if a node has advanced-display-pins, and if they are shown */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and if they are shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledState_MetaData[] = {
		{ "Comment", "/** Indicates in what state the node is enabled, which may eliminate it from being compiled */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Indicates in what state the node is enabled, which may eliminate it from being compiled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUserSetEnabledState_MetaData[] = {
		{ "Comment", "/** Indicates whether or not the user explicitly set the enabled state */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Indicates whether or not the user explicitly set the enabled state" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNodeEnabled_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) FALSE if the node is a disabled, which eliminates it from being compiled */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "(DEPRECATED) FALSE if the node is a disabled, which eliminates it from being compiled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanResizeNode_MetaData[] = {
		{ "Comment", "/** If true, this node can be resized and should be drawn with a resize handle */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "If true, this node can be resized and should be drawn with a resize handle" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntermediateNode_MetaData[] = {
		{ "Comment", "/** Whether the node was created as part of an expansion step */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether the node was created as part of an expansion step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCompilerMessage_MetaData[] = {
		{ "Comment", "/** Flag to check for compile error/warning */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Flag to check for compile error/warning" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubblePinned_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "Comment", "/** Comment bubble visibility */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Comment bubble visibility" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleMakeVisible_MetaData[] = {
		{ "Comment", "/** Make comment bubble visible */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Make comment bubble visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[] = {
		{ "Comment", "/** If true, this node can be renamed in the editor */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "If true, this node can be renamed in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUpgradeMessage_MetaData[] = {
		{ "Comment", "/** Note for a node that lingers until saved */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Note for a node that lingers until saved" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeComment_MetaData[] = {
		{ "Comment", "/** Comment string that is drawn on the node */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Comment string that is drawn on the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[] = {
		{ "Comment", "/** Flag to store node specific compile error/warning*/" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Flag to store node specific compile error/warning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "Comment", "/** Error/Warning description */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Error/Warning description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** GUID to uniquely identify this node, to facilitate diffing versions of this graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "GUID to uniquely identify this node, to facilitate diffing versions of this graph" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdvancedPinDisplay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnabledState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnabledState;
	static void NewProp_bDisplayAsDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsDisabled;
	static void NewProp_bUserSetEnabledState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserSetEnabledState;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsNodeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNodeEnabled;
	static void NewProp_bCanResizeNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanResizeNode;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsIntermediateNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntermediateNode;
	static void NewProp_bHasCompilerMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCompilerMessage;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCommentBubblePinned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubblePinned;
	static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
	static void NewProp_bCommentBubbleMakeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleMakeVisible;
	static void NewProp_bCanRenameNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NodeUpgradeMessage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeComment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_Inner = { "DeprecatedPins", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins = { "DeprecatedPins", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, DeprecatedPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecatedPins_MetaData), NewProp_DeprecatedPins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodePosX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePosX_MetaData), NewProp_NodePosX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodePosY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePosY_MetaData), NewProp_NodePosY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth = { "NodeWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeWidth_MetaData), NewProp_NodeWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight = { "NodeHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeHeight_MetaData), NewProp_NodeHeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay = { "AdvancedPinDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, AdvancedPinDisplay), Z_Construct_UEnum_Engine_ENodeAdvancedPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedPinDisplay_MetaData), NewProp_AdvancedPinDisplay_MetaData) }; // 2059447959
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState = { "EnabledState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, EnabledState), Z_Construct_UEnum_Engine_ENodeEnabledState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledState_MetaData), NewProp_EnabledState_MetaData) }; // 2922079437
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bDisplayAsDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled = { "bDisplayAsDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayAsDisabled_MetaData), NewProp_bDisplayAsDisabled_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bUserSetEnabledState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState = { "bUserSetEnabledState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUserSetEnabledState_MetaData), NewProp_bUserSetEnabledState_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bIsNodeEnabled_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled = { "bIsNodeEnabled", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNodeEnabled_MetaData), NewProp_bIsNodeEnabled_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bCanResizeNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode = { "bCanResizeNode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanResizeNode_MetaData), NewProp_bCanResizeNode_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsIntermediateNode_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bIsIntermediateNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsIntermediateNode = { "bIsIntermediateNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsIntermediateNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIntermediateNode_MetaData), NewProp_bIsIntermediateNode_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bHasCompilerMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage = { "bHasCompilerMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCompilerMessage_MetaData), NewProp_bHasCompilerMessage_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bCommentBubblePinned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned = { "bCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommentBubblePinned_MetaData), NewProp_bCommentBubblePinned_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bCommentBubbleVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommentBubbleVisible_MetaData), NewProp_bCommentBubbleVisible_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bCommentBubbleMakeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible = { "bCommentBubbleMakeVisible", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCommentBubbleMakeVisible_MetaData), NewProp_bCommentBubbleMakeVisible_MetaData) };
void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
{
	((UEdGraphNode*)Obj)->bCanRenameNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRenameNode_MetaData), NewProp_bCanRenameNode_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage = { "NodeUpgradeMessage", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodeUpgradeMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUpgradeMessage_MetaData), NewProp_NodeUpgradeMessage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment = { "NodeComment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodeComment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeComment_MetaData), NewProp_NodeComment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, ErrorType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorType_MetaData), NewProp_ErrorType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsIntermediateNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Statics::ClassParams = {
	&UEdGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEdGraphNode>()
{
	return UEdGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode);
UEdGraphNode::~UEdGraphNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode)
// End Class UEdGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEdGraphPinDirection_StaticEnum, TEXT("EEdGraphPinDirection"), &Z_Registration_Info_UEnum_EEdGraphPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3543720081U) },
		{ EPinContainerType_StaticEnum, TEXT("EPinContainerType"), &Z_Registration_Info_UEnum_EPinContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2563501654U) },
		{ ENodeTitleType_StaticEnum, TEXT("ENodeTitleType"), &Z_Registration_Info_UEnum_ENodeTitleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 930460975U) },
		{ ENodeAdvancedPins_StaticEnum, TEXT("ENodeAdvancedPins"), &Z_Registration_Info_UEnum_ENodeAdvancedPins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2059447959U) },
		{ ENodeEnabledState_StaticEnum, TEXT("ENodeEnabledState"), &Z_Registration_Info_UEnum_ENodeEnabledState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2922079437U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEdGraphTerminalType::StaticStruct, Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewStructOps, TEXT("EdGraphTerminalType"), &Z_Registration_Info_UScriptStruct_EdGraphTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphTerminalType), 3686337115U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphNodeContextMenuContext, UGraphNodeContextMenuContext::StaticClass, TEXT("UGraphNodeContextMenuContext"), &Z_Registration_Info_UClass_UGraphNodeContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphNodeContextMenuContext), 377597261U) },
		{ Z_Construct_UClass_UEdGraphNode, UEdGraphNode::StaticClass, TEXT("UEdGraphNode"), &Z_Registration_Info_UClass_UEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode), 152482893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_3261458383(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
