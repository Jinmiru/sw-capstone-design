// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseTools/BaseBrushTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBrushTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushAdjusterInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushAdjusterInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStampData();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UBrushBaseProperties
void UBrushBaseProperties::StaticRegisterNativesUBrushBaseProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBaseProperties);
UClass* Z_Construct_UClass_UBrushBaseProperties_NoRegister()
{
	return UBrushBaseProperties::StaticClass();
}
struct Z_Construct_UClass_UBrushBaseProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties for a Brush-type Tool\n */" },
		{ "IncludePath", "BaseTools/BaseBrushTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Standard properties for a Brush-type Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Relative size of brush */" },
		{ "DisplayName", "Size" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bSpecifyRadius == false" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Relative size of brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpecifyRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** If true, ignore relative Brush Size and use explicit world Radius */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If true, ignore relative Brush Size and use explicit world Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Radius of brush */" },
		{ "DisplayName", "Radius" },
		{ "EditCondition", "bSpecifyRadius" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Radius of brush" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushStrength_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the brush (0.0 - 1.0) */" },
		{ "DisplayName", "Strength" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "bShowStrength" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Strength of the brush (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bShowFalloff" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStrength_MetaData[] = {
		{ "Comment", "/** If false, then BrushStrength will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If false, then BrushStrength will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFalloff_MetaData[] = {
		{ "Comment", "/** If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
	static void NewProp_bSpecifyRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecifyRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloffAmount;
	static void NewProp_bShowStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStrength;
	static void NewProp_bShowFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFalloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBaseProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBaseProperties, BrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSize_MetaData), NewProp_BrushSize_MetaData) };
void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_SetBit(void* Obj)
{
	((UBrushBaseProperties*)Obj)->bSpecifyRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius = { "bSpecifyRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpecifyRadius_MetaData), NewProp_bSpecifyRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBaseProperties, BrushRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushRadius_MetaData), NewProp_BrushRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength = { "BrushStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBaseProperties, BrushStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushStrength_MetaData), NewProp_BrushStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBaseProperties, BrushFalloffAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushFalloffAmount_MetaData), NewProp_BrushFalloffAmount_MetaData) };
