// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveToolsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolsContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UContextObjectStore_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInteractiveToolsContext
void UInteractiveToolsContext::StaticRegisterNativesUInteractiveToolsContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsContext);
UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister()
{
	return UInteractiveToolsContext::StaticClass();
}
struct Z_Construct_UClass_UInteractiveToolsContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * InteractiveToolsContext owns the core parts of an Interactive Tools Framework implementation - the\n * InputRouter, ToolManager, GizmoManager, TargetManager, and ContextStore. In the simplest\n * use case, UInteractiveToolsContext is just a top-level container that will keep the various UObjects\n * alive, and provide an easy way to access them. However in a more complex situation it may be\n * desirable to subclass and extend the ToolsContext. For example, UEdModeInteractiveToolsContext allows\n * a ToolsContext to live within a UEdMode.\n */" },
		{ "IncludePath", "InteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "InteractiveToolsContext owns the core parts of an Interactive Tools Framework implementation - the\nInputRouter, ToolManager, GizmoManager, TargetManager, and ContextStore. In the simplest\nuse case, UInteractiveToolsContext is just a top-level container that will keep the various UObjects\nalive, and provide an easy way to access them. However in a more complex situation it may be\ndesirable to subclass and extend the ToolsContext. For example, UEdModeInteractiveToolsContext allows\na ToolsContext to live within a UEdMode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRouter_MetaData[] = {
		{ "Comment", "/** current UInputRouter for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInputRouter for this Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "Comment", "/** current UToolTargetManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UToolTargetManager for this Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveToolManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveToolManager for this Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveGizmoManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveGizmoManager for this Context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjectStore_MetaData[] = {
		{ "Comment", "/** \n\x09 * Current Context Object Store for this Context.\n\x09 * Stores arbitrary objects which share data or expose APIs across interactive tools and managers belonging to this context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "Current Context Object Store for this Context.\nStores arbitrary objects which share data or expose APIs across interactive tools and managers belonging to this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolManagerClass_MetaData[] = {
		{ "Comment", "// todo: deprecate and remove this, can now be accomplished via CreateToolManagerFunc()\n" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "todo: deprecate and remove this, can now be accomplished via CreateToolManagerFunc()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRouter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObjectStore;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ToolManagerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter = { "InputRouter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, InputRouter), Z_Construct_UClass_UInputRouter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRouter_MetaData), NewProp_InputRouter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, TargetManager), Z_Construct_UClass_UToolTargetManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager = { "ToolManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, ToolManager), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolManager_MetaData), NewProp_ToolManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager = { "GizmoManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, GizmoManager), Z_Construct_UClass_UInteractiveGizmoManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoManager_MetaData), NewProp_GizmoManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore = { "ContextObjectStore", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, ContextObjectStore), Z_Construct_UClass_UContextObjectStore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObjectStore_MetaData), NewProp_ContextObjectStore_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass = { "ToolManagerClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveToolsContext, ToolManagerClass), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolManagerClass_MetaData), NewProp_ToolManagerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveToolsContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams = {
	&UInteractiveToolsContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveToolsContext()
{
	if (!Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton, Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolsContext>()
{
	return UInteractiveToolsContext::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsContext);
UInteractiveToolsContext::~UInteractiveToolsContext() {}
// End Class UInteractiveToolsContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolsContext, UInteractiveToolsContext::StaticClass, TEXT("UInteractiveToolsContext"), &Z_Registration_Info_UClass_UInteractiveToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsContext), 2688021294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_3466488831(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
