// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementHitTargets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementHitTargets() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementHitTarget
void UGizmoElementHitTarget::StaticRegisterNativesUGizmoElementHitTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementHitTarget);
UClass* Z_Construct_UClass_UGizmoElementHitTarget_NoRegister()
{
	return UGizmoElementHitTarget::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementHitTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoElementHitTarget is an IGizmoClickTarget implementation that\n * hit-tests any object derived from UGizmoElementBase\n * This hit target should be used for hitting a whole gizmo element hierarchy.\n * Use UGizmoElementHitMultiTarget, for hit targets that support hitting parts within a gizmo element hierarchy.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementHitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "UGizmoElementHitTarget is an IGizmoClickTarget implementation that\nhit-tests any object derived from UGizmoElementBase\nThis hit target should be used for hitting a whole gizmo element hierarchy.\nUse UGizmoElementHitMultiTarget, for hit targets that support hitting parts within a gizmo element hierarchy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoElement_MetaData[] = {
		{ "Comment", "/**\n\x09 * Gizmo element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "Gizmo element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoElement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoViewContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoTransformProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementHitTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement = { "GizmoElement", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoElement), Z_Construct_UClass_UGizmoElementBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoElement_MetaData), NewProp_GizmoElement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoViewContext_MetaData), NewProp_GizmoViewContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy = { "GizmoTransformProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTransformProxy_MetaData), NewProp_GizmoTransformProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementHitTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoElementHitTarget, IGizmoClickTarget), false },  // 782037479
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::ClassParams = {
	&UGizmoElementHitTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementHitTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementHitTarget()
{
	if (!Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton, Z_Construct_UClass_UGizmoElementHitTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementHitTarget>()
{
	return UGizmoElementHitTarget::StaticClass();
}
UGizmoElementHitTarget::UGizmoElementHitTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementHitTarget);
UGizmoElementHitTarget::~UGizmoElementHitTarget() {}
// End Class UGizmoElementHitTarget

// Begin Class UGizmoElementHitMultiTarget
void UGizmoElementHitMultiTarget::StaticRegisterNativesUGizmoElementHitMultiTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementHitMultiTarget);
UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister()
{
	return UGizmoElementHitMultiTarget::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoElementHitMultiTarget is an IGizmoClickMultiTarget implementation that\n * hit-tests any object derived from UGizmoElementBase. This implementation is used for \n * HitTargets which support hitting multiple parts within a gizmo element hierarchy. \n *\n * For a gizmo with multiple parts, the part identifier establishes a correspondence between a gizmo part \n * and the elements representing that part within the hit target. The valid part identifiers should \n * be defined in the gizmo. Identifier 0 is reserved for the default ID which should be assigned to \n * elements that do not correspond to any gizmo part, such as non-hittable decorative elements.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementHitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "UGizmoElementHitMultiTarget is an IGizmoClickMultiTarget implementation that\nhit-tests any object derived from UGizmoElementBase. This implementation is used for\nHitTargets which support hitting multiple parts within a gizmo element hierarchy.\n\nFor a gizmo with multiple parts, the part identifier establishes a correspondence between a gizmo part\nand the elements representing that part within the hit target. The valid part identifiers should\nbe defined in the gizmo. Identifier 0 is reserved for the default ID which should be assigned to\nelements that do not correspond to any gizmo part, such as non-hittable decorative elements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoElement_MetaData[] = {
		{ "Comment", "/**\n\x09 * Gizmo element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "Gizmo element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoElement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoViewContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoTransformProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementHitMultiTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement = { "GizmoElement", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoElement), Z_Construct_UClass_UGizmoElementBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoElement_MetaData), NewProp_GizmoElement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoViewContext_MetaData), NewProp_GizmoViewContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy = { "GizmoTransformProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTransformProxy_MetaData), NewProp_GizmoTransformProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoElementHitMultiTarget, IGizmoClickMultiTarget), false },  // 622323612
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::ClassParams = {
	&UGizmoElementHitMultiTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget()
{
	if (!Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton, Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementHitMultiTarget>()
{
	return UGizmoElementHitMultiTarget::StaticClass();
}
UGizmoElementHitMultiTarget::UGizmoElementHitMultiTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementHitMultiTarget);
UGizmoElementHitMultiTarget::~UGizmoElementHitMultiTarget() {}
// End Class UGizmoElementHitMultiTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementHitTarget, UGizmoElementHitTarget::StaticClass, TEXT("UGizmoElementHitTarget"), &Z_Registration_Info_UClass_UGizmoElementHitTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementHitTarget), 2163326841U) },
		{ Z_Construct_UClass_UGizmoElementHitMultiTarget, UGizmoElementHitMultiTarget::StaticClass, TEXT("UGizmoElementHitMultiTarget"), &Z_Registration_Info_UClass_UGizmoElementHitMultiTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementHitMultiTarget), 2326250833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_598561087(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
