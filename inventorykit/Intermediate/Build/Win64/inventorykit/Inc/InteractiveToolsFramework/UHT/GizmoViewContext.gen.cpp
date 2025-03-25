// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoViewContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoViewContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoViewContext
void UGizmoViewContext::StaticRegisterNativesUGizmoViewContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoViewContext);
UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister()
{
	return UGizmoViewContext::StaticClass();
}
struct Z_Construct_UClass_UGizmoViewContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A context object that is meant to hold the scene information for the hovered viewport\n * on a game thread, to be used by a gizmo later for hit testing. The organization mirrors\n * FSceneView so that functions could be written in a templated way to use either FSceneView\n * or UGizmoViewContext, though UGizmoViewContext only keeps the needed data.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoViewContext.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoViewContext.h" },
		{ "ToolTip", "A context object that is meant to hold the scene information for the hovered viewport\non a game thread, to be used by a gizmo later for hit testing. The organization mirrors\nFSceneView so that functions could be written in a templated way to use either FSceneView\nor UGizmoViewContext, though UGizmoViewContext only keeps the needed data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoViewContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGizmoViewContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoViewContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoViewContext_Statics::ClassParams = {
	&UGizmoViewContext::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoViewContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoViewContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoViewContext()
{
	if (!Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton, Z_Construct_UClass_UGizmoViewContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoViewContext.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoViewContext>()
{
	return UGizmoViewContext::StaticClass();
}
UGizmoViewContext::UGizmoViewContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoViewContext);
UGizmoViewContext::~UGizmoViewContext() {}
// End Class UGizmoViewContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoViewContext, UGizmoViewContext::StaticClass, TEXT("UGizmoViewContext"), &Z_Registration_Info_UClass_UGizmoViewContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoViewContext), 226041478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h_3548089409(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoViewContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
