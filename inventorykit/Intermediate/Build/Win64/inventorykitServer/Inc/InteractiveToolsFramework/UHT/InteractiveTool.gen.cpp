// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Enum EToolShutdownType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolShutdownType;
static UEnum* EToolShutdownType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolShutdownType"));
	}
	return Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolShutdownType>()
{
	return EToolShutdownType_StaticEnum();
}
struct Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accept.Comment", "/** Tool commits current preview to scene */" },
		{ "Accept.Name", "EToolShutdownType::Accept" },
		{ "Accept.ToolTip", "Tool commits current preview to scene" },
		{ "BlueprintType", "true" },
		{ "Cancel.Comment", "/** Tool discards current preview without modifying scene */" },
		{ "Cancel.Name", "EToolShutdownType::Cancel" },
		{ "Cancel.ToolTip", "Tool discards current preview without modifying scene" },
		{ "Comment", "/** Passed to UInteractiveTool::Shutdown to indicate how Tool should shut itself down*/" },
		{ "Completed.Comment", "/** Tool cleans up and exits. Pass this to tools that do not have Accept/Cancel options. */" },
		{ "Completed.Name", "EToolShutdownType::Completed" },
		{ "Completed.ToolTip", "Tool cleans up and exits. Pass this to tools that do not have Accept/Cancel options." },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "Passed to UInteractiveTool::Shutdown to indicate how Tool should shut itself down" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToolShutdownType::Completed", (int64)EToolShutdownType::Completed },
		{ "EToolShutdownType::Accept", (int64)EToolShutdownType::Accept },
		{ "EToolShutdownType::Cancel", (int64)EToolShutdownType::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	"EToolShutdownType",
	"EToolShutdownType",
	Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType()
{
	if (!Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton;
}
// End Enum EToolShutdownType

// Begin Class UInteractiveToolPropertySet
void UInteractiveToolPropertySet::StaticRegisterNativesUInteractiveToolPropertySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolPropertySet);
UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister()
{
	return UInteractiveToolPropertySet::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\n * the configuration flags, parameters, etc that control the Tool. Currently any UObject\n * can be added as a property set, however there is no automatic mechanism for those child\n * UObjects to notify the Tool when a property changes.\n *\n * If you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\n * when the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\n * You can override UInteractiveTool::OnPropertyModified() to act on these notifications\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\nthe configuration flags, parameters, etc that control the Tool. Currently any UObject\ncan be added as a property set, however there is no automatic mechanism for those child\nUObjects to notify the Tool when a property changes.\n\nIf you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\nwhen the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\nYou can override UInteractiveTool::OnPropertyModified() to act on these notifications" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPropertiesMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPropertySetEnabled_MetaData[] = {
		{ "Comment", "// Controls whether a property set is shown in the UI.  Transient so that disabling a PropertySet in one tool doesn't disable it in others.\n" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "Controls whether a property set is shown in the UI.  Transient so that disabling a PropertySet in one tool doesn't disable it in others." },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPropertiesMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedPropertiesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedPropertiesMap;
	static void NewProp_bIsPropertySetEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPropertySetEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_ValueProp = { "CachedPropertiesMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_Key_KeyProp = { "CachedPropertiesMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap = { "CachedPropertiesMap", nullptr, (EPropertyFlags)0x01a4080400202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolPropertySet, CachedPropertiesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPropertiesMap_MetaData), NewProp_CachedPropertiesMap_MetaData) };
void Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit(void* Obj)
{
	((UInteractiveToolPropertySet*)Obj)->bIsPropertySetEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled = { "bIsPropertySetEnabled", nullptr, (EPropertyFlags)0x00a0080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractiveToolPropertySet), &Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPropertySetEnabled_MetaData), NewProp_bIsPropertySetEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams = {
	&UInteractiveToolPropertySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolPropertySet()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton, Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolPropertySet>()
{
	return UInteractiveToolPropertySet::StaticClass();
}
UInteractiveToolPropertySet::UInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolPropertySet);
UInteractiveToolPropertySet::~UInteractiveToolPropertySet() {}
// End Class UInteractiveToolPropertySet

// Begin Class UInteractiveTool
void UInteractiveTool::StaticRegisterNativesUInteractiveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveTool);
UClass* Z_Construct_UClass_UInteractiveTool_NoRegister()
{
	return UInteractiveTool::StaticClass();
}
struct Z_Construct_UClass_UInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\n * A Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\n * the current scene, may capture certain input devices or event streams, and so on.\n * The base implementation essentially does nothing but provide sane default behaviors.\n *\n * The BaseTools/ subfolder contains implementations of various kinds of standard\n * \"tool behavior\", like a tool that responds to a mouse click, etc, that can be\n * extended to implement custom behaviors.\n *\n * In the framework, you do not create instances of UInteractiveTool yourself.\n * You provide a UInteractiveToolBuilder implementation that can properly construct\n * an instance of your Tool, this is where for example default parameters would be set.\n * The ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\n * is used to kick things off.\n *\n * @todo callback/delegate for if/when .InputBehaviors changes\n * @todo callback/delegate for when tool properties change\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\nA Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\nthe current scene, may capture certain input devices or event streams, and so on.\nThe base implementation essentially does nothing but provide sane default behaviors.\n\nThe BaseTools/ subfolder contains implementations of various kinds of standard\n\"tool behavior\", like a tool that responds to a mouse click, etc, that can be\nextended to implement custom behaviors.\n\nIn the framework, you do not create instances of UInteractiveTool yourself.\nYou provide a UInteractiveToolBuilder implementation that can properly construct\nan instance of your Tool, this is where for example default parameters would be set.\nThe ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\nis used to kick things off.\n\n@todo callback/delegate for if/when .InputBehaviors changes\n@todo callback/delegate for when tool properties change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBehaviors_MetaData[] = {
		{ "Comment", "/** The current set of InputBehaviors provided by this Tool */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of InputBehaviors provided by this Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolPropertyObjects_MetaData[] = {
		{ "Comment", "/** The current set of Property UObjects provided by this Tool. May contain pointer to itself. */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of Property UObjects provided by this Tool. May contain pointer to itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBehaviors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolPropertyObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolPropertyObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors = { "InputBehaviors", nullptr, (EPropertyFlags)0x01a4080400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveTool, InputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBehaviors_MetaData), NewProp_InputBehaviors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x01a4080400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveTool, ToolPropertyObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolPropertyObjects_MetaData), NewProp_ToolPropertyObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UInteractiveTool, IInputBehaviorSource), false },  // 1605045832
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveTool_Statics::ClassParams = {
	&UInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveTool()
{
	if (!Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton, Z_Construct_UClass_UInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveTool>()
{
	return UInteractiveTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveTool);
UInteractiveTool::~UInteractiveTool() {}
// End Class UInteractiveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EToolShutdownType_StaticEnum, TEXT("EToolShutdownType"), &Z_Registration_Info_UEnum_EToolShutdownType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4139486440U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolPropertySet, UInteractiveToolPropertySet::StaticClass, TEXT("UInteractiveToolPropertySet"), &Z_Registration_Info_UClass_UInteractiveToolPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolPropertySet), 809415248U) },
		{ Z_Construct_UClass_UInteractiveTool, UInteractiveTool::StaticClass, TEXT("UInteractiveTool"), &Z_Registration_Info_UClass_UInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveTool), 525196482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_2770071697(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
