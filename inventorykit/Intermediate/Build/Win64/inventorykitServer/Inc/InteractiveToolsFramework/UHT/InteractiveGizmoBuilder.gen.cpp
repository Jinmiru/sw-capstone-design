// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveGizmoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInteractiveGizmoBuilder
void UInteractiveGizmoBuilder::StaticRegisterNativesUInteractiveGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveGizmoBuilder);
UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister()
{
	return UInteractiveGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UInteractiveGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\n * These are registered with the InteractiveGizmoManager, which calls BuildGizmo().\n * This is an abstract base class, you must subclass it in order to create your particular Gizmo instance\n */" },
		{ "IncludePath", "InteractiveGizmoBuilder.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoBuilder.h" },
		{ "ToolTip", "A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).\nThese are registered with the InteractiveGizmoManager, which calls BuildGizmo().\nThis is an abstract base class, you must subclass it in order to create your particular Gizmo instance" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams = {
	&UInteractiveGizmoBuilder::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton, Z_Construct_UClass_UInteractiveGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoBuilder>()
{
	return UInteractiveGizmoBuilder::StaticClass();
}
UInteractiveGizmoBuilder::UInteractiveGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoBuilder);
UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder() {}
// End Class UInteractiveGizmoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveGizmoBuilder, UInteractiveGizmoBuilder::StaticClass, TEXT("UInteractiveGizmoBuilder"), &Z_Registration_Info_UClass_UInteractiveGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveGizmoBuilder), 380881847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_4294366357(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