void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_SetBit(void* Obj)
{
	((UBrushBaseProperties*)Obj)->bShowStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength = { "bShowStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStrength_MetaData), NewProp_bShowStrength_MetaData) };
void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_SetBit(void* Obj)
{
	((UBrushBaseProperties*)Obj)->bShowFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff = { "bShowFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFalloff_MetaData), NewProp_bShowFalloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushBaseProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBaseProperties_Statics::ClassParams = {
	&UBrushBaseProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushBaseProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushBaseProperties()
{
	if (!Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton, Z_Construct_UClass_UBrushBaseProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushBaseProperties>()
{
	return UBrushBaseProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBaseProperties);
UBrushBaseProperties::~UBrushBaseProperties() {}
// End Class UBrushBaseProperties

// Begin ScriptStruct FBrushStampData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushStampData;
class UScriptStruct* FBrushStampData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushStampData, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("BrushStampData"));
	}
	return Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FBrushStampData>()
{
	return FBrushStampData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBrushStampData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic Brush Stamp data\n */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Generic Brush Stamp data" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushStampData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushStampData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"BrushStampData",
	nullptr,
	0,
	sizeof(FBrushStampData),
	alignof(FBrushStampData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStampData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBrushStampData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBrushStampData()
{
	if (!Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton, Z_Construct_UScriptStruct_FBrushStampData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton;
}
// End ScriptStruct FBrushStampData

// Begin Class UBrushAdjusterInputBehavior
void UBrushAdjusterInputBehavior::StaticRegisterNativesUBrushAdjusterInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushAdjusterInputBehavior);
UClass* Z_Construct_UClass_UBrushAdjusterInputBehavior_NoRegister()
{
	return UBrushAdjusterInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that captures a keyboard hotkey to enter a sub-mode \"bAdjustingBrush\" while the key is pressed.\n * The target tool must call OnDragStart() and OnDragUpdate() to feed the screen coordinates of the mouse for the duration\n * of the behavior. And use \"GetIsBrushBeingAdjusted\" to pause/disable the brush motion while it is being adjusted.\n *\n * OnDragStart() defines the starting location of an adjustment\n * OnDragUpdate() adjusts the brush strength and radius based on the magnitude of the screen coordinate delta in the\n * vertical and horizontal directions respectively.\n */" },
		{ "IncludePath", "BaseTools/BaseBrushTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "A behavior that captures a keyboard hotkey to enter a sub-mode \"bAdjustingBrush\" while the key is pressed.\nThe target tool must call OnDragStart() and OnDragUpdate() to feed the screen coordinates of the mouse for the duration\nof the behavior. And use \"GetIsBrushBeingAdjusted\" to pause/disable the brush motion while it is being adjusted.\n\nOnDragStart() defines the starting location of an adjustment\nOnDragUpdate() adjusts the brush strength and radius based on the magnitude of the screen coordinate delta in the\nvertical and horizontal directions respectively." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushAdjusterInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::ClassParams = {
	&UBrushAdjusterInputBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushAdjusterInputBehavior()
{
	if (!Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton, Z_Construct_UClass_UBrushAdjusterInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushAdjusterInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushAdjusterInputBehavior>()
{
	return UBrushAdjusterInputBehavior::StaticClass();
}
UBrushAdjusterInputBehavior::UBrushAdjusterInputBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushAdjusterInputBehavior);
UBrushAdjusterInputBehavior::~UBrushAdjusterInputBehavior() {}
// End Class UBrushAdjusterInputBehavior

// Begin Class UBaseBrushTool
void UBaseBrushTool::StaticRegisterNativesUBaseBrushTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseBrushTool);
UClass* Z_Construct_UClass_UBaseBrushTool_NoRegister()
{
	return UBaseBrushTool::StaticClass();
}
struct Z_Construct_UClass_UBaseBrushTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBaseBrushTool implements standard brush-style functionality for an InteractiveTool.\n * This includes:\n *   1) brush radius property set with dimension-relative brush sizing and default brush radius hotkeys\n *   2) brush indicator visualization\n *   3) tracking of last brush stamp location via .LastBrushStamp FProperty\n *   4) status of brush stroke via .bInBrushStroke FProperty\n *   5) \"B\" hotkey to adjust brush radius / strength by click-dragging in the viewport\n */" },
		{ "IncludePath", "BaseTools/BaseBrushTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "UBaseBrushTool implements standard brush-style functionality for an InteractiveTool.\nThis includes:\n  1) brush radius property set with dimension-relative brush sizing and default brush radius hotkeys\n  2) brush indicator visualization\n  3) tracking of last brush stamp location via .LastBrushStamp FProperty\n  4) status of brush stroke via .bInBrushStroke FProperty\n  5) \"B\" hotkey to adjust brush radius / strength by click-dragging in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushProperties_MetaData[] = {
		{ "Comment", "/** Properties that control brush size/etc*/" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Properties that control brush size/etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInBrushStroke_MetaData[] = {
		{ "Comment", "/** Set to true by Tool if user is currently in an active brush stroke*/" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Set to true by Tool if user is currently in an active brush stroke" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToLocalScale_MetaData[] = {
		{ "Comment", "/** Uniform scale factor that scales from world space (where brush usually exists) to local space */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Uniform scale factor that scales from world space (where brush usually exists) to local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBrushStamp_MetaData[] = {
		{ "Comment", "/** Position of brush at last update (both during stroke and during Hover) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Position of brush at last update (both during stroke and during Hover)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushStampIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushProperties;
	static void NewProp_bInBrushStroke_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBrushStroke;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToLocalScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastBrushStamp;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PropertyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushStampIndicator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseBrushTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties = { "BrushProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseBrushTool, BrushProperties), Z_Construct_UClass_UBrushBaseProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushProperties_MetaData), NewProp_BrushProperties_MetaData) };
void Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_SetBit(void* Obj)
{
	((UBaseBrushTool*)Obj)->bInBrushStroke = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke = { "bInBrushStroke", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseBrushTool), &Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInBrushStroke_MetaData), NewProp_bInBrushStroke_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale = { "WorldToLocalScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseBrushTool, WorldToLocalScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToLocalScale_MetaData), NewProp_WorldToLocalScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp = { "LastBrushStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseBrushTool, LastBrushStamp), Z_Construct_UScriptStruct_FBrushStampData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBrushStamp_MetaData), NewProp_LastBrushStamp_MetaData) }; // 1306821851
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseBrushTool, PropertyClass), Z_Construct_UClass_UBrushBaseProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyClass_MetaData), NewProp_PropertyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator = { "BrushStampIndicator", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseBrushTool, BrushStampIndicator), Z_Construct_UClass_UBrushStampIndicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushStampIndicator_MetaData), NewProp_BrushStampIndicator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseBrushTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseBrushTool_Statics::ClassParams = {
	&UBaseBrushTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseBrushTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseBrushTool()
{
	if (!Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton, Z_Construct_UClass_UBaseBrushTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBaseBrushTool>()
{
	return UBaseBrushTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseBrushTool);
UBaseBrushTool::~UBaseBrushTool() {}
// End Class UBaseBrushTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBrushStampData::StaticStruct, Z_Construct_UScriptStruct_FBrushStampData_Statics::NewStructOps, TEXT("BrushStampData"), &Z_Registration_Info_UScriptStruct_BrushStampData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushStampData), 1306821851U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBaseProperties, UBrushBaseProperties::StaticClass, TEXT("UBrushBaseProperties"), &Z_Registration_Info_UClass_UBrushBaseProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBaseProperties), 1234054906U) },
		{ Z_Construct_UClass_UBrushAdjusterInputBehavior, UBrushAdjusterInputBehavior::StaticClass, TEXT("UBrushAdjusterInputBehavior"), &Z_Registration_Info_UClass_UBrushAdjusterInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushAdjusterInputBehavior), 595257078U) },
		{ Z_Construct_UClass_UBaseBrushTool, UBaseBrushTool::StaticClass, TEXT("UBaseBrushTool"), &Z_Registration_Info_UClass_UBaseBrushTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseBrushTool), 582763557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_4269584528(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
