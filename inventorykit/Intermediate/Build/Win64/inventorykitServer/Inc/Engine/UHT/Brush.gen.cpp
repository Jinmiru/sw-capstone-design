// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrush() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ABrush();
ENGINE_API UClass* Z_Construct_UClass_ABrush_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UModel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBrushType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECsgOper();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECsgOper
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECsgOper;
static UEnum* ECsgOper_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECsgOper.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECsgOper.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECsgOper, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECsgOper"));
	}
	return Z_Registration_Info_UEnum_ECsgOper.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECsgOper>()
{
	return ECsgOper_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECsgOper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n// Variables.\n" },
		{ "CSG_Active.Comment", "/** Active brush. (deprecated, do not use.) */" },
		{ "CSG_Active.Name", "CSG_Active" },
		{ "CSG_Active.ToolTip", "Active brush. (deprecated, do not use.)" },
		{ "CSG_Add.Comment", "/** Add to world. (deprecated, do not use.) */" },
		{ "CSG_Add.Name", "CSG_Add" },
		{ "CSG_Add.ToolTip", "Add to world. (deprecated, do not use.)" },
		{ "CSG_Deintersect.Comment", "/** Form from negative intersection with world. */" },
		{ "CSG_Deintersect.Name", "CSG_Deintersect" },
		{ "CSG_Deintersect.ToolTip", "Form from negative intersection with world." },
		{ "CSG_Intersect.Comment", "/** Form from intersection with world. */" },
		{ "CSG_Intersect.Name", "CSG_Intersect" },
		{ "CSG_Intersect.ToolTip", "Form from intersection with world." },
		{ "CSG_MAX.Name", "CSG_MAX" },
		{ "CSG_None.Name", "CSG_None" },
		{ "CSG_Subtract.Comment", "/** Subtract from world. (deprecated, do not use.) */" },
		{ "CSG_Subtract.Name", "CSG_Subtract" },
		{ "CSG_Subtract.ToolTip", "Subtract from world. (deprecated, do not use.)" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Variables." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CSG_Active", (int64)CSG_Active },
		{ "CSG_Add", (int64)CSG_Add },
		{ "CSG_Subtract", (int64)CSG_Subtract },
		{ "CSG_Intersect", (int64)CSG_Intersect },
		{ "CSG_Deintersect", (int64)CSG_Deintersect },
		{ "CSG_None", (int64)CSG_None },
		{ "CSG_MAX", (int64)CSG_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECsgOper_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECsgOper",
	"ECsgOper",
	Z_Construct_UEnum_Engine_ECsgOper_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECsgOper_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECsgOper_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECsgOper_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECsgOper()
{
	if (!Z_Registration_Info_UEnum_ECsgOper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECsgOper.InnerSingleton, Z_Construct_UEnum_Engine_ECsgOper_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECsgOper.InnerSingleton;
}
// End Enum ECsgOper

// Begin Enum EBrushType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushType;
static UEnum* EBrushType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBrushType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBrushType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBrushType"));
	}
	return Z_Registration_Info_UEnum_EBrushType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBrushType>()
{
	return EBrushType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBrushType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Brush_Add.Comment", "/** Add to world. */" },
		{ "Brush_Add.DisplayName", "Additive" },
		{ "Brush_Add.Name", "Brush_Add" },
		{ "Brush_Add.ToolTip", "Add to world." },
		{ "Brush_Default.Comment", "/** Default/builder brush. */" },
		{ "Brush_Default.Hidden", "" },
		{ "Brush_Default.Name", "Brush_Default" },
		{ "Brush_Default.ToolTip", "Default/builder brush." },
		{ "Brush_MAX.Name", "Brush_MAX" },
		{ "Brush_Subtract.Comment", "/** Subtract from world. */" },
		{ "Brush_Subtract.DisplayName", "Subtractive" },
		{ "Brush_Subtract.Name", "Brush_Subtract" },
		{ "Brush_Subtract.ToolTip", "Subtract from world." },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Brush_Default", (int64)Brush_Default },
		{ "Brush_Add", (int64)Brush_Add },
		{ "Brush_Subtract", (int64)Brush_Subtract },
		{ "Brush_MAX", (int64)Brush_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBrushType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBrushType",
	"EBrushType",
	Z_Construct_UEnum_Engine_EBrushType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBrushType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBrushType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBrushType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBrushType()
{
	if (!Z_Registration_Info_UEnum_EBrushType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushType.InnerSingleton, Z_Construct_UEnum_Engine_EBrushType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBrushType.InnerSingleton;
}
// End Enum EBrushType

// Begin ScriptStruct FGeomSelection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeomSelection;
class UScriptStruct* FGeomSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomSelection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GeomSelection"));
	}
	return Z_Registration_Info_UScriptStruct_GeomSelection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGeomSelection>()
{
	return FGeomSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeomSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Selection information for geometry mode\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Selection information for geometry mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Comment", "// EGeometrySelectionType_\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "EGeometrySelectionType_" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionIndex_MetaData[] = {
		{ "Comment", "// Index into the geometry data structures\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Index into the geometry data structures" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomSelection, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomSelection, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex = { "SelectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomSelection, SelectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionIndex_MetaData), NewProp_SelectionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomSelection_Statics::NewProp_SelectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GeomSelection",
	Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::PropPointers),
	sizeof(FGeomSelection),
	alignof(FGeomSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeomSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeomSelection()
{
	if (!Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton, Z_Construct_UScriptStruct_FGeomSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeomSelection.InnerSingleton;
}
// End ScriptStruct FGeomSelection

// Begin Class ABrush
void ABrush::StaticRegisterNativesABrush()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABrush);
UClass* Z_Construct_UClass_ABrush_NoRegister()
{
	return ABrush::StaticClass();
}
struct Z_Construct_UClass_ABrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Collision Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/Brush.h" },
		{ "IsBlueprintBase", "false" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushType_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Type of brush */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Type of brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[] = {
		{ "Comment", "// Information.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColored_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolidWhenSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceableFromClassBrowser_MetaData[] = {
		{ "Comment", "/** If true, this brush class can be placed using the class browser like other simple class types */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush class can be placed using the class browser like other simple class types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotForClientOrServer_MetaData[] = {
		{ "Comment", "/** If true, this brush is a builder or otherwise does not need to be loaded into the game */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, this brush is a builder or otherwise does not need to be loaded into the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushBuilder_MetaData[] = {
		{ "Category", "BrushBuilder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayShadedVolume_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** If true, display the brush with a shaded volume */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "If true, display the brush with a shaded volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadedVolumeOpacityValue_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Value used to set the opacity for the shaded volume, between 0-1 */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Value used to set the opacity for the shaded volume, between 0-1" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInManipulation_MetaData[] = {
		{ "Comment", "/** Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.) */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedSelections_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores selection information from geometry mode.  This is the only information that we can't\n\x09 * regenerate by looking at the source brushes following an undo operation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Brush.h" },
		{ "ToolTip", "Stores selection information from geometry mode.  This is the only information that we can't\nregenerate by looking at the source brushes following an undo operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BrushType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
	static void NewProp_bColored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bColored;
	static void NewProp_bSolidWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidWhenSelected;
	static void NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceableFromClassBrowser;
	static void NewProp_bNotForClientOrServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotForClientOrServer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushBuilder;
	static void NewProp_bDisplayShadedVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayShadedVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadedVolumeOpacityValue;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bInManipulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInManipulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedSelections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedSelections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushType = { "BrushType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, BrushType), Z_Construct_UEnum_Engine_EBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushType_MetaData), NewProp_BrushType_MetaData) }; // 1124994631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor = { "BrushColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, BrushColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushColor_MetaData), NewProp_BrushColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags = { "PolyFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, PolyFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyFlags_MetaData), NewProp_PolyFlags_MetaData) };
void Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit(void* Obj)
{
	((ABrush*)Obj)->bColored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bColored = { "bColored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bColored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColored_MetaData), NewProp_bColored_MetaData) };
void Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit(void* Obj)
{
	((ABrush*)Obj)->bSolidWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected = { "bSolidWhenSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolidWhenSelected_MetaData), NewProp_bSolidWhenSelected_MetaData) };
void Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit(void* Obj)
{
	((ABrush*)Obj)->bPlaceableFromClassBrowser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser = { "bPlaceableFromClassBrowser", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaceableFromClassBrowser_MetaData), NewProp_bPlaceableFromClassBrowser_MetaData) };
void Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit(void* Obj)
{
	((ABrush*)Obj)->bNotForClientOrServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer = { "bNotForClientOrServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotForClientOrServer_MetaData), NewProp_bNotForClientOrServer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0116000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent = { "BrushComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, BrushComponent), Z_Construct_UClass_UBrushComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushComponent_MetaData), NewProp_BrushComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder = { "BrushBuilder", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, BrushBuilder), Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushBuilder_MetaData), NewProp_BrushBuilder_MetaData) };
void Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_SetBit(void* Obj)
{
	((ABrush*)Obj)->bDisplayShadedVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume = { "bDisplayShadedVolume", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayShadedVolume_MetaData), NewProp_bDisplayShadedVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue = { "ShadedVolumeOpacityValue", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, ShadedVolumeOpacityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadedVolumeOpacityValue_MetaData), NewProp_ShadedVolumeOpacityValue_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit(void* Obj)
{
	((ABrush*)Obj)->bInManipulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation = { "bInManipulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ABrush), &Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInManipulation_MetaData), NewProp_bInManipulation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner = { "SavedSelections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeomSelection, METADATA_PARAMS(0, nullptr) }; // 3910863543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections = { "SavedSelections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABrush, SavedSelections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedSelections_MetaData), NewProp_SavedSelections_MetaData) }; // 3910863543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_PolyFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bColored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bSolidWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bPlaceableFromClassBrowser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bNotForClientOrServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_BrushBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bDisplayShadedVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_ShadedVolumeOpacityValue,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_bInManipulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrush_Statics::NewProp_SavedSelections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABrush_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABrush_Statics::ClassParams = {
	&ABrush::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABrush_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams), Z_Construct_UClass_ABrush_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABrush()
{
	if (!Z_Registration_Info_UClass_ABrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABrush.OuterSingleton, Z_Construct_UClass_ABrush_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABrush.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ABrush>()
{
	return ABrush::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABrush);
ABrush::~ABrush() {}
// End Class ABrush

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECsgOper_StaticEnum, TEXT("ECsgOper"), &Z_Registration_Info_UEnum_ECsgOper, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3815887210U) },
		{ EBrushType_StaticEnum, TEXT("EBrushType"), &Z_Registration_Info_UEnum_EBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1124994631U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeomSelection::StaticStruct, Z_Construct_UScriptStruct_FGeomSelection_Statics::NewStructOps, TEXT("GeomSelection"), &Z_Registration_Info_UScriptStruct_GeomSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeomSelection), 3910863543U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABrush, ABrush::StaticClass, TEXT("ABrush"), &Z_Registration_Info_UClass_ABrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABrush), 129144166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_471501805(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Brush_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
