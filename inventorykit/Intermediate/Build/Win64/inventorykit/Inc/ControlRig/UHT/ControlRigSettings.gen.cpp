// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Settings/ControlRigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSettings() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigEditorSettings();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigEditorSettings_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSettings();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSettings_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRigSettingsPerPinBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool;
class UScriptStruct* FControlRigSettingsPerPinBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigSettingsPerPinBool"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigSettingsPerPinBool>()
{
	return FControlRigSettingsPerPinBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Values_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSettingsPerPinBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_ValueProp = { "Values", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_Key_KeyProp = { "Values_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigSettingsPerPinBool, Values), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigSettingsPerPinBool",
	Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::PropPointers),
	sizeof(FControlRigSettingsPerPinBool),
	alignof(FControlRigSettingsPerPinBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool.InnerSingleton;
}
// End ScriptStruct FControlRigSettingsPerPinBool

// Begin Class UControlRigSettings
void UControlRigSettings::StaticRegisterNativesUControlRigSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSettings);
UClass* Z_Construct_UClass_UControlRigSettings_NoRegister()
{
	return UControlRigSettings::StaticClass();
}
struct Z_Construct_UClass_UControlRigSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default ControlRig settings.\n */" },
		{ "DisplayName", "Control Rig" },
		{ "IncludePath", "Settings/ControlRigSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Default ControlRig settings." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeLibrary_MetaData[] = {
		{ "Category", "Shapes" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootModule_MetaData[] = {
		{ "AllowedClasses", "/Script/ControlRigDeveloper.ControlRigBlueprint" },
		{ "Category", "ModularRigging" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultShapeLibrary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRootModule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary = { "DefaultShapeLibrary", nullptr, (EPropertyFlags)0x0014000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigSettings, DefaultShapeLibrary), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultShapeLibrary_MetaData), NewProp_DefaultShapeLibrary_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultRootModule = { "DefaultRootModule", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigSettings, DefaultRootModule), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRootModule_MetaData), NewProp_DefaultRootModule_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultShapeLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSettings_Statics::NewProp_DefaultRootModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UControlRigSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSettings_Statics::ClassParams = {
	&UControlRigSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UControlRigSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::PropPointers), 0),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigSettings()
{
	if (!Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton, Z_Construct_UClass_UControlRigSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigSettings.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigSettings>()
{
	return UControlRigSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSettings);
UControlRigSettings::~UControlRigSettings() {}
// End Class UControlRigSettings

// Begin Class UControlRigEditorSettings
void UControlRigEditorSettings::StaticRegisterNativesUControlRigEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEditorSettings);
UClass* Z_Construct_UClass_UControlRigEditorSettings_NoRegister()
{
	return UControlRigEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UControlRigEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Customize Control Rig Editor.\n */" },
		{ "DisplayName", "Control Rig Editor" },
		{ "IncludePath", "Settings/ControlRigSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Customize Control Rig Editor." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlsOnCompile_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked all controls will return to their initial\n// value as the user hits the Compile button.\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked all controls will return to their initial\nvalue as the user hits the Compile button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlsOnPinValueInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked all controls will return to their initial\n// value as the user interacts with a pin value\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked all controls will return to their initial\nvalue as the user interacts with a pin value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetPoseWhenTogglingEventQueue_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked all elements will be reset to their initial value\n// if the user changes the event queue (for example between forward / backward solve)\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked all elements will be reset to their initial value\nif the user changes the event queue (for example between forward / backward solve)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUndoForPoseInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked any hierarchy interaction within the Control Rig\n// Editor will be stored on the undo stack\n" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When this is checked any hierarchy interaction within the Control Rig\nEditor will be stored on the undo stack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetControlTransformsOnCompile_MetaData[] = {
		{ "Category", "Compilation" },
		{ "Comment", "/**\n\x09 * When checked controls will be reset during a manual compilation\n\x09 * (when pressing the Compile button)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "When checked controls will be reset during a manual compilation\n(when pressing the Compile button)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigUnitPinExpansion_MetaData[] = {
		{ "Category", "NodeGraph" },
		{ "Comment", "/**\n\x09 * A map which remembers the expansion setting for each rig unit pin.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "A map which remembers the expansion setting for each rig unit pin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionEventBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Construction Event\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Construction Event\" mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsSolveBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Backwards Solve\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Backwards Solve\" mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsAndForwardsBorderColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/**\n\x09 * The border color of the viewport when entering \"Backwards And Forwards\" mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The border color of the viewport when entering \"Backwards And Forwards\" mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStackedHierarchy_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n\x09 * Option to toggle displaying the stacked hierarchy items.\n\x09 * Note that changing this option potentially requires to re-open the editors in question. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "Option to toggle displaying the stacked hierarchy items.\nNote that changing this option potentially requires to re-open the editors in question." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n \x09 * The maximum number of stacked items in the view \n \x09 * Note that changing this option potentially requires to re-open the editors in question. \n \x09 */" },
		{ "EditCondition", "bShowStackedHierarchy" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "The maximum number of stacked items in the view\nNote that changing this option potentially requires to re-open the editors in question." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftMouseDragDoesMarquee_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n\x09 * If turned on we'll offer box / marquee selection in the control rig editor viewport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/ControlRigSettings.h" },
		{ "ToolTip", "If turned on we'll offer box / marquee selection in the control rig editor viewport." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bResetControlsOnCompile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlsOnCompile;
	static void NewProp_bResetControlsOnPinValueInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlsOnPinValueInteraction;
	static void NewProp_bResetPoseWhenTogglingEventQueue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPoseWhenTogglingEventQueue;
	static void NewProp_bEnableUndoForPoseInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUndoForPoseInteraction;
	static void NewProp_bResetControlTransformsOnCompile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetControlTransformsOnCompile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigUnitPinExpansion_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RigUnitPinExpansion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RigUnitPinExpansion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionEventBorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardsSolveBorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardsAndForwardsBorderColor;
	static void NewProp_bShowStackedHierarchy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStackedHierarchy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static void NewProp_bLeftMouseDragDoesMarquee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftMouseDragDoesMarquee;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bResetControlsOnCompile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile = { "bResetControlsOnCompile", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetControlsOnCompile_MetaData), NewProp_bResetControlsOnCompile_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bResetControlsOnPinValueInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction = { "bResetControlsOnPinValueInteraction", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetControlsOnPinValueInteraction_MetaData), NewProp_bResetControlsOnPinValueInteraction_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetPoseWhenTogglingEventQueue_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bResetPoseWhenTogglingEventQueue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetPoseWhenTogglingEventQueue = { "bResetPoseWhenTogglingEventQueue", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetPoseWhenTogglingEventQueue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetPoseWhenTogglingEventQueue_MetaData), NewProp_bResetPoseWhenTogglingEventQueue_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bEnableUndoForPoseInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction = { "bEnableUndoForPoseInteraction", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUndoForPoseInteraction_MetaData), NewProp_bEnableUndoForPoseInteraction_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bResetControlTransformsOnCompile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile = { "bResetControlTransformsOnCompile", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetControlTransformsOnCompile_MetaData), NewProp_bResetControlTransformsOnCompile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_ValueProp = { "RigUnitPinExpansion", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool, METADATA_PARAMS(0, nullptr) }; // 3530926601
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_Key_KeyProp = { "RigUnitPinExpansion_Key", nullptr, (EPropertyFlags)0x0000000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion = { "RigUnitPinExpansion", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigEditorSettings, RigUnitPinExpansion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigUnitPinExpansion_MetaData), NewProp_RigUnitPinExpansion_MetaData) }; // 3530926601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor = { "ConstructionEventBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigEditorSettings, ConstructionEventBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructionEventBorderColor_MetaData), NewProp_ConstructionEventBorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor = { "BackwardsSolveBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigEditorSettings, BackwardsSolveBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardsSolveBorderColor_MetaData), NewProp_BackwardsSolveBorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor = { "BackwardsAndForwardsBorderColor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigEditorSettings, BackwardsAndForwardsBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardsAndForwardsBorderColor_MetaData), NewProp_BackwardsAndForwardsBorderColor_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bShowStackedHierarchy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy = { "bShowStackedHierarchy", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStackedHierarchy_MetaData), NewProp_bShowStackedHierarchy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigEditorSettings, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
void Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_SetBit(void* Obj)
{
	((UControlRigEditorSettings*)Obj)->bLeftMouseDragDoesMarquee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bLeftMouseDragDoesMarquee = { "bLeftMouseDragDoesMarquee", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigEditorSettings), &Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftMouseDragDoesMarquee_MetaData), NewProp_bLeftMouseDragDoesMarquee_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnCompile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlsOnPinValueInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetPoseWhenTogglingEventQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bEnableUndoForPoseInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bResetControlTransformsOnCompile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_RigUnitPinExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_ConstructionEventBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsSolveBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_BackwardsAndForwardsBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bShowStackedHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditorSettings_Statics::NewProp_bLeftMouseDragDoesMarquee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UControlRigEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URigVMEditorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEditorSettings_Statics::ClassParams = {
	&UControlRigEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::PropPointers), 0),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigEditorSettings()
{
	if (!Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton, Z_Construct_UClass_UControlRigEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigEditorSettings.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigEditorSettings>()
{
	return UControlRigEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEditorSettings);
UControlRigEditorSettings::~UControlRigEditorSettings() {}
// End Class UControlRigEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigSettingsPerPinBool::StaticStruct, Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics::NewStructOps, TEXT("ControlRigSettingsPerPinBool"), &Z_Registration_Info_UScriptStruct_ControlRigSettingsPerPinBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSettingsPerPinBool), 3530926601U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSettings, UControlRigSettings::StaticClass, TEXT("UControlRigSettings"), &Z_Registration_Info_UClass_UControlRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSettings), 1902637845U) },
		{ Z_Construct_UClass_UControlRigEditorSettings, UControlRigEditorSettings::StaticClass, TEXT("UControlRigEditorSettings"), &Z_Registration_Info_UClass_UControlRigEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEditorSettings), 13329740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_3582483058(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
