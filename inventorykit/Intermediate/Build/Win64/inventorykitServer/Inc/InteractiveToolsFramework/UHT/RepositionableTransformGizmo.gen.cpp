// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/RepositionableTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepositionableTransformGizmo() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class URepositionableTransformGizmoBuilder
void URepositionableTransformGizmoBuilder::StaticRegisterNativesURepositionableTransformGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepositionableTransformGizmoBuilder);
UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister()
{
	return URepositionableTransformGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepositionableTransformGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombinedTransformGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::ClassParams = {
	&URepositionableTransformGizmoBuilder::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton, Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<URepositionableTransformGizmoBuilder>()
{
	return URepositionableTransformGizmoBuilder::StaticClass();
}
URepositionableTransformGizmoBuilder::URepositionableTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URepositionableTransformGizmoBuilder);
URepositionableTransformGizmoBuilder::~URepositionableTransformGizmoBuilder() {}
// End Class URepositionableTransformGizmoBuilder

// Begin Class URepositionableTransformGizmo
void URepositionableTransformGizmo::StaticRegisterNativesURepositionableTransformGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepositionableTransformGizmo);
UClass* Z_Construct_UClass_URepositionableTransformGizmo_NoRegister()
{
	return URepositionableTransformGizmo::StaticClass();
}
struct Z_Construct_UClass_URepositionableTransformGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transform gizmo that also allows the user to reposition it by middle-clicking rotation/translation components.\n */" },
		{ "IncludePath", "BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ToolTip", "A transform gizmo that also allows the user to reposition it by middle-clicking rotation/translation components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepositionStateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RepositionStateTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepositionableTransformGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget = { "RepositionStateTarget", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URepositionableTransformGizmo, RepositionStateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepositionStateTarget_MetaData), NewProp_RepositionStateTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URepositionableTransformGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombinedTransformGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URepositionableTransformGizmo_Statics::ClassParams = {
	&URepositionableTransformGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_URepositionableTransformGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URepositionableTransformGizmo()
{
	if (!Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton, Z_Construct_UClass_URepositionableTransformGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<URepositionableTransformGizmo>()
{
	return URepositionableTransformGizmo::StaticClass();
}
URepositionableTransformGizmo::URepositionableTransformGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URepositionableTransformGizmo);
URepositionableTransformGizmo::~URepositionableTransformGizmo() {}
// End Class URepositionableTransformGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URepositionableTransformGizmoBuilder, URepositionableTransformGizmoBuilder::StaticClass, TEXT("URepositionableTransformGizmoBuilder"), &Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepositionableTransformGizmoBuilder), 1232382288U) },
		{ Z_Construct_UClass_URepositionableTransformGizmo, URepositionableTransformGizmo::StaticClass, TEXT("URepositionableTransformGizmo"), &Z_Registration_Info_UClass_URepositionableTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepositionableTransformGizmo), 4116498020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_1535340621(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
