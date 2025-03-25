// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveGizmoManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin ScriptStruct FActiveGizmo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGizmo;
class UScriptStruct* FActiveGizmo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGizmo, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ActiveGizmo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FActiveGizmo>()
{
	return FActiveGizmo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Gizmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGizmo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo = { "Gizmo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveGizmo, Gizmo), Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gizmo_MetaData), NewProp_Gizmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGizmo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"ActiveGizmo",
	Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers),
	sizeof(FActiveGizmo),
	alignof(FActiveGizmo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton, Z_Construct_UScriptStruct_FActiveGizmo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton;
}
// End ScriptStruct FActiveGizmo

// Begin Class UInteractiveGizmoManager
void UInteractiveGizmoManager::StaticRegisterNativesUInteractiveGizmoManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveGizmoManager);
UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister()
{
	return UInteractiveGizmoManager::StaticClass();
}
struct Z_Construct_UClass_UInteractiveGizmoManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\n * For each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\n * Gizmos can then be activated via the string identifier.\n * \n */" },
		{ "IncludePath", "InteractiveGizmoManager.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\nFor each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\nGizmos can then be activated via the string identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** set of Currently-active Gizmos */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "set of Currently-active Gizmos" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoBuilders_MetaData[] = {
		{ "Comment", "/** Current set of named GizmoBuilders */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "Current set of named GizmoBuilders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoBuilders_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GizmoBuilders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GizmoBuilders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGizmo, METADATA_PARAMS(0, nullptr) }; // 1220040001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveGizmoManager, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGizmos_MetaData), NewProp_ActiveGizmos_MetaData) }; // 1220040001
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp = { "GizmoBuilders_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveGizmoManager, GizmoBuilders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoBuilders_MetaData), NewProp_GizmoBuilders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractiveGizmoManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, (int32)VTABLE_OFFSET(UInteractiveGizmoManager, IToolContextTransactionProvider), false },  // 1703905301
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams = {
	&UInteractiveGizmoManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveGizmoManager()
{
	if (!Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton, Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoManager>()
{
	return UInteractiveGizmoManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoManager);
UInteractiveGizmoManager::~UInteractiveGizmoManager() {}
// End Class UInteractiveGizmoManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveGizmo::StaticStruct, Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewStructOps, TEXT("ActiveGizmo"), &Z_Registration_Info_UScriptStruct_ActiveGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGizmo), 1220040001U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveGizmoManager, UInteractiveGizmoManager::StaticClass, TEXT("UInteractiveGizmoManager"), &Z_Registration_Info_UClass_UInteractiveGizmoManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveGizmoManager), 1275808008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_413286731(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
