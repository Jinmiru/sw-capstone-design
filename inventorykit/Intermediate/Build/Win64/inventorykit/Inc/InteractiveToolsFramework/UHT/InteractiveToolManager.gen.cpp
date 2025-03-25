// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveToolManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolSide();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Enum EToolSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolSide;
static UEnum* EToolSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolSide, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolSide"));
	}
	return Z_Registration_Info_UEnum_EToolSide.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolSide>()
{
	return EToolSide_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** A Tool can be activated on a particular input device, currently identified by a \"side\" */" },
		{ "Left.Comment", "/** Left-hand Tool, also used for Mouse */" },
		{ "Left.Name", "EToolSide::Left" },
		{ "Left.ToolTip", "Left-hand Tool, also used for Mouse" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "Mouse.Name", "EToolSide::Mouse" },
		{ "Right.Comment", "/** Right-hand Tool*/" },
		{ "Right.Name", "EToolSide::Right" },
		{ "Right.ToolTip", "Right-hand Tool" },
		{ "ToolTip", "A Tool can be activated on a particular input device, currently identified by a \"side\"" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolSide::Left", (int64)EToolSide::Left },
		{ "EToolSide::Mouse", (int64)EToolSide::Mouse },
		{ "EToolSide::Right", (int64)EToolSide::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	"EToolSide",
	"EToolSide",
	Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolSide()
{
	if (!Z_Registration_Info_UEnum_EToolSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolSide.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolSide.InnerSingleton;
}
// End Enum EToolSide

// Begin Enum EToolChangeTrackingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolChangeTrackingMode;
static UEnum* EToolChangeTrackingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolChangeTrackingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolChangeTrackingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolChangeTrackingMode"));
	}
	return Z_Registration_Info_UEnum_EToolChangeTrackingMode.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolChangeTrackingMode>()
{
	return EToolChangeTrackingMode_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveToolManager can emit change events for the active tool in various ways.\n * This allows different modes to control how tools activate/deactivate on undo/redo, which is necessary\n * because some modes (eg Modeling Mode) do not support redo \"into\" a Tool, while others require it (like Paint Mode)\n */" },
		{ "FullUndoRedo.Comment", "/** Full change tracking of active Tool. Note that on Activation when an existing Tool is auto-shutdown, two separate FChanges are emitted, wrapped in a single Transaction */" },
		{ "FullUndoRedo.Name", "EToolChangeTrackingMode::FullUndoRedo" },
		{ "FullUndoRedo.ToolTip", "Full change tracking of active Tool. Note that on Activation when an existing Tool is auto-shutdown, two separate FChanges are emitted, wrapped in a single Transaction" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "NoChangeTracking.Comment", "/** Do not emit any Active Tool change events */" },
		{ "NoChangeTracking.Name", "EToolChangeTrackingMode::NoChangeTracking" },
		{ "NoChangeTracking.ToolTip", "Do not emit any Active Tool change events" },
		{ "ToolTip", "UInteractiveToolManager can emit change events for the active tool in various ways.\nThis allows different modes to control how tools activate/deactivate on undo/redo, which is necessary\nbecause some modes (eg Modeling Mode) do not support redo \"into\" a Tool, while others require it (like Paint Mode)" },
		{ "UndoToExit.Comment", "/** When Activating a new Tool, emit a change that will cancel/deactivate that Tool on Undo, but not reactivate it on Redo */" },
		{ "UndoToExit.Name", "EToolChangeTrackingMode::UndoToExit" },
		{ "UndoToExit.ToolTip", "When Activating a new Tool, emit a change that will cancel/deactivate that Tool on Undo, but not reactivate it on Redo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolChangeTrackingMode::NoChangeTracking", (int64)EToolChangeTrackingMode::NoChangeTracking },
		{ "EToolChangeTrackingMode::UndoToExit", (int64)EToolChangeTrackingMode::UndoToExit },
		{ "EToolChangeTrackingMode::FullUndoRedo", (int64)EToolChangeTrackingMode::FullUndoRedo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	"EToolChangeTrackingMode",
	"EToolChangeTrackingMode",
	Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode()
{
	if (!Z_Registration_Info_UEnum_EToolChangeTrackingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolChangeTrackingMode.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolChangeTrackingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolChangeTrackingMode.InnerSingleton;
}
// End Enum EToolChangeTrackingMode

// Begin Class UInteractiveToolManager
void UInteractiveToolManager::StaticRegisterNativesUInteractiveToolManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolManager);
UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister()
{
	return UInteractiveToolManager::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveToolManager allows users of the tools framework to create and operate Tool instances.\n * For each Tool, a (string,ToolBuilder) pair is registered with the ToolManager.\n * Tools can then be activated via the string identifier.\n * \n * Currently a single Tool can be active for each input device. So for mouse input a single\n * Tool is available and effectively a lightweight mode. The mouse uses the \"Left\" tool slot.\n * \n * For VR controllers and touch input, a \"Left\" and \"Right\" tool can be active at the same time.  \n * @todo this is not fully supported yet\n * \n * Tools are not directly created. Use SelectActiveToolType(side,string) to set the active ToolBuilder\n * on a given side, and then use ActivateTool() to create the new Tool instance.\n *\n */" },
		{ "IncludePath", "InteractiveToolManager.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "UInteractiveToolManager allows users of the tools framework to create and operate Tool instances.\nFor each Tool, a (string,ToolBuilder) pair is registered with the ToolManager.\nTools can then be activated via the string identifier.\n\nCurrently a single Tool can be active for each input device. So for mouse input a single\nTool is available and effectively a lightweight mode. The mouse uses the \"Left\" tool slot.\n\nFor VR controllers and touch input, a \"Left\" and \"Right\" tool can be active at the same time.\n@todo this is not fully supported yet\n\nTools are not directly created. Use SelectActiveToolType(side,string) to set the active ToolBuilder\non a given side, and then use ActivateTool() to create the new Tool instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLeftTool_MetaData[] = {
		{ "Comment", "/** Currently-active Left Tool, or null if no Tool is active */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Currently-active Left Tool, or null if no Tool is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRightTool_MetaData[] = {
		{ "Comment", "/** Currently-active Right Tool, or null if no Tool is active */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Currently-active Right Tool, or null if no Tool is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolBuilders_MetaData[] = {
		{ "Comment", "/** Current set of named ToolBuilders */" },
		{ "ModuleRelativePath", "Public/InteractiveToolManager.h" },
		{ "ToolTip", "Current set of named ToolBuilders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveLeftTool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveRightTool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolBuilders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ToolBuilders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool = { "ActiveLeftTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolManager, ActiveLeftTool), Z_Construct_UClass_UInteractiveTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLeftTool_MetaData), NewProp_ActiveLeftTool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool = { "ActiveRightTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolManager, ActiveRightTool), Z_Construct_UClass_UInteractiveTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRightTool_MetaData), NewProp_ActiveRightTool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_ValueProp = { "ToolBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInteractiveToolBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_Key_KeyProp = { "ToolBuilders_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders = { "ToolBuilders", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolManager, ToolBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolBuilders_MetaData), NewProp_ToolBuilders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveLeftTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ActiveRightTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolManager_Statics::NewProp_ToolBuilders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveToolManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveToolManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, (int32)VTABLE_OFFSET(UInteractiveToolManager, IToolContextTransactionProvider), false },  // 1703905301
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolManager_Statics::ClassParams = {
	&UInteractiveToolManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolManager()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolManager.OuterSingleton, Z_Construct_UClass_UInteractiveToolManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolManager.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolManager>()
{
	return UInteractiveToolManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolManager);
UInteractiveToolManager::~UInteractiveToolManager() {}
// End Class UInteractiveToolManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EToolSide_StaticEnum, TEXT("EToolSide"), &Z_Registration_Info_UEnum_EToolSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2664415095U) },
		{ EToolChangeTrackingMode_StaticEnum, TEXT("EToolChangeTrackingMode"), &Z_Registration_Info_UEnum_EToolChangeTrackingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1308615239U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolManager, UInteractiveToolManager::StaticClass, TEXT("UInteractiveToolManager"), &Z_Registration_Info_UClass_UInteractiveToolManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolManager), 1118023971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_3100533962(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
